#include <iostream>
using namespace std;
int search(int arr[], int x, int n)
{
	for (int i = 0; i < n; i++)
		if (arr[i] == x)
			return i;
	return -1;
}
void printPostOrder(int in[], int pre[], int n)
{
	int root = search(in, pre[0], n);
	if (root != 0)
		printPostOrder(in, pre + 1, root);
	if (root != n - 1)
		printPostOrder(in + root + 1, pre + root + 1, n - root - 1);
	cout << (char)pre[0];
}
int main()
{
	string s1;
	cin >> s1;
	string s2;
	cin >> s2;
	int in[s1.length()];
	int pre[s2.length()];
	for (int a = 0; a < (s1.length()); a++) {
		in[a] = (int)s1[a];
	}
	for (int a = 0; a < (s2.length()); a++) {
		pre[a] = (int)s2[a];
	}
	int n = sizeof(in) / sizeof(in[0]);
	printPostOrder(in, pre, n);
	return 0;
}
