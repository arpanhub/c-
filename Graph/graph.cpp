//Linw->2---------------------create graph using 2d vector
//line->33--------------------using  fucntions method
//line->find the elements in graph
// /* #include <iostream>
// #include <vector>
// using namespace std;
// int main()

// {
//     int v;
//     cin>>v;
//     vector<vector<int>>Mat(v,vector<int>(v));
//     int edge;
//     cout<<"enter the no. of edge:";
//     cin>> edge;
//     for(int i=0;i<edge;i++){
//         int a,b;
//         cin>>a>>b;
//         Mat[a][b]=1;
//         Mat[b][a]=1;
//     }
//     for(int i=0; i<v;i++){
//         for(int j=0;j<v;j++){
//             cout<<Mat[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//        return 0;
// } */

// using  fucntions method

//find the elements in graph
#include <iostream>
#include <vector>
using namespace std;
// const int N=100;
// vector<int> graph[N];
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> graph[n+1];
    for(int i=0;i <m;i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for(int i=1;i<n+1;i++){
        cout<<i<<"->";
        for(int j=0;j<graph[i].size();j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

