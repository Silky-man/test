#include<iostream>
#include<list>
#include<vector>
#include<unordered_map>
#include<set>

using namespace std;

int main()
{
    list<int> tmplist;
    vector<int> tmpvector;
    unordered_map<int,int> tmpmap;
    set<int> tmpset;

    tmplist.resize(50);
    tmpvector.resize(50);

    cout<<tmplist.size()<<endl;
    cout<<tmpvector.capacity()<<endl;
    cout<<tmpmap.max_bucket_count()<<endl;
    cout<<tmpset.max_size()<<endl;

    return 0;
}