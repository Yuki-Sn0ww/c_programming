# C Programming — K.N. King: A Modern Approach (2nd Ed.)

Personal solutions to exercises and programming projects from the book.

---

## Chapter 2 — C Fundamentals

| # | Description | Solution |
|---|-------------|----------|
| 1 | Write a program that uses `printf` to display the following picture on the screen: `*  *  *  * *  *` | [View Solution](./fundamentals/star_pattern.c) |
| 2 | Write a program that computes the volume of a sphere with a 10-meter radius, using the formula `v = 4/3πr³`. Write the fraction 4/3 as `4.0f/3.0f`. (Try writing it as `4/3`. What happens?) **Hint:** C doesn't have an exponentiation operator, so you'll need to multiply `r` by itself twice to compute `r³`. | [View Solution](./fundamentals/sphere_volume.c) |
| 3 | Modify the program of Programming Project 2 so that it prompts the user to enter the radius of the sphere. | *Coming Soon* |
| 4 | Write a program that asks the user to enter a dollars-and-cents amount, then displays the amount with 5% tax added: `Enter an amount: 100.00` → `With tax added: $105.00` | [View Solution](./fundamentals/tax_calculator.c) |
| 5 | Write a program that asks the user to enter a value for `x` and then displays the value of the following polynomial: `3x⁵ + 2x⁴ - 5x³ - x² + 7x - 6`. **Hint:** C doesn't have an exponentiation operator, so you'll need to multiply `x` by itself repeatedly to compute the powers of `x`. (For example, `x * x * x` is x cubed.) | [View Solution](./fundamentals/polynomial.c) |
| 6 | Modify the program of Programming Project 5 so that the polynomial is evaluated using the following formula: `((((3x + 2)x - 5)x - 1)x + 7)x - 6`. Note that the modified program performs fewer multiplications. This technique for evaluating polynomials is known as **Horner's Rule**. | [View Solution](./fundamentals/horners_rule.c) |
| 7 | Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay that amount using the smallest number of $20, $10, $5, and $1 bills: `Enter a dollar amount: 93` → `$20 bills: 4, $10 bills: 1, $5 bills: 0, $1 bills: 3`. **Hint:** Divide the amount by 20 to determine the number of $20 bills needed, and then reduce the amount by the total value of the $20 bills. Repeat for the other bill sizes. Be sure to use integer values throughout, not floating-point numbers. | [View Solution](./fundamentals/dollar_bills.c) |
| 8 | Write a program that calculates the remaining balance on a loan after the first, second, and third monthly payments: `Enter amount of loan: 20000.00`, `Enter interest rate: 6.0`, `Enter monthly payment: 386.66`. Display each balance with two digits after the decimal point. **Hint:** Each month, the balance is decreased by the amount of the payment, but increased by the balance times the monthly interest rate. To find the monthly interest rate, convert the interest rate entered by the user to a percentage and divide it by 12. | [View Solution](./fundamentals/loan_balance.c) |

---

## Chapter 3 — Formatted Input/Output

| # | Description | Solution |
|---|-------------|----------|
| 1 | Write a program that accepts a date from the user in the form `mm/dd/yyyy` and then displays it in the form `yyyymmdd`: `Enter a date (mm/dd/yyyy): 2/17/2011` → `You entered the date 20110217` | [View Solution](./formated_input_output/date_format.c) |
| 2 | Write a program that formats product information entered by the user. Enter item number, unit price, and purchase date `(mm/dd/yyyy)`, then display them in a formatted table with item number and date left-justified and unit price right-justified. Allow dollar amounts up to $9999.99. **Hint:** Use tabs to line up the columns. | [View Solution](./formated_input_output/product_info.c) |
| 3 | Books are identified by an International Standard Book Number (ISBN). ISBNs assigned after January 1, 2007 contain 13 digits arranged in five groups such as `978-0-393-97950-3`. Write a program that breaks down an ISBN entered by the user into its five components: GS1 prefix, group identifier, publisher code, item number, and check digit. **Note:** The number of digits in each group may vary; you can't assume that groups have fixed lengths. Test your program with actual ISBN values. | [View Solution](./formated_input_output/isbn_breakdown.c) |
| 4 | Write a program that prompts the user to enter a telephone number in the form `(xxx) xxx-xxxx` and then displays the number in the form `xxx.xxx.xxxx`: `Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900` → `You entered 404.817.6900` | [View Solution](./formated_input_output/telephone_format.c) |
| 5 | Write a program that asks the user to enter the numbers from 1 to 16 (in any order) and then displays the numbers in a 4 by 4 arrangement, followed by the sums of the rows, columns, and diagonals. If all sums are equal, the numbers form a **magic square**. | [View Solution](./formated_input_output/magic_square.c) |
| 6 | Modify the `addfrac.c` program of Section 3.2 so that the user enters both fractions at the same time, separated by a plus sign: `Enter two fractions separated by a plus sign: 5/6+3/4` → `The sum is 38/24` | *Coming Soon* |

---

## Chapter 4 — Expressions

| # | Description | Solution |
|---|-------------|----------|
| 1 | Write a program that asks the user to enter a two-digit number, then prints the number with its digits reversed: `Enter a two-digit number: 28` → `The reversal is: 82`. Read the number using `%d`, then break it into two digits. **Hint:** If `n` is an integer, then `n % 10` is the last digit in `n` and `n / 10` is `n` with the last digit removed. | [View Solution](./expressions/two_digit_reverse.c) |
| 2 | Extend the program in Programming Project 1 to handle **three-digit** numbers. | [View Solution](./expressions/three_digit_reverse.c) |
| 3 | Rewrite the program in Programming Project 2 so that it prints the reversal of a three-digit number **without using arithmetic** to split the number into digits. **Hint:** See the `upc.c` program of Section 4.1. | [View Solution](./expressions/three_digit_reverse_scanf.c) |
| 4 | Write a program that reads an integer entered by the user and displays it in octal (base 8): `Enter a number between 0 and 32767: 1953` → `In octal, your number is: 03641`. The output should be displayed using five digits, even if fewer digits are sufficient. **Hint:** To convert the number to octal, first divide it by 8; the remainder is the last digit of the octal number. Then divide the original number by 8 and repeat the process to arrive at the next-to-last digit. | [View Solution](./expressions/octal_converter.c) |
| 5 | Rewrite the `upc.c` program of Section 4.1 so that the user enters all 11 digits of a UPC at one time, instead of entering one digit, then five digits, and then another five digits: `Enter the first 11 digits of a UPC: 01380015173` → `Check digit: 5` | [View Solution](./expressions/upc_check_digit.c) |
| 6 | European countries use a 13-digit European Article Number (EAN) instead of the 12-digit UPC. Each EAN ends with a check digit. To calculate it: add the 2nd, 4th, 6th, 8th, 10th, and 12th digits; add the 1st, 3rd, 5th, 7th, 9th, and 11th digits; multiply the first sum by 3 and add it to the second sum; subtract 1 from the total, compute the remainder when divided by 10, then subtract the remainder from 9. `Enter the first 12 digits of an EAN: 869148426000` → `Check digit: 8` | [View Solution](./expressions/ean_check_digit.c) |