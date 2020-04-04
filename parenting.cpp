#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long int test_cases,total;
  cin>> test_cases;
  total=test_cases;

 for(int index=0;index<test_cases;index++)
 {
    long long int no_task;
    cin>>no_task;
    int s,e,temp,flag=0;
    set<pair<pair<int,int>,int> > slots;
    string result="";

    for(int t=0;t<no_task;t++)
    {
        result+="#";
        cin>>s>>e;
        slots.insert(make_pair(make_pair(s,e),t));
    }
    int max_c=0,max_j=0,min_c=0,min_j=0,c=0,j=0;
       for (auto const &x : slots) {
        s = x.first.first;
        e=x.first.second;
        if(s>=max_c)c=0;
        if(s>=max_j)j=0;
        if(c==0)
        {
            c=1;
            min_c=s;
            max_c=e;
            result[x.second]='C';
        }
        else if(j==0)
        {
            j=1;
            min_j=s;
            max_j=e;
            result[x.second]='J';
        }
        else
        {
            flag=1;
        }


    }

    cout<<"Case #"<<index+1<<": ";
    if(flag==1)
    {
        cout<<"IMPOSSIBLE";
    }
    else
        cout<<result;
    if(index+1!=test_cases)
     cout<<endl;


 }
}
