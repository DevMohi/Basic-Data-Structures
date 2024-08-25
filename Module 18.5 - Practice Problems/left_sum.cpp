// long long leftSum(BinaryTreeNode<int> *root)
// {
// 	if(root == NULL){
// 		return 0; 
// 	}
// 	long long int sum = 0; 

// 	if(root -> left != NULL){
// 		sum = sum + root -> left -> data;
// 	}
	
// 	sum += leftSum(root -> left);
// 	sum += leftSum(root -> right);

// 	return sum;
// }