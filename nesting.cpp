#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int l=0;l < t;l++)
    {
        string c,str,s;
    //char str[500];
    cin >> c;
    int n = c.length();
    s=c;
    // declaring character array
   /* char char_array[n + 1];

    // copying the contents of the
    // string to char array
    strcpy(char_array, c.c_str());

    for (int i = 0; i < n; i++)
        cout << char_array[i] <<endl;*/
    for(int re=0;re<(s[0]-'0');re++)
            str+='(';
       for(int i=0;i<s.length()-1;i++)
        {
            if(s[i+1]-'0'<s[i]-'0')
            {
                str+=s[i];
                for(int re=0;re<abs(s[i+1]-s[i]);re++)
                    str+=')';
            }
            else
            {
                str+=s[i];
                for(int re=0;re<abs(s[i+1]-s[i]);re++)
                    str+='(';
            }
        }
        str+=s[s.length()-1];
        for(int i=0;i<s[s.length()-1]-'0';i++)
            str+=')';
        cout << "Case #"<<l+1<<": "<<str<<endl ;
    }
}
