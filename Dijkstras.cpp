#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <climits>
using namespace std;

class edge {
    public :
    int v ;
    int wt;

    edge(int v , int wt) {
        this->v = v ;
        this->wt = wt ; 
    }
};

void dijkstra(int src, vector<vector<edge>>g, int V) {
    vector<int> dist(g.size() , INT_MAX) ;
    dist[src] = 0 ;

    priority_queue<pair<int , int> , vector<pair<int , int>> , greater<pair<int , int>>> pq ;
    pq.push({0 , src}) ;


    while(pq.size()> 0) {
        int u = pq.top().second ;
        pq.pop() ;

        for(edge e : g[u]) {
            int v = e.v ;
            int wt = e.wt ;

            if(dist[u] + wt < dist[v]) {
                dist[v] = dist[u] + wt ;
                pq.push({dist[v] , v}) ;
            }
        }
    }

    for(int i = 0 ; i < V ; i++) {
        cout << dist[i] << " " ;
    }
    cout << endl ;
}

int main() {
    int V = 6 ;
    vector<vector<edge>> g(V) ;

    g[0].push_back(edge(1 , 2)) ;
    g[0].push_back(edge(2 , 4)) ;  

    g[1].push_back(edge(2 , 1)) ;
    g[1].push_back(edge(3 , 7)) ;      

    g[2].push_back(edge(4 , 3)) ;  

    g[3].push_back(edge(5 , 1)) ;

    g[4].push_back(edge(3 , 2)) ;  
    g[5].push_back(edge(5 , 5)) ;

    int src = 0 ;
    dijkstra(0, g, V) ; 
    

    return 0 ;
}

