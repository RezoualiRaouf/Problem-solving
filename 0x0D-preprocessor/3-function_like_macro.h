#ifndef PI_H
#define PI_H
/*
 * function_like_macro.h
 *
 * This header file defines the ABS macro for absolute value calculation.
 */

/*
 * ABS macro: Calculate the absolute value of a number.
 *
 * This macro takes a numeric input value 'x' and returns its absolute value.
 *
 * Parameters:
 *    x (int): The input numeric value.
 *
 * Returns:
 *    int: The absolute value of 'x'.
 */
#define ABS(x)((x) >= 0 ? (x) : (-x))
#endif
