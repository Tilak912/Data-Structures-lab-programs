#include<iostream>
using namespace std;
int a[10][10],i,j,k,n,qu[10],front,rare,v,visit[10],visited[10];
int main()
{
    int m;
    cout<<"Enter number of vertices:";
    cin>>n;
    cout<<"Enter number of edges:";
    cin>>m;
    cout<<"\nEdges\n";
    for(k=1;k<=m;k++)
    {
        cin>>i>>j;
        a[i][j]=1;
    }
    cout<<"enter initial vertex:";
    cin>>v;
    cout<<"Visited vertices:";
    cout<<v<<" ";
    visited[v]=1;
    k=1;
    while(k<n)
    {
        for(j=1;j<=n;j++)
        if(a[v][j]!=0 && visited[j]!=1 && visit[j]!=1)
        {
            visit[j]=1;
            qu[rare++]=j;
        }
        v=qu[front++];
        cout<<v << " ";
        k++;
        visit[v]=0; visited[v]=1;
    }
}
