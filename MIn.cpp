#include<bits/stdc++.h>
#define FOR(n)for(int i = 0; i < n; i++)
#define ll long long
using namespace std;

class Minheap{
    vector<int>v;
    void heapify(int i){
        int l=2*i,r=l+1,mi=i;
        if(l<v.size()and v[mi]>v[l])mi=l;
        if(r<v.size()and v[mi]>v[r])mi=r;
        if(mi!=i){
            swap(v[mi],v[i]);
            heapify(mi);
        }

    }
    public:
    Minheap(){
        v.push_back(-1);

    }
    void push(int d){
        v.push_back(d);
        int c=v.size()-1,p=c/2;
        while(p>0 and v[p]>v[c]){
            swap(v[p],v[c]);
            p=p/2;
            c=c/2;
        }
    }
    int top(){
        return v[1];
    }
    void pop(){
        swap(v[1],v[v.size()-1]);
        v.pop_back();
        heapify(1);
    }
    bool empty(){
        return v.size()==1;
    }
};

int main(){
       Minheap h;

    h.push(10);
    h.push(5);
    h.push(20);
    h.push(2);

    while (!h.empty()) {
        cout << h.top() << " ";
        h.pop();
    }

    return 0;

}