The Lorem Ipsum Search App
==========================

The program is searching the lorem_ipsum.txt file. We got it from "Bolek & Lolek Inc." company 
and we don't know who wrote it.
The program is supposed to display rows which contain at least one of few randomly selected words.

Our testers have identified the following problems with the program:

* The program constantly loops, regardless of which key is pressed and there is an 
  increasing amount of text displayed on each iteration 
* The performance of the program seems poor - serious refactoring of search algorithm is needed
* It seems the program’s memory usage is constantly increasing as it runs, which may mean the program contain memory leaks

On top of this we suspect there are a few other problems with the implementation.
The code is not as clear as it could be.
KISS, DRY and clear code is what we would like to see here. 
Please do refactoring like removing code duplications and 
unnecessary loops, stick to const correctness, make the code clear and readable etc.