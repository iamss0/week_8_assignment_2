// Q1. Calculate the time complexity for the following code snippet.
// for(int i = 0; i < n; i++) {
// for(int j = 0; j * j < n; j++) {
// cout << “PhysicsWallah ”;
// }
// }
// outer loop's TC will be "n"
// and inner loop's TC will be n^(1/2)
// so TC will be O(n^(3/2))




// Calculate the time complexity for the following code snippet.
// int c = 0;
// for(int i = 0; i < n; i++) {
// for(int j = 1; j < n; j *= 2) {
// c++;
// }
// }
// outer loop's TC will be "n"
// and inner loop's TC will be log(n)
// so TC will be O(nlog(n))




// Calculate the time complexity for the following code snippet.
// int c = 0;
// for(int i = 0; i < n; i++) {
// for(int j = 1; j * j < n; j *= 2) {
// c++;
// }
// }
// outer loop's TC will be "n"
// and inner loop's TC will be log(n^2)-->>1/2 * log(n)---> log(n)
// so TC will be O(nlog(n))




// Calculate the time complexity for the following code snippet.
// int c = 0;
// for(int i = n; i > 0; i /= 2) {
// for(int j = 0; j < i; j ++) {
// c++;
// }
// }
// when i = n.......--->> j-> 0,1,2,3,4,....n-1
// when i = n/2.......--->> j-> 0,1,2,3,4,....n/2-1
// when i = n/4.......--->> j-> 0,1,2,3,4,....n/4-1
// when i = n/8.......--->> j-> 0,1,2,3,4,....n/8-1
// number of operations-->> (n-1)+(n/2-1)+(n/4-1)+(n/8-1).....(n/2^x -1)
// total number of times i iterates will be log(n);-
// so n+(n/2)+(n/4)...+(n/2^x) + log(n);
// if we consider that (n/2^x) is almost zero then this series will almost be 2n
// so O(2n + log(n));---> we will ignore logn as it is very small--->> TC will be O(2n)




// Calculate the time complexity for the following code snippet.
// int c = 0;
// for(int i = 1; i < n; i*=2) {
// for(int j = n; j > i; j--) {
// c++;
// }
// }
// by outer loop we get log2(n) = x (if the i iterartes for x number off times) [2^x = n]
// and j will go like this--->>
// i =1 j-->>n,n-1,n-2......,n-1;
// i =2 j-->>n,n-1,n-2......,n-2;
// i =4 j-->>n,n-1,n-2......,n-4;
// i =8 j-->>n,n-1,n-2......,n-8;
// .
// .
// .
// i = 2^x j-->>n,n-1,n-2......,n-2^x;

// number of operations:-->> (n-1)+(n-2)+(n-4)+(n-8)+(n-16)+....(n-2^x);
// xn - (1+2+4+8.....+2^x);
// xn - (2^x-1) [ignore 1]
// nlog2(n) - (n)
// ignore n
// TC will be O(nlogn)

