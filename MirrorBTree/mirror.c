//操作给定的二叉树，将其变换为源二叉树的镜像。

struct TreeNode* Mirror(struct TreeNode* pRoot ) {


  if(pRoot == NULL)
  {
    return NULL;                  
  }
          
  Mirror(pRoot->left);
  Mirror(pRoot->right);
                  
  struct TreeNode* tmp = pRoot->left;
  pRoot->left = pRoot->right;
  pRoot->right = tmp;
                              
  return pRoot;

}
