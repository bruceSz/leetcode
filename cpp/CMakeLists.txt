cmake_minimum_required(VERSION 2.8.2)
 
 project(lc)
 add_definitions(-std=c++11)

 SET(reverse_SOURCE
    reverse_int.cc
 )

 SET(sqrt_SOURCE
   find_sqrt.cc
 )

 SET(tree_path_sum_SOURCE
   tree_path_sum.cc
 )

 add_executable(rev ${reverse_SOURCE})
 add_executable(find_sqrt ${sqrt_SOURCE})

 add_executable(tree_path_sum ${tree_path_sum_SOURCE})


