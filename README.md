# LFSR
Linear Feedback Shift Register

In the following work, a linear feedback shift register is implemented with the C programming language.

For its use it is required

1) Enter the total number of bits to be used
2) Input of each bit separately starting from the bit that is in position 0 (after each input, press enter)
3) Enter the number of bits to be XORed.
4) Enter the value of the positions where the numbers that will be XORed are located (if, for example, the 2nd and 3rd element is done, then press 2, enter, 3).
As a result we get the table we want

# Example:

![LFSR](https://user-images.githubusercontent.com/103950889/221040777-1be5f60a-db69-4097-ba99-d105e7abfb72.PNG)

In the above picture we have a LFSR. The equation for this is ```x^5+x^2+1```
To run it through our program we enter the values below.

1) Total number of bits: ```5```
2) Input each bit: example ```00001```
3) Enter the number of bits to be XORed: ```2```
4) ```2``` ```enter``` ```5``` ```enter```

