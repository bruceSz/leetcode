#include "../common.h"

using namespace std;


	void SubL::doGenSub(vector<int>& arr, int idx) {
		if (idx == arr.size()) {
			for (int i=0;i<arr.size();i++) {
				cout << "#";
				if (used[i]) {
					cout <<  arr[i];
				}
			}
			cout << std::endl;
		} else {
			// without this.
			doGenSub(arr, idx + 1);
			this->used[idx] = true;
			doGenSub(arr,idx + 1);
			used[idx] = false;
		}
	}
	void SubL::sublists(vector<int>& arr) {
		used.resize(arr.size(), false);
		this->doGenSub(arr, 0);
		return;
	}	


