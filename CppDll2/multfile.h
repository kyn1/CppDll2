#pragma once
#ifdef MULTIPLYLIBRARY_EXPORTS
#define MATHLIBRARY_API __declspec(dllexport)
#else
#define MULTIPYLIBRARY_API __declspec(dllexport)
#endif

#ifdef DIVIDELIBRARY_EXPORTS
#define MATHLIBRARY_API __declspec(dllexport)
#else
#define DIVIDELIBRARY_API __declspec(dllexport)
#endif


extern "C" MULTIPYLIBRARY_API int Multiply(int a, int b);

extern "C" DIVIDELIBRARY_API double Divide(double a, double b);


