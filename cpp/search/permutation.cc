
#include "../common.h"

class Perm {



private:
	vector<vector<int>> ans;
public:
	void doPerm(int idx, int nums[], int len) {
		int total = len;//(GET_ARR_LEN(nums, int);
		if (idx == (total-1)) {
			vector<int> tmp;
			for (int i=0; i<total;i++ ) {
				tmp.push_back(nums[i]);
			}
			ans.push_back(tmp);
			return;
		}
		for (int j = idx; j < total; j++ ) {
			std::swap(nums[j], nums[idx]);
			doPerm(idx +1,nums, len );

			std::swap(nums[j],nums[idx]);
		}

	}

	void doPerm1(int idx, int nums[]) {

	}

	
	int perm(int nums[], int len) {
		//int len = GET_ARR_LEN(nums);
		if (len == 0)
			return 0;
		doPerm(0, nums, len);
	}

};
