# include "snowman.hpp"
# include <iostream>
# include <string>
# include <string.h>
using namespace std;
int  hand=0;
int  hand2=0;
bool ariel::check_input(int number){
    hand2=0,hand=0;
    //cout<<number<<endl;
    int count_letters=0;
    while(number>0){
        int temp=number%10;
        if(temp>4 || temp<0){
            return false;
        }
        number=number/10;
        count_letters=count_letters+1;
    }
    //cout<<"num of letters="<< count_letters<<endl;
    if(count_letters!=8){
        return false;
    }
    return true;
}
string ariel::snowman(int number){
    if(!check_input(number)){
       throw exception();
    }

    return "";
}