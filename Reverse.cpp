#include "Reverse.h"
#include <iostream>
#include <math.h>
#include <string>
int Reverse::reverseDigit(int num){
    try{
    if(num<0){

        return -1;
    }
    if(num ==0){
        return num;
    }
    if(num<10){
        return num;
    }
    int last= num %10;
    int newNum=(num-last)/10;
    int revNewNum = reverseDigit(newNum);

    return  revNewNum+last*pow(10,(int(log10(num))));
    }
    catch(int intErr){
        intErr=-1;
        return intErr;
    }

}
std::string Reverse::reverseString(std::string word){
    try{
    if(word==""){
        return word;
    }
    char first=word[0];
    word.erase(word.begin());
    std::string rest = reverseString(word);
    return rest + first;
    }
    catch(std::string strError){
        strError="ERROR";
        return strError;
    }
}
