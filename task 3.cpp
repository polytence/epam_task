#include <iostream>
#include <string>

using namespace std;

bool check(char ch)
{
    if(ch == ' ' || ch == ',' || ch == '.')
        return true;
    return false;
}
 
int main()
{
    string s, t;
    string* str;
    int index = 0;
    int count = 0;
    int size;
    cout << "Enter string: ";
    getline(cin, s); 
    while(s[index]) 
    {
        if(!check(s[index])) 
        {                         
            while(check(s[index])) 
            {
                index++; 
            }
            count++; 
        }
        index++; 
    }
    size = count + 1; 
    str = new string[size]; 
    count = 0;
    index = 0;
    while(s[index])
    {
        if(!check(s[index]))
        {
            t += s[index]; 
            if(!s[index + 1])
            {
                str[count] = t;
                count++; 
            }              
        }
        else
        {
            if(t != "") 
            {
                str[count] = t; 
                t.clear();
                count++; 
            }
        }
        index++;
    }
    count = 0;
    for(int i = 0; i < size; i++)
    {
        t = str[i];
        for(int j = 0; j < size; j++)
        {
            if(t == str[j]) 
                count++; 
        }
        if(count == 1) 
            cout << str[i] << "\n"; 
        count = 0; 
    }
    cout << "\n";
    return 0;    
}