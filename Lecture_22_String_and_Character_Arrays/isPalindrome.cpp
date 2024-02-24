#include<iostream>
#include<string>
using namespace std;

bool valid(char ch){
    if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')||(ch>='0' && ch<='9'))
        return true;
    
    return 0;
}

char toLowerCase(char ch){
    if ((ch>='a' && ch<='z')||(ch>='0'&& ch<='9'))
    {
        return ch;
    }else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
    
    
}

bool checkPalindrome(string s){
    int st = 0;
    int e =  s.length()- 1;
    while (st<=e)
    {
        if(s[st]!=s[e]){
            return 0;
        }else{
            st++;
            e--;
        }
    }
    return 1;
}

bool isPalindrome(string s){

    string temp = "";

    // 1. Remove uncessary chars
    for (int j = 0; j < s.length(); j++)
    {
        if (valid(s[j]))
        {
            temp.push_back(s[j]);
        }
    }

    // 2. Converting to lower case
    for (int j = 0; j < temp.length(); j++)
    {
        temp[j] = toLowerCase(temp[j]);
    }

    // 3. check is Palindrom
    return checkPalindrome(temp);
    
    
}

int main(){
    string s = "A man, a plan, a canal: Panama";
    if(isPalindrome(s))
        cout << endl << "Yes: Palindrome" << endl;
    else
        cout  << endl << "No: Not Palindrome" << endl;
    return 0;
}