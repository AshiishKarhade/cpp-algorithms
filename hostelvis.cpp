#include<iostream>
#include<queue>
#include <functional>
//#include<bits/stdc++.h>
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

    void print_dist(){
        cout << x*x + y*y << endl;
    }
};

class HostelCompare{
    public:
    bool operator()(Hostels h1, Hostels h2){
        return h1.dist() > h2.dist();
    }
};


int main() {
    priority_queue<Hostels,vector<Hostels>, HostelCompare> pq;

    int Q, K;
    cin >> Q;
    cin >> K;

    for(int i=0; i<Q; i++){

        int next;
        cin >> next;

        if(next == 1){
            int xco, yco;
            cin >> xco;
            cin >> yco;
            Hostels hos(xco, yco);
            pq.push(hos);
        }
        if(next == 2){
           // i++;
            for(int i=0; i<K;i++){
                pq.pop();
            }
            Hostels hos3 = pq.top();
            hos3.print_dist();
        }
    }

	return 0;
}


//9 3
//1 10 10
//1 9 9
//1 -8 -8
//2
//1 7 7/
//2
//1 6 6 
//1 5 5
//2
