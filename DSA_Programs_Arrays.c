#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include<ctype.h>
#include<math.h>

/* ============================================================================ */
/*              ==================== ARRAYS ====================                 */
/* ============================================================================ */


// -------------------- Array Basics --------------------


// 1. Traverse and Print Array Elements

// Question:
// Write a C program to traverse and print all elements of an integer array.


// int main(){
//     int a[] = {10, 20, 30, 40, 50};
//     int n=5;
//     for(int i=0;i<n;i++){
//         printf("%d \n",a[i]);
//     }
// }





// 2. Find Minimum Element in Array

// Question:
// Write a C program to find the minimum element in an array.


// int main(){
//     int a[] = {23, 7, 91, 42, 15, 68};
//     int n = 6;
//     int min=a[0];
//     for(int i=0;i<n;i++){
//         if(min>a[i]){
//             min=a[i];
//         }
//     }
//     printf("Max is : %d",min);
// }





// 3. Find Maximum and Minimum Elements in Array

// Question:
// Write a C program to find both the maximum and minimum elements in an array.


// int main(){
//     int a[] = {23, 7, 91, 42, 15, 68};
//     int n=6;
//      int max = a[0];
//     int min = a[0];
//     for (int i = 0; i < n; i++) {
//         if (a[i] > max) {
//             max = a[i];
//         }
//         if (a[i] < min) {
//             min = a[i];
//         }
//     }
//     printf("Max is : %d\n", max);
//     printf("Min is : %d\n", min);
// }





// 4. Calculate Sum and Average of Array Elements

// Question:
// Write a C program to calculate the sum and average of all elements in an array.


// int main(){
//     int a[] = {23, 7, 91, 42, 15, 68};
//     int sum=0;
//     float avg=0;

//     for(int i=0;i<6;i++){
//         sum+=a[i];
        
//     }
//     avg = (float)sum/6;
//     printf("Sum and Avg are : %d \t %.3f",sum,avg);
// }





// 5. Reverse an Array In-Place

// Question:
// Write a C program to reverse an array in-place by swapping elements.


// int main(){
//     int a[] = {10, 20, 30, 40, 50};
//     int t;
//     int count=5;

//     for(int i=0;i<count/2;i++){
//         t=a[i];
//         a[i]=a[count-i-1];
//         a[count-i-1]=t;
//     }
//     for(int i=0;i<count;i++){
//         printf("%d\n",a[i]);
//     }

// }





// 6. Find Minimum and Second Minimum Elements

// Question:
// Write a C program to find the smallest and second smallest elements in an array.


// int main(){
//     int a[] = {23, 7, 91, 42, 15, 68};
//     int n=sizeof(n)/sizeof(a[0]);
//     int min1=a[0];
//     int min2=0;
//     for(int i=1;i<n;i++){
//         if(a[i]<min1){
//             min2=min1;
//             min1=a[i];
//         }
//         else if(a[i]<min2){
//             min2=a[i];
//         }
//     }

//     printf("Min is %d ",min1);
//     printf("\n");
//     printf("Second min : %d ",min2);
// }





// 7. Check if Array is Sorted

// Question:
// Write a C program to check whether an array is sorted in ascending order.


// int main(){
//     int a[] = {10, 20, 30, 40, 50};
//     int b[] = {10, 20, 35, 25, 50};
//     int count=5;
//     bool ok=true;

//     for(int i=1;i<count;i++){
//         if(b[i-1]>b[i]){
//             ok=false;
//             break;
//         }
//     }
//     if(ok){
//         printf("Array is sorted");
//     }
//     else{
//         printf("Array is not sorted");
//     }
    
// }





// 8. Macro Definition Demonstration

// Question:
// Write a C program to demonstrate macro definition and expansion using #define.


// #define H printf("Hello")
// int main(){
//     H;  
// }





// -------------------- Searching --------------------


// 9. Linear Search in an Array

// Question:
// Write a C program to search for an element in an array using linear search and print its index.


