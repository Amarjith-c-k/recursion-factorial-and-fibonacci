# RECURSION

A function is called recursive if the body of a function calls the same function. if else statement can
be used where one branch makes the recursive call and the other doesn’t.

Syntax
void recurse() //invoked function
{
... .. ...
recurse(); //again continues the execution of the function
... .. ...
}
int main()
{
... .. ...
recurse(); //this calls the recurse function
... .. ...
}

The recursive function is controlled by using if else statement by putting in some condition to satisfy
the recursion.


# Advantages and Disadvantages of Recursion

Recursion makes program elegant. However, if performance is vital, use loops instead as recursion is
usually much slower. That being said, recursion is an important concept. It is frequently used in data
structure and algorithms.

# IMPORTANT QUESTIONS

1. What is recursion ?
A function is called recursive if the body of a function calls the same function.

2. What is the advantage of recursive function?
Its easy for one to call the function to execute it again. It reduces the size of the
programme. Easy to solve out problems.

3. What is the necessity of exit condition in recursion?
Exit condition is needed in recursion because if exit condition is not there the
programme will continue to be executed based on the memory of the computer and
sometimes we may not be getting the result as well.

Github Link for all the below programs :- https://github.com/Amarjith-c-k/recursion-factorial-andfibonacci
