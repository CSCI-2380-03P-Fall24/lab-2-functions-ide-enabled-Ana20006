#include <iostream> // Used for cin and cout
#include <string>
using namespace std; // making life easier so that we do not need to use std::cin , std::cout, etc.


//Write the function called locateSmallest in the given interval such that 
// output : int: index of the smallest value in the array
// input : an array of int, the starting index of search, the ending point of searchspace
// function: find the location (i.e index) of the smallest value of array in the given interval
// Note that I don't want the smallest value


int locateSmallest(int array[], int start, int end){ // Esto se queda igual, se define los parametros

 if (start < 0 || end < start) { //Aqui esta el rango aceptable

	return -1; // fix this!
}

int minIndex = start;  // Aqui empieza minIndex como numero de inicio
for (int i = start + 1; i <= end; ++i) {
   if (array[i] < array[minIndex]) {
	minIndex = i;  // Aqui se actuliza si el numero es mas chico
   }
}
return minIndex; // Devuelve el numero mas chico 
}

	//return -1; // fix this! // Esto se queda igual 
//}

//Write the function called replaceVariable in the given interval such that 
// output : you decide what is the output (here I put "void" - change this if you need to!)
// input : an array of int, the target value we are searching for, 
//     an int which is the starting index of search,
//     an int which is the ending point of searchspace
// function: Search in the array from given start to end index and replace the given target value with 1000
void replaceVariable(int array[], int target, int start, int end) {
if (start < 0 || end < start){
        return;
}
for (int i = start; i <= end; i++){
   if(array[i]==target){
	array[i] = 1000;
   }

}
}
	//return;



//write a function called printArray to print out the elements of the given array
//output: nothing
//input: the array of integers and its size
void printArray(int array[], int size) {
   for(int i = 0; i < size; i++){
        cout << array[i] << " ";

   }
cout << endl;
	return;
}