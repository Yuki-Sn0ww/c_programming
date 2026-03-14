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

---

## Chapter 5 — Selection Statements

| # | Description | Solution |
|---|-------------|----------|
| 1 | Write a program that calculates how many digits a number contains: `Enter a number: 374` → `The number 374 has 3 digits`. You may assume that the number has no more than four digits. **Hint:** Use `if` statements to test the number. For example, if the number is between 0 and 9, it has one digit. If the number is between 10 and 99, it has two digits. | [View Solution](./selection_statements/digit_count.c) |
| 2 | Write a program that asks the user for a 24-hour time, then displays the time in 12-hour form: `Enter a 24-hour time: 21:11` → `Equivalent 12-hour time: 9:11 PM`. Be careful not to display 12:00 as 0:00. | [View Solution](./selection_statements/time_converter.c) |
| 3 | Modify the `broker.c` program of Section 5.2 by: (a) asking the user to enter the number of shares and the price per share, instead of the value of the trade; (b) adding statements that compute the commission charged by a rival broker ($33 plus 3¢ per share for fewer than 2000 shares; $33 plus 2¢ per share for 2000 shares or more). Display the rival's commission as well as the commission charged by the original broker. | [View Solution](./selection_statements/broker_commission.c) |
| 4 | Here's a simplified version of the Beaufort scale, used to estimate wind force: Less than 1 = Calm, 1–3 = Light air, 4–27 = Breeze, 28–47 = Gale, 48–63 = Storm, Above 63 = Hurricane. Write a program that asks the user to enter a wind speed (in knots), then displays the corresponding description. | *Coming Soon* |
| 5 | In one state, single residents are subject to the following income tax: Not over $750 = 1% of income; $750–$2,250 = $7.50 plus 2% of amount over $750; $2,250–$3,750 = $37.50 plus 3% of amount over $2,250; $3,750–$5,250 = $82.50 plus 4% of amount over $3,750; $5,250–$7,000 = $142.50 plus 5% of amount over $5,250; Over $7,000 = $230.00 plus 6% of amount over $7,000. Write a program that asks the user to enter the amount of taxable income, then displays the tax due. | [View Solution](./selection_statements/income_tax.c) |
| 6 | Modify the `upc.c` program of Section 4.1 so that it checks whether a UPC is valid. After the user enters a UPC, the program will display either `VALID` or `NOT VALID`. | [View Solution](./selection_statements/upc_validator.c) |
| 7 | Write a program that finds the largest and smallest of four integers entered by the user: `Enter four integers: 21 43 10 35` → `Largest: 43`, `Smallest: 10`. Use as few `if` statements as possible. **Hint:** Four `if` statements are sufficient. | [View Solution](./selection_statements/largest_smallest.c) |
| 8 | The following table shows daily flights from one city to another (Departure → Arrival): 8:00 a.m. → 10:16 a.m., 9:43 a.m. → 11:52 a.m., 11:19 a.m. → 1:31 p.m., 12:47 p.m. → 3:00 p.m., 2:00 p.m. → 4:08 p.m., 3:45 p.m. → 5:55 p.m., 7:00 p.m. → 9:20 p.m., 9:45 p.m. → 11:58 p.m. Write a program that asks the user to enter a time (in 24-hour clock) and displays the departure and arrival times for the flight whose departure time is closest to that entered. **Hint:** Convert the input into minutes since midnight and compare it to the departure times, also expressed in minutes since midnight. | *Coming Soon* |
| 9 | Write a program that prompts the user to enter two dates and then indicates which date comes earlier on the calendar: `Enter first date (mm/dd/yy): 3/6/08`, `Enter second date (mm/dd/yy): 5/17/07` → `5/17/07 is earlier than 3/6/08` | *Coming Soon* |
| 10 | Using the `switch` statement, write a program that converts a numerical grade into a letter grade: `Enter numerical grade: 84` → `Letter grade: B`. Use the grading scale: A = 90–100, B = 80–89, C = 70–79, D = 60–69, F = 0–59. Print an error message if the grade is larger than 100 or less than 0. **Hint:** Break the grade into two digits, then use a `switch` statement to test the ten's digit. | *Coming Soon* |
| 11 | Write a program that asks the user for a two-digit number, then prints the English word for the number: `Enter a two-digit number: 45` → `You entered the number forty-five.` **Hint:** Break the number into two digits. Use one `switch` statement to print the word for the first digit ("twenty," "thirty," and so forth). Use a second `switch` statement to print the word for the second digit. Don't forget that the numbers between 11 and 19 require special treatment. | *Coming Soon* |