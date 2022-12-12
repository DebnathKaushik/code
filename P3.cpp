/*#include<iostream>
using namespace std;
int main(){
int inputArray[500], N, i, Max;

cout << "Enter Number of Elements in Array\n";
cin >> N;
cout << "Enter " << N << " numbers\n";

// Read array elements
for(i = 0; i < N; i++){
cin >> inputArray[i];
}

Max = inputArray[0];
// traverse array elements
for(i = 1; i < N; i++){
if(inputArray[i] > Max)
Max = inputArray[i];
}

cout << "Maximum Element : " << Max;

return 0;
}
*/


#include<iostream>
using namespace std;
int main(){
int  N, i, Max;

int arr[10] = {111,5000,450,856,780,990,112,458,130};

/* Read array elements */
for(i = 0; i <10; i++){

Max = arr[0];

for(i = 1; i < 10; i++){
if(arr[i]>Max)

{
    Max = arr[i];
}


}
}

cout << "Maximum Element : " << Max;

return 0;
}
