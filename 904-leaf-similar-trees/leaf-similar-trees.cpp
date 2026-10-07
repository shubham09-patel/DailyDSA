/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    void firstTree(TreeNode* root1, vector<int>& tree1){
        if (root1 == nullptr)
        return;

         if(!root1->left && !root1->right){
            tree1.push_back(root1->val);
            return;
        }
        firstTree(root1->left, tree1);
       firstTree(root1->right, tree1);

    }
   void secondTree(TreeNode* root2, vector<int>& tree2){
        if (root2 == nullptr)

            return;
        if(!root2->left && !root2->right){
            tree2.push_back(root2->val);
            return;
        }
        secondTree(root2->left, tree2);
        secondTree(root2->right, tree2);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>tree1;
        vector<int>tree2;

        firstTree(root1, tree1);
        secondTree(root2, tree2);

        int t1 = tree1.size();
        int t2 = tree2.size();

        if(t1 != t2){
            return false;
        }

        for(int i = 0; i<t1; i++){
            if(tree1[i] != tree2[i]){
                return false;
            }
        }
        return true;
        
       
        
    }
};