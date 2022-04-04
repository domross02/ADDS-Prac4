#include "Truckloads.h"
#include <math.h>
int Truckloads::numTrucks(int numCrates, int loadSize){
if(loadSize<0||numCrates<=0){
    return 0;
}
if(numCrates<=loadSize||numCrates==0){
    return 1;
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
return num;

}
