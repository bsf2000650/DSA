#include<iostream>
#include<string>
using namespace std;

string removeOccurences(string &str, string &part){
    while (str.length()>=0 && str.find(part) < str.length() )
    {
        str.erase(str.find(part),part.length());
    }
    return str;
}

int main(){
    string str,s,part;
    cout << "Enter string : " ;
    cin >> s;
    cout << endl << "Enter part : ";
    cin >> part;
    s = removeOccurences(s,part);
    cout << "\nModified String is " << s << endl;

}