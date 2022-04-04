#include "EfficientTruckloads.h"

#include <math.h>


int EfficientTruckloads::numTrucks(int numCrates, int loadSize){
if(numCrates<=loadSize||loadSize<=0||numCrates<=0){
    return 1;
}
if(!crateslookupTable.empty()){
    for(int i = 0; i<crateslookupTable.size();i++){
        if(numCrates==crateslookupTable.at(i)){
            return reslookupTable.at(i);
        }
    }

}
    int pile1;
    int pile2;

    if(numCrates % 2 == 0){
        pile1=numCrates/2;
        pile2=numCrates/2;
    }
    else{
        pile1=numCrates/2;
        pile2=(numCrates/2)+1;
    }
    int num = numTrucks(pile1, loadSize)+numTrucks(pile2, loadSize);
    crateslookupTable.push_back(numCrates);
    reslookupTable.push_back(num);
    return num;
}
