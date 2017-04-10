#include <iostream> 
#include <cstdlib>
#include <fstream>
#include <vector>
#include <iomanip>
using namespace std;

int main(){

ifstream inFile("file.in", ios::in);
 if(!inFile) {
  cerr << "Failed opening" << endl;
  exit(1);
  }

int size;
inFile >> size;
int init_array[size];
inFile >> init_array[0]>> init_array[1]>> init_array[2]>> init_array[3] >> init_array[4] >> init_array[5] >> init_array[6] >> init_array[7];


vector<int> sort_weight(size);

int insert, moveItem;

for(int i=0; i<size; ++i)
{
 sort_weight.at(i) = init_array[i];
}


for(int next=1;next<size;++next){
 insert = sort_weight.at(next);
 moveItem = next;

while((moveItem>0) && (sort_weight.at(moveItem-1) > insert))
{
 sort_weight.at(moveItem) = sort_weight.at(moveItem-1);
 --moveItem;
}
sort_weight.at(moveItem) = insert;


}


 cout<< sort_weight.at(3)+ sort_weight.at(4)+sort_weight.at(5)+sort_weight.at(6)+sort_weight.at(7);


  return 0;
}
