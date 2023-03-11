void preorder(Node *root,int level,vector<int> &ans)
{
    if(root==NULL)
        return;
    if(ans.size()<level)
        ans.push_back(root->data);
    preorder(root->left,level+1,ans);
    preorder(root->right,level+1,ans);
}
vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> ans;
   preorder(root,1,ans);
   return ans;
}
