/*
 * Define a pair of classes X and Y, in which X has a pointer to Y, and Y has an
 * object of type X.
 */

#ifndef CH07_31_H
#define CH07_31_H

class Y;

class X {
	Y *x = nullptr;
};

class Y {
	X y;
};

#endif