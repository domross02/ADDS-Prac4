#include "Reverse.h"
#include <iostream>
#include <math.h>
#include <string>
int Reverse::reverseDigit(int num){
    if(num<0){
    std::cout<<"ERROR NEGATIVE NUMBER"<<std::endl;
        return 1;
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
std::string Reverse::reverseString(std::string word){
    if(word==""){
        return word;
    }
    char first=word[0];
    word.erase(word.begin());
    std::string rest = reverseString(word);
    return rest + first;
}