// int main(){
//     int a[] = {23, 7, 91, 42, 15, 68};
//     int n=6;
//     int k;
//     bool ok;
//     scanf("%d",&k);
//     for(int i=0;i<n;i++){
//         if(a[i]==k){
//             printf("Element found at idx : %d",i);
//             ok=true;
//             break;
//         }
//         else{
//             ok=false;
//         }
//     }
//     if(!ok){
//         printf("Element not found");
//     }

// }





// 10. Count Occurrences and Print Indices of Element

// Question:
// Write a C program to search for all occurrences of an element in an array and count its total frequency.


// int main(){
//     int a[] = {5, 2, 8, 2, 9, 2, 4};
//     int n=7;
//     int k;
//     int count=0;
//     scanf("%d",&k);
//     for(int i=0;i<n;i++){
//         if(a[i]==k){
//             printf("Element found at : %d",i);
//             count++;
//         }
//         printf("\n");
        
//     }
//     printf("Total occurences : %d",count);

// }





// 11. Find Missing Numbers in Range

// Question:
// Write a C program to find missing numbers in the range 1 to N using a boolean frequency array.


// int main(){
//     int a[] = {1, 2, 4, 5, 6};
//     int n2 = 10;
//     int n1 = sizeof(a)/sizeof(a[0]);
    
//     int b[n2 + 1];
//     for(int i = 0; i <= n2; i++){
//         b[i] = 0;
//     }

//     for(int i = 0; i < n1; i++){
//         if(a[i] <= n2){
//             b[a[i]] = 1;
//         }
//     }
//     printf("Missing numbers: ");
//     for(int i = 1; i <= n2; i++){
//         if(b[i] == 0){
//             printf("%d\t", i);
//         }
//     }
//     printf("\n");

//     return 0;
// }





// -------------------- Array Manipulation --------------------


// 12. Insert Element at Specific Index in Array

// Question:
// Write a C program to insert an element at a specified position/index in an array by shifting elements right.


// int main(){
//     int a[]={10,20,30,40,50};
//     int pos=3;
//     int n=5;
//     int ele=35;
//     for(int i =n;i>pos;i--){
//         a[i]=a[i-1];
//     }
//     a[pos]=ele;
//     n++;
//     printf("Array after inserting : \n");
//     for(int i=0;i<n;i++){
//         printf("%d\t",a[i]);
//     }  
// }





// 13. Delete Element from Specific Index in Array

// Question:
// Write a C program to delete an element from a specified position/index in an array by shifting elements left.


// int main(){
//     int a[]={10,20,30,40,50};
//     int pos=4;
//     int n=5;
//     for(int i=pos;i<n-1;i++){
//         a[i]=a[i+1];
//     }
//     n--;

//     for(int i=0;i<n;i++){
//         printf("%d\t",a[i]);
//     }
// }





// 14. Remove Duplicates from Sorted Array (Attempt 1 - Fixed Size)

// Question:
// Write a C program to remove duplicate elements from a sorted array by shifting subsequent elements left.


// int main(){
//     int a[] = {1, 1, 2, 2, 2, 3, 4, 4, 5};
//     int count=9;
//     for (int i = 1; i < count; i++) {
//         if (a[i - 1] == a[i]) {
//             for (int j = i; j < count - 1; j++) {
//                 a[j] = a[j + 1];
//             }
//             count--;
//             i--;
//         }
//     }
//     for(int i=0;i<count;i++){
//         printf("%d \n",a[i]);
//     }

// }





// 15. Remove Duplicates from Sorted Array (Attempt 2 - Dynamic Length)

// Question:
// Write a C program to remove duplicate elements from a sorted array using sizeof to determine initial length.


// int main(){
//     int a[] = {1, 1, 2, 2, 2, 3, 4, 4, 5};
//     int n = sizeof(a)/sizeof(a[0]);
//     for(int i=1;i<n;i++){
//         if(a[i-1]==a[i]){
//             for(int j = i ;j<n-1;j++){
//                 a[j]=a[j+1];
//             }
//             n--;
//         }

//     }
//     for(int i=0;i<n;i++){
//         printf("%d \n",a[i]);
//     }

// }





// 16. Move All Zeroes to End of Array (Attempt 1)

