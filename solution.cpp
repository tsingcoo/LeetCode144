//
// Created by 王青龙 on 2017/3/12.
//

#include <stack>
#include "solution.h"

std::vector<int> Solution::preoderTraversal(TreeNode *root) {
    if (root == NULL) {
        return std::vector<int>();
    }
    std::vector<int> res;
    std::stack<TreeNode *> treeStack;
    treeStack.push(root);
    while (!treeStack.empty()) {
        auto temp = treeStack.top();
        res.push_back(temp->val);
        treeStack.pop();
        if (temp->right != NULL) {
            treeStack.push(temp->right);
        }
        if (temp->left != NULL) {
            treeStack.push(temp->left);
        }
    }
    return res;

}
