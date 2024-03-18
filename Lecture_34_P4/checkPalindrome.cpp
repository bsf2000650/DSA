#include<iostream>
#include<string>
using namespace std;

bool checkPalindrome(string& str, int i, int j){
    if(i>j)
        return true;
    
    if (str[i] != str[j])
        return false;
    else
        return checkPalindrome(str,i+1,j-1);
    
}

int main(){
    string str = "ebcde";
    bool palindrome = checkPalindrome(str,0,str.length()-1);
    if(palindrome)
        cout << "Its a palindrome" << endl;
    else
        cout << "Its not a palindrome " << endl;
}