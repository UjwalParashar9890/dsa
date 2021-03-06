//breadth first search code in c++
#include<iostream>
#include<list>
#include<queue>
using namespace std;

class graph{
    int V;
    list<int>*l;
    
    public:
    graph(int v){
        this->V=v;
        l=new list<int>[v];
    }
    void addEdge(int i,int j,bool undir=true){
        l[i].push_back(j);
        if(undir){
            l[j].push_back(i);
        }
    }
    void bfs(int source){
        queue<int>q;
        bool*visited=new bool[V]{0};
        q.push(source);
        visited[source]=true;
        while(!q.empty())
        {
            //do some work for every node
            int f=q.front();
            cout<<f<<endl;
            q.pop();
            //push the nbrs of current node inside "q" if they are not already visited
            for(auto nbr:l[f])
            {
                if(!visited[nbr])
                {
                    q.push(nbr);
                    visited[nbr]=true;
                }
            }
        }
    }
};
int main()
{
    graph g(7);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(4,0);
    g.addEdge(3,4);
    g.addEdge(3,5);
    g.addEdge(4,5);
    g.addEdge(5,6);
    g.bfs(1);
    
    return 0;
}