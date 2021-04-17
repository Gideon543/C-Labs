/*
ALGORITHM FOR SOLVING THE PROBLEM
The populateArray ();
1. Create a 2D array of dimension 101 X 101.
2. Set all the elements to an undefined value, 0.
3. Generate 2000 pairs of indices i,j where i and j are between [0, 100].
4. During the generation of these pairs, if an element corresponding to an index is undefined (i.e. 0), change to 1.
If the element is a positive number, increase it by 1.

The searchBox();
1. Define a function that takes two indices (i.e, i and j) where one is the lower left and the other is the upper right of a rectangular box. 
2. Search within that hypothetical box and find positive values within its boundaries.
3. If found, out the value together with its index as follows: “i, j ; value”


PSEUDOCODE
   A =   int [110][110]
   populateArray(int n)
       int num = 1;
       while (num <= n) do:
           int i =  random number between 1 and 100;
           int j =  random number between 1 and 100;
           if (A[i][j] == 0) do:
               A[i][j] = 1;
	       end
           else do:
               A[i][j] += 1;
           end
           num++
      end
   
   searchValidEntries(int i1, int j1, int i2, int j2){
       for(int i = i1 ; i <= i2; i++) do
           for(int j = j1; j <= j2; j++) do
               if(A[i][j] != 0) do
                   print i, j : A[i][j]

*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int A[110][110];

/*
Populate a random number of indices in a 2D array by changing elements of the 
indices to 1 where element is undefined, and increasing an element by 1
where the element is positive.
*/
void populateArray(int n){
    int num = 1;
    while(num <= n){
        int i = rand() % 100 + 1;
        int j = rand() % 100 + 1;
        if(A[i][j] == 0){
            A[i][j] = 1;
        }else{
            A[i][j] += 1;
        }
        num++;
    }
}


/*
Construct and search within a bounded rectangular box and output indices with positive values.
*/

void searchValidEntries(int i1, int j1, int i2, int j2){
    for(int i = i1; i <= i2; i++){
        for(int j = j1; j <= j2; j++){
            if(A[i][j] != 0){
                cout << i << ", "<< j << "; "<< A[i][j]<< endl;
            }
        }
    }
}

// main method
int main()
{
    srand (time(NULL));
    populateArray(2000); // set method to generate 2000 pairs.
   
   // Constrcuting 5 bounding boxes.
    for(int i = 0; i < 5; i++){ 
        int i1, j1, i2, j2;
        
        cout << "Please type in the upper right and lower left indices:"<<endl;
        cin >> i1 >> j1 >> i2 >> j2;
        
        cout<< "Output:"<<endl;
        searchValidEntries(i1, j1, i2, j2); // construct the rectangular box using the upper right and lower left indices.
    }
    return 0;
}
