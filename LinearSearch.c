#include<stdio.h>


// Function to perform linear search

void linearSearch(int inp_arr[],int n,int data) /// create function void without return type 
// datatype varname.
{
  //create variable 
  int i = 0 ;


    // Linear search loop
for(i=0; i<n;i++){ // loop with ;
 if (inp_arr[i] == data )
 {
printf("elements found at index : %d",i);
 break; // break helps to come out of loop 
 
 }
}
    // If the loop completes without finding the element
 if(i == n)
 {
    printf("element not found "); //every print statement after priniting has ;
 }
}

int main (){
    //arry likho 
int inp_arr[] = {3,5,7,9,11,13};
int n = sizeof(inp_arr)/sizeof(inp_arr[0]);
int key = 9 ;

  // Call the linear search function
 linearSearch(inp_arr,n,key);
 return 0;}

//Linear search can be applied to sorted as well as unsorted array . 