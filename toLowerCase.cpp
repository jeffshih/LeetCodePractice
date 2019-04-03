#include<iostream>
#include<string>
#include<typeinfo>


using namespace std;

class Solution{

    public:
        string toLowerCase(string str){
        int len = str.length();
        for(int i=0; i < len;i++){
            char cur = str[i];
            if (str[i] <= 90 && str[i] >=65)
                str[i] +=32;
            }      
        
        return str;
        }


};


int main(){

    Solution so;
    
    string input = "Input TEjkfsIWRsk@#&*!#ka",output;

    output = so.toLowerCase(input);
    cout<< output << endl;
    return 0;

}
