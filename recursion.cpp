#include <iostream>
using namespace std;


void travel(int * arr, int index){
	if (index==-1){
		return;
	}
    // cout<<arr[index]<<" ";
	travel (arr,index-1);
    cout<<arr[index]<<" ";
	
}
int main(){
	int arr[5]={1,2,3,4,5};
	travel(arr,4);
	return 0;
}