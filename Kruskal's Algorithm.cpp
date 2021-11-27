#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int parent[100];
int find(int x)
{
    if(parent[x] == x)
    {
        return x;
    }
    return find(parent[x]);
}
void all(int x, int y)
{
    int findOfX = find(x);
    int findOfY = find(y);
    parent[findOfX] = findOfY;
}
int main()
{
    for (int i=0;i<100;i++)
    {
        parent[i]=i;
    }
    int n,e;
    int a,b,w;
    vector<pair<int,pair<int,int> > >edges;
    cin>>n>>e;
    for(int i=0;i<e;i++)
    {
        cin>>a>>b>>w;
        edges.push_back(make_pair(w,make_pair(a,b)));
    }
    cout<<endl;
    int mst_weight=0;
    int mst_edges=0;
    int start=0;
    sort(edges.begin(),edges.end());

    while((mst_edges<n-1)||(start<e))
    {
        a = edges[start].second.first;
        b = edges[start].second.second;
        w = edges[start].first;

        if(find(a)!=find(b))
        {
            all(a,b);
            mst_weight=mst_weight+w;
            cout<<a<<" "<<b<<" "<<w<<endl;
            mst_edges++;
        }
        start++;
    }
    cout<<"\nThe MST is: "<<mst_weight<<endl;

}
