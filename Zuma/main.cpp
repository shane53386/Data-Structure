#include <iostream>
#include <list>
using namespace std;

int main()
{
    int N,K,V;
    cin >> N >> K >> V;
    list<int> order;
    iterator it = order.begin();
    while (N--){
        int num;
        cin >> num;
        order.push_back(num);
    }
    while (K--) it++;
    cout << order.size();
}

