

// 1️⃣ Find the largest element in an array

// Example
// [2,5,1,7,3] → 7

// Concept: simple loop

// 2️⃣ Find the smallest element in an array

// Example
// [5,2,8,1] → 1

// 3️⃣ Reverse an array

// Example
// [1,2,3,4] → [4,3,2,1]

// Concept: two pointers

// 4️⃣ Find sum of elements

// Example
// [1,2,3,4] → 10

// 5️⃣ Count even and odd numbers

// Example
// [1,2,3,4,5] → even:2 odd:3

// Medium-Easy

// 6️⃣ Find second largest element

// Example
// [10,5,8,20] → 10

// 7️⃣ Check if array is sorted

// Example
// [1,2,3,4] → true

// 8️⃣ Remove duplicates from sorted array

// Example
// [1,1,2,2,3] → [1,2,3]

// 9️⃣ Rotate array by one position

// Example
// [1,2,3,4] → [4,1,2,3]

// 🔟 Find missing number

// Example
// [1,2,4,5] → 3

// Medium

// 1️⃣1️⃣ Move all zeros to end

// Example
// [0,1,0,3,12] → [1,3,12,0,0]

// 1️⃣2️⃣ Find duplicate number

// Example
// [1,2,3,2] → 2

// 1️⃣3️⃣ Union of two arrays

// Example
// [1,2,3] [2,3,4] → [1,2,3,4]

// 1️⃣4️⃣ Intersection of two arrays

// Example
// [1,2,3] [2,3,5] → [2,3]

// 1️⃣5️⃣ Maximum subarray sum (Kadane)

// Example
// [-2,1,-3,4,-1,2,1,-5,4] → 6

// 🔤 15 String Questions (Easy → Medium)
// Easy Level

// 1️⃣ Reverse a string

// "hello" → "olleh"

// 2️⃣ Check palindrome

// "madam" → true

// 3️⃣ Count vowels in string

// "hello" → 2

// 4️⃣ Count characters in string

// "hello" → 5

// 5️⃣ Convert string to uppercase

// "hello" → "HELLO"

// Medium-Easy

// 6️⃣ Remove spaces from string

// "hello world" → "helloworld"

// 7️⃣ Check anagram

// "listen" "silent" → true

// 8️⃣ Count frequency of characters

// "banana" → a:3 b:1 n:2

// 9️⃣ Remove duplicate characters

// "programming" → progamin

// 🔟 Find first non-repeating character

// "swiss" → w

// Medium

// 1️⃣1️⃣ Check if string contains substring

// Example
// "hello world" contains "world"

// 1️⃣2️⃣ Find longest word in sentence

// "I love programming" → programming

// 1️⃣3️⃣ Reverse words in sentence

// "I love coding" → coding love I

// 1️⃣4️⃣ Count words in sentence

// "I love coding" → 3

// 1️⃣5️⃣ Find most frequent character

