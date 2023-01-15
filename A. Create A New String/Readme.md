##### (When I came to solve this problem ,I used sizeof() Not size()and this wrong the vice versa is the true let know why?)
# The difference between sizeof() vs strlen() vs size() in C++
- The use of these three functions to calculate the size of the string depends on the declaration type in the code.
## sizeof()
-  Compile-time unary operator.
-  Return the actual size of any type of data (allocated) in bytes.
-  Used in case of char array where the elements are separated by a comma.
- Example: char arr[] = {‘R’,’a’,’g’,’d’,'h','a'}
## strlen()
- The predefined function of the char array.
- It looks for a NULL character and returns a number of elements present in the string before the NULL character.
- Used in case of char array where the elements are not separated by a comma.
- Example:char arr[] = “Ragdha”
## size()
- A member function of string.
- Return length of the string in bytes.
- Used in case of a string.
- Example: string str = “Ragdha”
