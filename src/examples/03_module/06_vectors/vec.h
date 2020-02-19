#include<string>
#include<iostream>
#include<vector>

using std::vector; using std::cout;

/*
Write function prototype for function loop_vector_w_index with no parameters.

*/

void loop_vector_w_index(std::vector<int> nums);


/*
Write function prototype for function loop_vector_w_index with a vector of int pass by value parameter.

*/
void loop_vector_w_index_ref(std::vector<int> &nums);


/*
Write function prototype for function loop_vector_w_index with a vector of int pass by reference parameter.
*/
void loop_vector_w_index_ref_const(const std::vector<int> &nums);

void loop_vector_w_auto(std::vector<int> &nums);
void loop_vector_w_auto_ref(std::vector<int> &nums);
void loop_vector_w_auto_const(const std::vector<int> &nums);

/*
Write function prototype for function loop_vector_w_index with a vector of int const pass by reference parameter.
*/