// Question:
// Write a C program to move all zeroes to the end of an array while maintaining the relative order of non-zero elements.


// int main() {
//     int arr[] = {0, 1, 0, 3, 12, 0, 5, 7};
//     int n = 8;
//     int count = 0;

//     for (int i = 0; i < n; i++) {
//         if (arr[i] != 0) {
//             arr[count++] = arr[i];
//         }
//     }
//     while (count < n) {
//         arr[count++] = 0;
//     }
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }





// 17. Move All Zeroes to End of Array (Attempt 2)

// Question:
// Write a C program to shift non-zero elements forward and fill the remainder of the array with zeroes.


// int main(){
//     int count =0;
//     int a[] = {0, 1, 0, 3, 12};
//     int n = 5;

//     for(int i=0;i<n;i++){
//         if(a[i]!=0){
//         a[count]=a[i];
//         count++;
//         }
//     }
//     while(count<n){
//         a[count]=0;
//         count++;
//     }
//     for(int i=0;i<n;i++){
//         printf("%d\t",a[i]);
//     }
// }





// 18. Right Rotate Array by K Positions (Switch-Case Method)

// Question:
// Write a C program to right rotate an array by k positions using repeated shifting and switch-case selection.


// void  rotate(int a[],int n , int k){
//     for(int r=0;r<k;r++){
//         int temp = a[n-1];
//         for(int i=n-1;i>0;i--){
//             a[i]=a[i-1];
//         }
//         a[0]=temp;
//     }
// }
// int main(){
//     int a[] = {1, 2, 3, 4, 5};
//     int n = 5;
//     int choice;

//     printf("Enter rotation: ");
//     scanf("%d", &choice);
//     switch(choice) {

//         case 1:
//             rotate(a, n, 1);
//             break;

//         case 2:
//             rotate(a, n, 2);
//             break;

//         case 3:
//             rotate(a, n, 3);
//             break;

//         case 4:
//             rotate(a, n, 4);
//             break;

//         case 5:
//             rotate(a, n, 5);
//             break;

//         default:
//             printf("Invalid rotation");
//             return 0;
//     }

//     for(int i = 0; i < n; i++) {
//         printf("%d ", a[i]);
//     }

//     return 0;
// }





// 19. Right Rotate Array by K Positions (Reversal Algorithm)

// Question:
// Write a C program to right rotate an array by k positions using the three-step array reversal algorithm.


// void reverse(int arr[], int start, int end) {
//     while (start < end) {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
        
//         start++;
//         end--;
//     }
// }

// void rotate_by_reversal(int arr[], int size, int k) {
//     k = k % size;
//     if (k == 0) return;
//     reverse(arr, 0, size - 1);
//     reverse(arr, 0, k - 1);
//     reverse(arr, k, size - 1);
// }

// int main() {
//     int data[] = {1, 2, 3, 4, 5};
//     int size = sizeof(data) / sizeof(data[0]);
//     int k = 3;

//     rotate_by_reversal(data, size, k);
//     for (int i = 0; i < size; i++) {
//         printf("%d ", data[i]);
//     }
//     return 0;
// }





// 20. Merge Two Arrays into a Third Array

// Question:
// Write a C program to concatenate/merge two separate arrays into a single destination array.


// int main(){
//     int a[]={1,3,5};
//     int b[]={2,4,6};
    

//     int n1=sizeof(a)/sizeof(a[0]);
//     int n2=sizeof(b)/sizeof(b[0]);
//     int c[n1+n2];

//     for(int i= 0;i<n1;i++){
//         c[i]=a[i];
//     }
//     for (int i = 0; i < n2; i++) {
//         c[n1 + i] = b[i];
//     }
//     for(int i=0;i<(n1+n2);i++){
//         printf("%d\t",c[i]);
//     }
// }





// 21. Intersection of Two Arrays (Common Elements)

// Question:
// Write a C program to find and print common elements between two arrays.


// int main(){
//     int a[]={1,2,3,4,5};
//     int b[]={3,4,5,6,7};
//     for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
//         for(int j=0;j<sizeof(b)/sizeof(b[0]);j++){
//             if(a[i]==b[j]){
//                 printf("%d\t",a[i]);
//             }
//         }
//     }
    
