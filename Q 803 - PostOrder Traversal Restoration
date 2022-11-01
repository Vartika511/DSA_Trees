#include<bits/stdc++.h>
using namespace std;


class Node {
    public:
    int val;
    Node *left;
    Node *right;
    Node (int x) {
        val=x;
        left=right=NULL;
    }
};
Node *f(vector<int> &pre, vector<int> &in, int lo, int hi, int &ind) {
    if(lo>hi) return NULL;
    int i, rootIndex;
    for(i=lo;i<=hi;i++) {
        if(pre[ind]==in[i]) {
            rootIndex=i;
            break;
        }
    }
    ind++;
    Node *root=new Node(in[rootIndex]);
    root->left=f(pre, in, lo, rootIndex-1, ind);
    root->right=f(pre, in, rootIndex+1, hi, ind);
    return root;
}
Node* buildTree(vector<int>& pre, vector<int>& in) {
    int lo=0, hi=in.size()-1, ind=0;
    return f(pre, in, lo, hi, ind);
}
void postOrderTraversal(Node *root) {
    if(!root) return;
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<char(root->val);
}
void printPostOrder(int inOrder[], int preOrder[], int n) {
    vector<int> in(n), pre(n);
    for(int i=0;i<n;i++) {
        in[i]=inOrder[i];
        pre[i]=preOrder[i];
    }
    Node *root=buildTree(pre, in);
    postOrderTraversal(root);
}
int main(){
    string a;
    cin>>a;
    string b;
    cin>>b;
    int one=a.length();
    int two=b.length();
    
    int arr[one];
    int brr[two];
    for(int i=0;i<one;i++){
        arr[i]=a[i];
        brr[i]=b[i];
    }
    printPostOrder(arr,brr,one);
    
}
