#ifndef __header_H__
#define __header_H__
#include <stdio.h>
#include <math.h>
#include<stdlib.h>
/**
 * stucture having 2 member variables value1, value2
 * @param value1
 * @param value2
 */
typedef struct calculate{
    int value1;
    int value2;
}calculate;

/**
 * stucture having 1 member variable value3
 * @param value3
 */
typedef struct trigonometric{
	int value3;
}trigonometric;

/*function prototypes for all functions*/
/**
*  adds the value1 and value2 and returns the result
* @param[in] value1
* @param[in] value2 
* @return Result of value11 + value2
*/
int sum(calculate *compute);
/**
*  substracts the value1 and value2 and returns the result
* @param[in] value1
* @param[in] value2
* @return Result of value11 - value2
*/
int substraction(calculate *compute);
/**
*  multiply the value1 and value2 and returns the result
* @param[in] value1 
* @param[in] value2
* @return Result of value11 * value2
*/
int multiplication(calculate *compute);
/**
*  divide the value1 and value2 and returns the result
* @param[in] value1 
* @param[in] value2 
* @return Result of value11 / value2 both quotient and remainder
*/
int division(calculate *compute);
/**
*  power of value1 and value2 and returns the result
* @param[in] value1
* @param[in] value2 
* @return Result of value11 ^ value2 
*/
int power(calculate *compute);
/**
*  squareroot of value3(value as integer)
* @param[in] value3; 
* @return Result of sqrt of value3
*/
int squareroot(trigonometric *degree);
/**
* sin of value3 
* @param[in] value3 (value3 is in radian)
* @return Result of sin(value3)
*/
int sine(trigonometric *degree);
/**
* cos of value3
* @param[in] value3 (value3 is in radian) 
* @return Result of cos(value3)
*/
int cosine( trigonometric *degree);
/**
* tan of value3
* @param[in] value3 (value3 is in radian)
* @return Result of tan(value3)
*/
int ttan( trigonometric *degree);
/**
* cose of value3
* @param[in] value3 (value3 is in radian)
* @return Result of cose(value3)
*/
int cosec( trigonometric *degree);
/**
* sec of value3
* @param[in] value3 (value3 is in radian)
* @return Result of sec(value3)
*/
int sec( trigonometric *degree);
/**
* cot of value3
* @param[in] value3 (value3 is in radian)
* @return Result of cot(value3)
*/
int cot( trigonometric *degree);
/**
* exponent of value3(value as intger)
* @param[in] value3 (value as integer)
* @return Result of e^value3
*/
int exponent(trigonometric *degree);
/**
* factorial of value3(value as intger)
* @param[in] value3 (value as integer)
* @return Result of value3!
*/
int factorial(trigonometric *degree);
/**
* log of value3(value as intger)
* @param[in] value3 (value as integer)
* @return Result of value3!
*/
int logbase10(trigonometric *degree);
#endif  /* #define __calculateCULATOR_OPERATIONS_H__ */