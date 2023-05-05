/* This program is used to find the
 Fibonacci series using recursion. In recursion a function fib will call itself
 again and again to form the fiboncci series*/
#include "C12832.h"
#include "mbed.h"

C12832 lcd(p5, p7, p6, p8, p11);

int n = 20; // For exsmple it is to find fibonacci series of first 12 numbers

int fib(int n); // fibonnaci function is declared as fib()

int main() {
  lcd.cls();

  lcd.printf("Lab 2 program Fib Series \r\n");

  for (int i = 0; i < n; i++) {
    lcd.printf("%d, ", fib(i));
  }
  lcd.printf("..!\r\n");
}

// Fibonnaci Function 

int fib(int n) {
  // take an input n and calculate part of the fibonaci series and return
  // result.
  if (n == 0)
    return 0; // special case if n = 0, fibonacci series is 0
  if (n == 1)
    return 1; // special case if n = 1, fibonacci series is 1
  else {
    return (fib(n - 1) + fib(n - 2)); // past two values in the series are added
                                      // to determine the present value
  }
}