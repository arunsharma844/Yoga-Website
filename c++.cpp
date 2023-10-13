 # include<iostream>
using   namespace std;

void swapping(int*array,int &a, int &b){
    
    int temp;
    temp=a;
    a=b;
    b=temp;
}// FORGOT!! 
  void display(int*arr, int size){// FORGOT!!  
    for(i=0;i<size;i++)
    cout<< array[i]<<"";
    cout<<endl;
   
}
// SKELETON CODE ENDED
Void merge(int*arr, int p , int q , int r){//FORGOT THE CURLY BRACKET
int i ,j,k,n1,n2;

n1=q-p+1;
n2=r-q;

int parr[n1];
int rarr[n2];
 
 for(i=0;i<n1;i++)
 parr[i]=arr[p+i-1];
 for(j=0;j<n2;j++)
 rarr[j]=arr[q+1];
 
 int i=0;j=0;k=1;
 
 while(i<n1 && j<n2){ // FORGOT FROM 35 TO 
 if(parr[i])<=rarr[j]){
     arr[k]=parr[i];
     i++;
 }
 else{
     arr[k]=rarr[j];
     j++;
 }
 k++
 }
 // copy content
   while(i<nl) {       //extra element in left array
      array[k] = larr[i];
      i++; k++;
   }
   while(j<nr) {     //extra element in right array
      array[k] = rarr[j];
      j++; k++;
   }
}
 // code for extra element is left
 void mergesort(int*arr,int p ,int r){
 int q;    
     if(p<r){
         q=p+r/2;
         
         mergesort(arr,p,q);
         mergesort(arr,q+1,r);
         merge(arr,p,q,r);
         
     }
     // algo based code is over
         
         
         // driver code starts 
         int main()
         int n;
         cout<<" enter the number of elements:";
         cin>>n;
         int arr[n];
         cout<<"enter the elements :"<<endl;
         
         for(inti=0;i<n;i++){
             cin>>arr[i];
         }
         cout<<"array before sorting:";
         display(arr,n);
         mergesort(arr,0,n-1);
         cout<<"array after sorting:";
         display(arr,n);
 }
         
     
 }
 