#include<iostream>
#include<list>
#include <vector>
#include<queue>
#include<stack>
#include<map>
using namespace std;
int main(){

    // multimap means same keys 
    multimap<string,int> m;
    m.insert({"Tv",200});
    m.insert({"Tv",300});
    m.insert({"Tv",400});
    m.insert({"Tv",200});

    for(auto val:m){
        cout<<val.first<<" "<<val.second<<endl;
    }
   
};