//     printf("\n");
// }





// 22. Union of Two Arrays (Merge and Remove Duplicates)

// Question:
// Write a C program to find the union of two arrays by merging them and eliminating duplicate entries.


// int main(){
//     int a[]={1,2,2,4};
//     int b[]={2,3,4};
    
//     int n1=sizeof(a)/sizeof(a[0]);
//     int n2=sizeof(b)/sizeof(b[0]);
//     int c[n1+n2];

//     for(int i= 0;i<n1;i++){
//         c[i]=a[i];
//     }
//     for (int i = 0; i < n2; i++) {
//         c[n1 + i] = b[i];
//     }
    
//     int ts=n1+n2;
//     for(int i=0;i<ts;i++){
//         for(int j=i+1;j<ts;j++){
//             if(c[i]==c[j]){
//                 for(int k=j;k<ts-1;k++){
//                     c[k]=c[k+1];
//                 }
//                 ts--;
//                 j--;
//             }
//         }
//     }

//     for(int i=0;i<ts;i++){
//         printf("%d\t",c[i]);
//     }
    
//     return 0;
// }





// 23. Frequency of Each Element in Array

// Question:
// Write a C program to count the frequency of each unique element in an array by marking visited elements with -1.


// int main(){
//     int a[] = {1, 2, 2, 3, 1, 4, 2, 3};
//     int count = 0 ;
//     int  n = sizeof(a)/sizeof(a[0]);

//     for(int i = 0 ;i<n;i++){
//         if(a[i] == -1) {
//             continue;
//         }
//         t = a[i];
//         count = 0;
//         for(int j = 0; j < n; j++){
//             if(a[j] == t){
//                 count++;
//                 a[j] = -1;
//             }
//         }
//         printf("Element %d repeats %d times\n", t, count);
//     }
// }





// -------------------- Prefix Sum --------------------


// 24. Prefix Sum Array and Range Sum Query

// Question:
// Write a C program to construct a prefix sum array and perform range sum queries in O(1) time.


// int main(){
//     int a[] = {2, 4, 1, 5, 3};
//     int n1= sizeof(a)/sizeof(a[0]);
//     int prefix1[100];
//     prefix1[0]=a[0];

//     for(int i = 1 ; i<n1 ; i++){
//         prefix1[i] = prefix1[i-1] + a[i];
//     }
//     for(int j = 0 ;j<n1;j++){
//         printf("%d\t",prefix1[j]);
//     }

//     int b[] = {2, 4, 1, 5, 3};
//     int r , l ;
//     int n = sizeof(b)/sizeof(b[0]);
//     scanf("%d %d",&l,&r);

//     int prefix[100];
//     prefix[0]=b[0];

//     for(int i = 1 ; i<n ; i++){
//         prefix[i] = prefix[i-1] + b[i];
//     }
//     for(int j = 0 ;j<n;j++){
//         printf("%d\t",prefix[j]);
//     }
//     printf("\n");
//     printf("Range sum : \n");
//     printf("%d - %d  = %d ",prefix[r] , prefix[l-1],prefix[r]-prefix[l-1]);
// }





// -------------------- Two Pointers --------------------


// 25. Two Pointers - Find Pair with Target Sum

// Question:
// Write a C program using two pointers to find two numbers in a sorted array that sum to a given target.


// int main() {
//     int a[] = {1, 2, 3, 4, 6, 8, 10};
//     int t = 10;
//     int n = sizeof(a) / sizeof(a[0]);

//     int l = 0;
//     int r = n - 1;

//     while (l < r) {

//         int sum = a[l] + a[r];

//         if (sum == t) {
//             printf("The 2 numbers adding to %d are %d and %d",
//                    t, a[l], a[r]);
//             return 0;
//         }
//         else if (sum < t) {
//             l++;
//         }
//         else {
//             r--;
//         }
//     }

//     printf("No pair found");

// }





// 26. Two Pointers - Move Zeroes to End

// Question:
// Write a C program using two pointers to move all zeroes to the end of an array in-place.


