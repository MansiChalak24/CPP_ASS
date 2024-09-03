#include<iostream>
using namespace std;

int main() {
  int notebook=15;
  int pens=20;
  float notebookCost=2.25;
  float penCost=0.75;
  
  //calculate the total notebookCost
  float totalCost=(notebook*notebookCost)+
  (pens*penCost);
  
  //output the total cost
  cout<<"The total cost of the supplies is RS."<<totalCost<<endl;
  
  return 0;
}  
  