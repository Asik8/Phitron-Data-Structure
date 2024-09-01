long long leftSum(BinaryTreeNode<int> *root)
{
	long long sum = 0;
	queue<BinaryTreeNode<int> *>q;
	q.push(root);
	while(!q.empty())
	{
		BinaryTreeNode<int> *f = q.front();
		q.pop();
		if(f->left)
		{
			q.push(f->left);
			sum+= f->left->data;
		}
		if(f->right) q.push(f->right);
	}
	return sum;
}