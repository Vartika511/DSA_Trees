#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int a[100000][2];
int stack1[100000],stack2[10000];
int main() {
     int parent,child;
    char ch;
    int n;
    cin>>n;
    for(int i=0;i<100000;i++)
        for(int j=0;j<2;j++)
            a[i][j]=-1;
    for(int i=1;i<n;i++)
    {
        cin>>parent>>child>>ch;
        if(ch=='L')
        {
            a[parent][0]=child;
        }
        else
            a[parent][1]=child;
    }
    int head1=-1,head2=-1;
        stack1[++head1]=1;
    while(head1!=-1)
    {
        while(head1!=-1)
        {
            if(a[stack1[head1]][0]!=-1)
                stack2[++head2]=a[stack1[head1]][0];
            if(a[stack1[head1]][1]!=-1)
                stack2[++head2]=a[stack1[head1]][1];
            cout<<stack1[head1--]<<" ";
        }
        while(head2!=-1)
        {
             if(a[stack2[head2]][1]!=-1)
                stack1[++head1]=a[stack2[head2]][1];
            if(a[stack2[head2]][0]!=-1)
                stack1[++head1]=a[stack2[head2]][0];
            cout<<stack2[head2--]<<" ";
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
