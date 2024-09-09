#include<iostream>
using namespace std;
/* Given an array arr containing only 0s, 1s, and 2s. Sort the array in ascending order.

Examples:

Input: arr[]= [0, 2, 1, 2, 0]
Output: 0 0 1 2 2
Explanation: 0s 1s and 2s are segregated into ascending order.
Input: arr[] = [0, 1, 0]
Output: 0 0 1
Explanation: 0s 1s and 2s are segregated into ascending order.
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)
*/
void sort012(vector<int>& arr) {
        int low=0,mid=0,high=arr.size()-1;
        int temp;
        while(mid<=high){
            if(arr[mid]==0){
                temp = arr[mid];
                arr[mid++]= arr[low];
                arr[low++]=temp;

            }
            else if(arr[mid]==1){
                mid++;
            }
            else{
                temp=arr[high];
                arr[high--]=arr[mid];
                arr[mid]=temp;
            }
        }
            
        }
