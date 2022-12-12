 #include<iostream>
 using namespace std;

 int main(){



 int mimo[10] = {10,20,30,40,50,60,70,80,90,100}; // declaration of a new array
 int n;
 cout<<"Enter the number to be searched: "<<endl;
 cin>>n; // inputting the number (5) to be searched in the array
 for(int i=0; i<10; i++){ // searching begins
 if (n == mimo[i]){
 // searching ends

cout <<n<<" Element found at index " << i;
break;
 }

 }



 return 0;
 }
