#include<string>
#include<iostream>
using namespace std;
int main()
{
   string str;
   cout << "Enter string";
   cin >> str;
   int n = 0;
   for(int i = 0; i < str.size(); i++)
   {
        if(str[i]=='(' || str[i]=='{' || str[i]=='[') {n++;}
        if(str[i]==')' || str[i]=='}' || str[i]==']') {n--;}
    }
    if (n == 0) cout << "yes";
    if (n > 0 || n < 0) cout << "no";
    return 0;
}