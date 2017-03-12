//
// Created by 王青龙 on 2017/3/12.
//

#ifndef LEETCODE144_SOLUTION_H
#define LEETCODE144_SOLUTION_H

#include <vector>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    std::vector<int> preoderTraversal(TreeNode *root);
};

#endif //LEETCODE144_SOLUTION_H
