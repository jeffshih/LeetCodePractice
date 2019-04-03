#include<iostream>
#include<string>

using namespace std;

typedef string::reverse_iterator ritr;


class Solution{

    public:
        string addStrings(string num1,string num2){
        int len1 = num1.length(),len2=num2.length();
        int size = (len1>=len2)? len1:len2;
        bool flag = len1>=len2;
        string res(size+1,48);
        int nex = 0;
        int dif = (flag)?len1-len2:len2-len1;
        ritr ritr1=num1.rbegin();
        ritr ritr2=num2.rbegin();
        int len = (flag)?len1:len2;
        for (;len>=0;--len){
            char cur1 = 48,cur2=48;
            if(len1-- >0){
             cur1 = *ritr1++;
            }
            if(len2-- >0){
             cur2 = *ritr2++;
            }
            int tmp = (cur1%48)+(cur2%48)+nex;
            nex = (tmp>9)?1:0;
            tmp = (tmp>9)?tmp%10:tmp;         
            res[len]+=tmp;

        }
        
        if(res[0]==48)
            res.erase(0,1);

        return res;

        }

};



int main(){


    Solution so;

    string num1="1" ,num2="7";

    string res = so.addStrings(num1,num2);
    cout<< res << endl;

    return 0;

}

