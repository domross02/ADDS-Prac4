#include "TruckLoads.h"
#include <math.h>
int TruckLoads::numTrucks(int numCrates, int loadSize){
if(numCrates<=loadSize){
    return 1;
}
int newCrates;
int num;
if(numCrates % 2 == 0){
newCrates = (numCrates/2);
num = 2*numTrucks(newCrates, loadSize);

}
else{
newCrates = ((numCrates+1)/2);
num = 2*numTrucks(newCrates, loadSize)-1;
}
return num;
}