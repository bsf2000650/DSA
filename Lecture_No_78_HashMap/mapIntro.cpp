#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    // creation
    unordered_map<string, int> m;

    // insertion
    //1
    pair<string,int> p = make_pair("asad",3);
    m.insert(p);

    //2
    pair<string,int> p1("khan",1);
    m.insert(p1);

    //3
    m["mera"] = 4;

    cout << m["mera"] << endl;
    cout << m.at("asad") << endl;

    cout << m.size() << endl;

    cout << m.count("asad") << endl;

    cout << m.erase("khan") << endl;
    cout << m.size() << endl;

    unordered_map<string,int> :: iterator it = m.begin();

    while (it != m.end())
    {
        cout << it->first << " " << it->second << endl;
        it++;
    }

    return 0;
    
}