// "banana" → a

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     vector<int> arr(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int largest = arr[0];
//     int smallest = arr[0];

//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] > largest)
//         {
//             largest = arr[i];
//         }

//         if (arr[i] < smallest)
//         {
//             smallest = arr[i];
//         }
//     }

//     cout << "The largest element of the array is: " << largest << endl;
//     cout << "The smallest element of the array is: " << smallest << endl;

//     return 0;
// }

// reverse a array

//         #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     vector<int> arr={12,3,2,4,55};

//     int start=0;
//     int last=arr.size()-1;

//     while(start <= last){
//         swap(arr[start],arr[last]);
//         start++;
//         last--;

//     }

//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }

// first and second largest

                                                    // #include <bits/stdc++.h>
                                                    // using namespace std;

                                                    // int main()
                                                    // {
                                                    //     vector<int> arr = {12, 22, 1, 3, 2, 4, 55};

                                                    //     int firstlargest = INT_MIN;
                                                    //     int seclarge = INT_MIN;
                                                    //     ;
                                                    //     int firstsmall = INT_MAX;
                                                    //     int secsmall = INT_MAX;

                                                    //     for (int i = 0; i < arr.size(); i++)
                                                    //     {

                                                    //         if (arr[i] > firstlargest)
                                                    //         {
                                                    //             seclarge = firstlargest;
                                                    //             firstlargest = arr[i];
                                                    //         }
                                                    //         else if (arr[i] > seclarge && arr[i] != firstlargest)
                                                    //         {
                                                    //             seclarge = arr[i];
                                                    //         }

                                                    //         // for smallest
                                                    //         if (arr[i] < firstsmall)
                                                    //         {
                                                    //             secsmall = firstsmall;
                                                    //             firstsmall = arr[i];
                                                    //         }
                                                    //         else if (arr[i] < secsmall && arr[i] != firstsmall)
                                                    //         {
                                                    //             secsmall = arr[i];
                                                    //         }
                                                    //     }

                                                    //     cout << "firstlargest element of this array is: " << firstlargest << " and secondlargest element of this array is: " << seclarge << endl;
                                                    //     cout << "The smallest element of this array is: " << firstsmall << " and secondlargest element of this array is: " << secsmall << endl;

                                                    //     return 0;
                                                    // }


                                //  #include <iostream>
                                // #include <vector>
                                // using namespace std;

                                // void rotateArray(vector<int>& nums, int k) {
                                //     int n = nums.size();
                                //     vector<int> temp;

                                //     // Store the first k elements in temp
                                //     for (int i = 0; i < k; i++) {
                                //         temp.push_back(nums[i]);
                                //     }

                                //     // Shift the remaining elements to the front
                                //     for (int j = k; j < n; j++) {
                                //         nums[j - k] = nums[j];
                                //     }

                                //     // Copy the temp elements to the end
                                //     for (int t = n - k; t < n; t++) {
                                //         nums[t] = temp[t - (n - k)];
                                //     }
                                // }

                                // int main() {
                                //     vector<int> nums = {1, 2, 3, 4, 5, 6,7};
                                //     int k = 4;

                                //     cout << "Original Array: ";
                                //     for (int num : nums) {
                                //         cout << num << " ";
                                //     }
                                //     cout << endl;

                                //     rotateArray(nums, k);

                                //     cout << "Left Rotated Array: ";
                                //     for (int num : nums) {
                                //         cout << num << " ";
                                //     }
                                //     cout << endl;

                                //     return 0;
                                // }

                //remove duplicates  of a sorted array

                            // #include <bits/stdc++.h>
                            // using namespace std;

                            // int main(){
                            //     vector<int> nums = {1, 2, 3, 1, 2,7,7,69};
                            //     unordered_map<int, int> freq;

                            //     for(int it: nums){
                            //         freq[it]++;

                            //     }

                            //     for(auto it: freq){
                            //         if(it.second == 1){
                            //             cout<<it.first<<" ";
                            //         }
                            //     }
                            // //     unordered_set<int> st;

                            // //     for(int it: nums){
                            // //         st.insert(it);
                            // //     }

                            // //    for(auto it: st){
                            // //     cout<<it<<" ";
                            // //    }

                            //     return 0;


                            // }


                                        // #include <bits/stdc++.h>
                                        // using namespace std;

                                        // int main(){
                                        //     vector<int> nums = {1 ,0 ,2 ,3 ,0 ,4 ,0 ,1};
                                        //     int j=0;

                                        //     for(int i=1;i<nums.size();i++){
                                        //         if(nums[i]!=0){
                                        //             j++;
                                        //             swap(nums[i],nums[j]);
                                        //         }
                                        //     }

                                        //     for(int i=0;i<nums.size();i++){
                                        //         cout<<nums[i]<<" ";
                                        //     }

                                        //     return 0;
                                        // }

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums1 = {1, 2, 2, 4};
    vector<int> nums2 = {4, 6,6,6,6,7};

    int i=0;
    int j=0;

    vector<int> nums;
    int nums1sz=nums1.size();
    int nums2sz=nums2.size();

    while(i < nums1sz && j < nums2sz){
        if(nums1[i] <= nums2[j]){
            if(nums.size()==0 || nums.back() != nums1[i]){
                nums.push_back(nums1[i]);
            }
            i++;
        }
        else {
            if(nums.size()==0 || nums.back() != nums2[j]){
                nums.push_back(nums2[j]);
            }
            j++;
        }
    }

    while(i < nums1sz) {
         if(nums.size()==0 || nums.back() != nums1[i]){
                nums.push_back(nums1[i]);
            }
            i++;

    }

    while( j < nums2sz){

        if(nums.size()==0 || nums.back() != nums2[j]){
                nums.push_back(nums2[j]);
            }
            j++;

    }

    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    
    return 0;
}

                                        