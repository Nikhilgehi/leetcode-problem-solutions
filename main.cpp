#include <iostream>
#include <vector>
using namespace std;
  bool palindrome(string s,int n)
    {
        for(int i=0;i<n;i++)
        {
            if(s[i]!=s[n-i-1])
            {
                return false;
                break;
            }
        }
        return true;
    }
int main()
{
int n;
cin>>n;
string s;
cin>>s;
cout<<palindrome(s,n);
    return 0;
}