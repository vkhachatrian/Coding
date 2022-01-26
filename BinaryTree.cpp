//#include <iostream>
//using namespace std;
//
//const int indent = 6;
//
//
//struct Node
//{
//	int data;
//	Node* left;
//	Node* right;
//	Node(int data = 0, Node* l = 0, Node* r = 0)
//	{
//		this->data = data;
//		this->left = l;
//		this->right = r;
//	}
//};
//
//Node* Tree(int n)
//{
//	Node* newnode = nullptr;
//	int x, nl, nr;
//	if (n == 0) newnode == NULL;
//	else
//	{
//		nl = n / 2;
//		nr = n - nl - 1;
//		cin >> x;
//		newnode = new Node;
//		newnode->data = x;
//		newnode->left = Tree(nl);
//		newnode->right = Tree(nr);
//	}
//	return newnode;
//}
//
//void Printtree(Node* root, int level)
//{
//	if (root != NULL)
//	{
//		Printtree(root->left, level + 1);
//		for (int i = 0; i < indent * level; ++i)
//		{
//			cout << ' ';
//		}
//		cout << root->data << endl;
//		Printtree(root->right, level + 1);
//	}
//}
//
//int CountOfNodes(Node* root, int level)
//{
//	if (root == nullptr)return 0;
//	if (level == 0) return 1;
//	return CountOfNodes(root->left, level - 1) + CountOfNodes(root->right, level - 1);
//}
//
//
//
//
//int main()
//{
//	Node* root;
//	int n;
//	cout << " Enter the count of roots " << endl;
//	cin >> n;
//	root = Tree(n);
//	Printtree(root, 0);
//	cout << endl;
//	cout << CountOfNodes(root, 2);
//
//	return 0;
//}