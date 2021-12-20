#include<iostream>
#include<fstream>
#include<tree_node.h>
#include<queue>
using namespace std;
//102.¶þ²æÊ÷µÄ²ãÐò±éÀú
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(!root) return vector<vector<int>>();
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> res_buff;
            int this_level_count=q.size();
            for(int i=0;i<this_level_count;i++){
                if(!q.front()){
                    q.pop();
                    continue;
                }
                TreeNode* top_buff=q.front();
                res_buff.push_back(top_buff->val);
                q.pop();
                q.push(top_buff->left);
                q.push(top_buff->right);
            }
            if(!res_buff.empty())
            res.push_back(res_buff);
        }
        return res;
    }
};
int main(){
    return 0;
}