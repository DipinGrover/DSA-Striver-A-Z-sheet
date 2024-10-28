 approach 1 brute force
 algorithm
 from 0 to n we are basically checking all elements
 eg first we see if 0 is present in the array or not 
 then we see if 1 is present in the array or not 
 and so on...
 if any element is not present in the array then we return that 
 tc is O(n^2) 
 sc is O(1)



 approach 2
 using hash array
 declare hash array of sizen+1 and initialize all values as zero
 then iterate the array and if element is present in array 
 icrement value of hash array
 if in hash array any value has zero return that index;
 tc id O(n)+O(n)-> O(2*n) 
 O(n) for traversing the array 
 O(n) for finding 0 frequency in the hash array
 sc is O(n) n = number of elements in array+1



 using xor approach 
 xor all the elements of the array -> xor1
 xor rnage of numbers i.e 0 to n -> xor2
and xor both values xor1 and xor2 and return
 tc is O(n) -> array traversal
 sc is O(1) 



using summation approach 
 first we find out sum of all range values [0,n]
then we find out sum of all elements of the array
 then we return their differnce
 sum_1 = sum of all elements of array
sum_2 = sum of [0,n] range values
 tc is O(n) 
 sc is O(1)


 
