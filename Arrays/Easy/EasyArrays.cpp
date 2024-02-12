#include <algorithm>
#include <climits>
#include <set>
#include "EasyArrays.h"
#include "iostream"

using namespace std;

int EasyArrays::largestElement(vector<int> &arr) {

    /**
     * Brute Force Solution-> Sort the Array -> Return last element
     * Time Complexity will be O(NLogN)
     */

    /**
     * This is the optimized solution have time Complexity as O(N)
     */
    int largest = arr[0];

    for(int i = 1; i < arr.size(); i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    return largest;
}

vector<int> EasyArrays::getSecondLargestAndSecondSmallestElement(int n, vector<int> &arr) {

    /**
     * Approach 1: Brute Force-> Sort the array -> Find the largest & smallest element ->
     * Traverse the array from n-2 to 0 to secLargest and Traverse the array form 1 to n to find secSmallest
     * Time Complexity = O(NLogN)+O(N)+O(N)
     */

//    sort(arr.begin(),arr.end());
//
//    int smallest = arr[0];
//    int largest = arr[n-1];
//
//    int secSmallest= INT_MAX,secLargest= INT_MIN;
//
//    for (int i = 1; i < n; ++i) {
//        if(arr[i]!= smallest){
//            secSmallest = arr[i];
//            break;
//        }
//    }
//
//    for (int i = n-2; i >= 0; --i) {
//        if(arr[i]!= largest){
//            secLargest = arr[i];
//            break;
//        }
//    }


/**
 * Approach2: Better-> first Pass Largest & Smallest
 * Time Complexity = O(4N)
 *
 */

//    int largest = arr[0], smallest = INT_MAX,secLargest,secSmallest;
//
//    for (int i = 0; i < n; ++i) {
//        if (arr[i]>largest){
//            largest = arr[i];
//            secLargest = -1;
//        }
//    }
//    for (int i = 0; i < n; ++i) {
//        if(arr[i]>secLargest && arr[i]!= largest){
//            secLargest = arr[i];
//        }
//
//    }
//
//    for (int i = 0; i < n; ++i) {
//        if (arr[i]<smallest){
//            smallest = arr[i];
//            secSmallest = INT_MAX;
//        }
//    }
//    for (int i = 0; i < n; ++i) {
//        if(arr[i]<secSmallest && arr[i]!= smallest){
//            secSmallest = arr[i];
//        }
//
//    }

/**
 * Approach 3 -> Optimal Solution -> Time Complexity = O(N)
 */


    int secLargest = secondLargest(n,arr);
    int secSmallest = secondSmallest(n,arr);

    return {secLargest,secSmallest};
}
int EasyArrays::secondLargest(int n, vector<int> &arr) {

    int largest = arr[0], secLargest = -1;

    for (int i = 1; i < n; ++i) {
        if (arr[i]>largest){
            secLargest = largest;
            largest= arr[i];
        } else if(arr[i]<largest && arr[i] >secLargest){
            secLargest = arr[i];
        }

    }
    return secLargest;
}
int EasyArrays::secondSmallest(int n, vector<int> &arr) {
    int secSmallest = INT_MAX;
    int smallest =arr[0];

    for(int i =1;i<n;i++){
        if (arr[i] < smallest) {

            secSmallest = smallest;
            smallest= arr[i];
        }
        else if (arr[i]>smallest && arr[i]< secSmallest) {
            secSmallest = arr[i];
        }
    }
    return secSmallest;
}

bool EasyArrays ::isSorted(vector<int> arr, int n) {

    for(int i= 1;i<n;i++){
        if(arr[i]>= arr[i-1]){}
        else return false;
    }
    return true;
}

int EasyArrays::removeDuplicates(vector<int> &arr, int n) {

    //We are given a sorted array

    /**
     * Approach 1-> Brute Force -> Insert the elements in set as set will remove duplicates
     *
     * Time complexity ->O(NLogN)
     */

//    set<int> st;
//
//    for (int i = 0; i < n; ++i) {
//        st.insert(arr[i]);
//    }
//    int index =0 ;
//
//    for (auto itr:st){
//        arr[index] = itr;
//        index++;
//    }
//    return index;

/**
 * Approach 2 -> Two pointer algo->Time complexity ->O(N)  Since we are been given a sorted array so we dont need to sort the arry the next line is just added to make sure the array becomes sorted if user doesn't give a sorted array
 */

    sort(arr.begin(),arr.end());
    int i=0;

    for (int j = 1; j < n; j++) {
        if (arr[j] != arr[i]) {
            arr[i+1]= arr[j];
            i++;
        }
    }
    return (i+1);

}