// int main(){
//     int a[] = {0, 1, 0, 3, 12};
//     int i , j ;
//     int r,l = 0;
//     int n = sizeof(a)/sizeof(a[0]);

//     for(i=0;i<n;i++){
//         r=i;
//         if(a[r]!= 0){
//             int t = a[l];
//             a[l]=a[r];
//             a[r]=t;
//             l++;
//         }
//     }
//     for(int i = 0 ;i<n;i++){
//         printf("%d\t",a[i]);
//     }
// }
// 27. Two Pointers - Remove Duplicates

// Question:
// Write a C program to remove duplicates from a sorted array in-place using two pointers.


// int main(){
//     int a[]={1,1,2,2,3,4,4,5};
//     int i=0;
//     int n=sizeof(a)/sizeof(a[0]);
//     for(int j=1;j<n;j++){
//         if(a[j]!=a[i]){
//             i++;
//             a[i]=a[j];
//         }
//     }
//     for (int k = 0; k <= i; k++) {
//         printf("%d ", a[k]);
//     }
    // }





// 28. Two Pointers - Move Zeroes to End

// Question:
// Write a C program using two pointers to move all zeroes to the end of an array by swapping non-zero elements forward.


// int main(){
//     int a[]={0,1,0,3,12};
//     int i=0;
//     int n = sizeof(a)/sizeof(a[0]);
//     for(int k=0;k<n;k++){
//         if(a[k]!=0){
//             int t=a[i];
//             a[i]=a[k];
//             a[k]=t;
//             i++;
//         }
//     }
//     for(int m=0;m<n;m++){
//         printf("%d\t",a[m]);
//     }

// }





// 29. Sliding Window - Maximum Sum Subarray of Size K

// Question:
// Write a C program to find the maximum sum of a contiguous subarray of fixed size k using the sliding window technique.


// int main(){
//     int sum = 0 ;
//     int a[]={1,2,3,4,5,6,7,8,9};
//     int n= sizeof(a)/sizeof(a[0]); 
//     int k=3;
//     for(int i=0;i<k;i++){
//         sum+=a[i];
//     }
//     int max=sum;

//     for(int i=k;i<n;i++){
//         sum = sum - a[i-k]+a[i];

//         if(sum>max){
//             max=sum;
//         }
//     }
//     printf("Max Sum is : %d",max);

