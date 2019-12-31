#include<iostream>
#include<queue>
//#include <bits/stdc++.h>
using namespace std;

class Hostels{
    public:
    int x;
    int y;
    Hostels(int x, int y){
        this->x = x;
        this->y = y;
    }

    int dist(){
        return x*x + y*y;
    }
};

class HostelCompare{
    public:
    bool operator()(Hostels h1, Hostels h2){
        return h1.dist() < h2.dist();
    }
};


int main() {
    priority_queue <Hostels,vector<Hostels>, HostelCompare> pq;

    /*
        for(int i=0; i<Q; i++){

            int next;
            cin >> next;

            if(next == 1){
                //push co-ordinates to the pq
            }
            if(next == 2){
                /// pop Kth element somehow
            }
        }
    */
    int Q, K;
    cin >> Q;
    cin >> K;
    for(int i=0; i<K; i++){
        int x_co, y_co;
        Hostels hos(x_co, y_co);
        pq.push(hos);
    }

    while(!pq.empty()){
        cout << pq.top() << ",";
        pq.pop();
    }

	return 0;
}
