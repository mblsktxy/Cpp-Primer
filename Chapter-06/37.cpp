/*
 * Write three additional declarations for the function in the previous exercise.
 * One should use a type alias, one should use a trailing return, and the third
 * should use decltype. Which form do you prefer and why?
 */

// use type alias
typedef string attT[10];
using attT = string[10];
attr &func(parameter_list);

// use trailing return
auto func(parameter_list) -> string(&)[10];

// use decltype
string attS[10];
decltype(attS) &func(parameter_list); 