#include <iostream>
#include "Arrays/Easy/EasyArrays.h"

using namespace std;

int main() {
    vector<int> myArray = {3, 7, 2, 9, 5,10,50,-1,-2,2,5,3};
    EasyArrays ap;
    std::size_t n = myArray.size();
    cout<<"The Array is: ";

    for (int i = 0; i < n; ++i) {
        cout<<myArray[i]<<" ";
    }
    cout<<endl;
    int largest = ap.largestElement(myArray);
    cout << "The largest element is: " << largest << std::endl;  // Output :50


    vector<int> arr = ap.getSecondLargestAndSecondSmallestElement(n,myArray) ;
    cout<<"Second Largest and second smallest elements are: ";
    for (int i = 0; i < arr.size(); ++i) {
        cout<<arr[i]<<" ";  //Output: 10 -1
    }
    cout<<endl;

    string isArraySorted = ap.isSorted(myArray,n)? "true":"false";
    cout<<"Is Array sorted: "<<isArraySorted<<endl;



    int uniqueEltCount = ap.removeDuplicates(myArray,n);
    cout<<"Unique elements are: "<<uniqueEltCount;
    return 0;

}