//     return 0 ;
// }





        /* ============================================================ */
        /*                   UNIT TEST PREP                             */
        /* ============================================================ */


        // 1. Sparse Matrix in Triplet Representation

        // Question:
        // Write a C program to represent a sparse matrix using triplet (3-tuple: row, col, val) representation.


        // int main(){
        //     struct sm{
        //         int row;
        //         int col;
        //         int val;
        //     };
        //     int m,n;
        //     int i,j,count=0;

        //     printf("Enter the size of the matrix : ");
        //     scanf("%d%d",&m,&n);
        //     int a[m][n];
        //     printf("Enter elements into the matrix : ");
        //     for(int i=0;i<m;i++){
        //         for(int j=0;j<n;j++){
        //             scanf("%d",&a[i][j]);
        //             if(a[i][j]!=0){
        //                 count++;
        //             }
        //         }
        //     }
        //     struct sm s[count+1];

        //     s[0].row=m;
        //     s[0].col=n;
        //     s[0].val=count;

        //     int k=1;
        //     for(i=0;i<m;i++){
        //         for(j=0;j<n;j++){
        //             if(a[i][j]!=0){
        //                 s[k].row=i;
        //                 s[k].col=j;
        //                 s[k].val=a[i][j];
        //                 k++;
        //             }
        //         }
        //     }
        //     for(int i=0;i<=count;i++){
        //         printf("%d\t%d\t%d\n",s[i].row,s[i].col,s[i].val);
        //     }

        // }





        // 2. Addition of Polynomials

        // Question:
        // Write a C program to add two polynomials represented using structures containing exponent and coefficient.


        // int main(){
        //     struct ploy{
        //         int exp;
        //         float coeff;
        //     };
        //     struct ploy p[10],q[10],sum[20];
        //     printf("Enter number of terms in polynomial 1 and the terms: ");int n;
        //     scanf("%d",&n);

        //     for(int i=0;i<n;i++){
        //         scanf("%d%f",&p[i].exp,&p[i].coeff);
        //     }
        //      printf("Enter number of terms in polynomial 2 and the terms  : ");int n1;
        //     scanf("%d",&n1);

        //     for(int i=0;i<n1;i++){
        //         scanf("%d%f",&q[i].exp,&q[i].coeff);
        //     }
        //     int i=0,j=0,k=0;
        //     while(i<n&&j<n1){
        //         if(p[i].exp==q[i].exp){
        //             sum[k].exp=p[i].exp;
        //             sum[k].coeff=p[i].coeff+q[i].coeff;
        //             i++;j++;k++;
        //         }
        //         else if(p[i].exp>q[i].exp){
        //             sum[k++]=p[i++];
        //         }
        //         else{
        //             sum[k++]=q[j++];
        //         }
        //     }
        //     while(i<n){
        //         sum[k++]=p[i++];
        //     }
        //     while(j<n1){
        //         sum[k++]=q[j++];
        //     }
        // }





        // 3. Strong Number

        // Question:
        // Write a C program to check whether a given number is a Strong Number using a recursive factorial function.


        // int factorial (int n){
        //     if(n<=1){
        //         return 1 ;
        //     }
        //     return n*factorial(n-1);
            
        // }
        // void main(){
        //     int num;
        //     int onum;
        //     int rem;
        //     int sum=0;
        //     scanf("%d",&num);
        //     onum=num;
        //     while(num>0){
        //         rem=num%10;
        //         sum+=factorial(rem);
        //         num/=10;
        //     }
        //     if(sum==onum){
        //         printf("Bish its a Strong number");
        //     }
        //     else{
        //         printf("Not a strong number ");
        //     }
        // }

        // 4.fib series without recursion :
        
        // int main(){
        //     int n=10;
        //     int first=0,second=1,next;
        //     for(int i=1;i<=n;++i){
        //         printf("%d\t",first);
        //         next=first+second;
        //         first=second;
        //         second = next;
        //     }


        // }

        //5. sum of digits without recursion 

        // int main(){
        //     int num=12345;
        //     int temp;
        //     int sum=0,rem;
        //     temp=num;

        //     while(temp>0){
        //         rem = temp%10;
        //         sum+=rem;
        //         temp/=10;
        //     }
        //     printf("Sum : %d",sum);
        // }

        //6. reverse a number without recursion 

        // int main(){
        //     int num=12345;
        //     int temp;
        //     int digit;
        //     int rev=0,rem;
        //     temp=num;

        //     while(temp>0){
        //         rem=temp%10;
        //         rev = (rev*10)+rem;
        //         temp/=10;
        //     }
        //     printf("%d",rev);
        // }

        //7. sum till n number

        // int main(){
        //     int n=10;
        //     int i=0;
        //     int sum=0;
        //     for(i=0;i<n;i++){
        //         sum+=i;
        //     }
        //     printf("Sum : %d",sum);
        // }

        //8. factorial using recursion

        // int fact(int n){
        //     if(n==0){
        //         return 1;
        //     }
        //     else{
        //         return n*fact(n-1);
        //     }
        // }

        //9. fib series using recursion

        // int fib(int n){
        //     if(n==1)
        //     return 0;
        //     else if(n==2)
        //     return 1;
        //     else
        //     return (fib(a-1)+fib(a-2));
        // }

        //10. sum of digits using recursion

        // int dsum(int n){
        //     if(n==0)
        //         return 0;
        //     else{
        //         return ((n%10)+dsum(n/10));
        //     }
        // }

        //11. reverse a number using recursion

        // int rev_nuj(int n,int r){
        //     if(n==0){
        //         return r;
        //     }
        //     else{
        //         return rev_nuj(n/10,r*10+n%10);
        //     }
        // }






// 30. Kadane's Algorithm

// Question:
// Write a C program template for Kadane's algorithm to find the maximum subarray sum.




