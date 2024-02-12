#ifndef DSA_EASYARRAYS_H
#define DSA_EASYARRAYS_H

#include <vector>

using namespace std;

class EasyArrays {
public:

    /**
     * Problem link : https://www.codingninjas.com/studio/problems/largest-element-in-the-array-largest-element-in-the-array_5026279?interviewProblemRedirection=true
     */
    int largestElement(vector<int>&arr);


    /**
     * Problem link:
     * https://www.codingninjas.com/studio/problems/ninja-and-the-second-order-elements_6581960?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTabValue=PROBLEM
     */
    vector<int> getSecondLargestAndSecondSmallestElement(int n,vector<int>&arr);
    int secondLargest(int n, vector<int> &vector);
    int secondSmallest(int n, vector<int> &vector);

    /**
     * Problem link:
     * https://www.codingninjas.com/studio/problems/ninja-and-the-sorted-check_6581957?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems
     */

    bool isSorted(vector<int>arr, int n);


    /**
     * Problem Link:
     * https://www.codingninjas.com/studio/problems/remove-duplicates-from-sorted-array_1102307?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTabValue=PROBLEM
     */
  int removeDuplicates(vector<int>&arr,int n);

};


#endif
