/*
 * Write a declaration for a function that takes two int parameters and returns
 * an int, and declare a vector whose elements have this function pointer type.
 */

int func(int, int);

using F1a = int(int, int);
typedef int F1b(int, int);
using F2a = decltype(func);
typedef decltype(func) F2b;
using PF1a = int(*)(int, int);
typedef int(*PF1b)(int, int);
using PF2a = decltype(func) *;
typedef decltype(func) *PF2b;

vector<int(*)(int, int)> vfunc0;
vector<F1a*> vfuncF1a;
vector<F1b*> vfuncF1b;
vector<F2a*> vfuncF2a;
vector<F2b*> vfuncF2b;
vector<PF1a> vfuncPF1a;
vector<PF1b> vfuncPF1b;
vector<PF2a> vfuncPF2a;
vector<PF2b> vfuncPF2b;