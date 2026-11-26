#include <iostream>
using namespace std;
int main (){
    int max_count = 1;
    int count = 1 ;
    string s;
    cin>>s;
    for(int i =0 ; i<s.length();i++){
        if(s[i]==s[i+1]){
            count++;
        }else{
            if(count>max_count){
                max_count=count;
            }
            count=1;
        }
    }
    cout<<max_count;
    return 0;
}