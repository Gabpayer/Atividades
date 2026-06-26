#include <iostream>
#include <vector>
using namespace std;

int main() {
    int vertices = 3;
    vector<int> adj[vertices];
    
    adj[0].push_back(1);
    adj[1].push_back(0);
    adj[1].push_back(2);
    adj[2].push_back(1);
    
    for(int i = 0; i < vertices; i++) {
        cout << "No " << i << " conectado com: ";
        for(int vizinho : adj[i]) {
            cout << vizinho << " ";
        }
        cout << endl;
    }
    return 0;
}
