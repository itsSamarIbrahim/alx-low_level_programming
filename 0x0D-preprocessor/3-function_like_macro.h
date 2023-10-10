#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

/**
 * FUNCTION_LIKE_MACRO_H - a function-like macro ABS(x) that
 * computes the absolute value of a number x
 * @x: the number to be passed to find its absolute value
 */
#define ABS(x) ((x) < (0) ? (-(x)) : (x))

#endif
