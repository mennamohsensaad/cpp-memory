#include <iostream> // Needed for std::cout
#include <memory> // Needed for std::addressof
 
// P0: follow instructions inside this function
void basicMemoryQuestions()
{
    // Declare and initialize an integer h with 0, on stack.


    // Declare and initialize an integer x with 0, on stack.


    // Declare and initialize a pointer-to-integer p_x and initialize it with address of x.


    // Modify x using its address in p_x, modify it to 12 (use dereferencing).


    // Create a double on heap with initializing it to zero, then hold its address in pointer-to-double p_m.


    // Now we are exiting this function, don't forget to delete the variable you just created on heap.
    
}

// P1: Implement sum1 that takes a and b as inputs, and returns the summation directly.
double sum1( double a , double b )
{

}

// P2: Implement sum2 that takes a and b as inputs, 
// then creates summation results on the heap, and returns the address of the results on the heap.
// Hint: creating variables on heap already returns the address, so no need to use std::addressof function here.
double *sum2( double a , double b )
{

}

// P3 (Solved for you): Implement sum3 that takes two pointers-to-doubles p_a and p_b as inputs,
// then creates the summation on the heap, and returns the address of the results on the heap.
// Hint1: creating variables on heap already returns the address, so no need to use std::addressof function here.
// Hint2: Use dereferencing on pointers to access the variables on memory.
double *sum3( double *p_a , double *p_b )
{
    // We use dereference on pointers p_a and p_b to access the real variables.
    double sum = *p_a + *p_b;

    // Create a double variable on heap, and save the address on a pointer-to-double p_results.
    double *p_results = new double(0);

    // Use dereferencing on p_results to modify the real variable.
    *p_results = sum;

    return p_results;
}

// P7: Implement aboslute function that takes a double a and returns its absolute, 
// i.e if a is positive return as is, otherwise return -a. 
double absolute( double a )
{

}

// P4: Implement difference1 that takes two doubles a and b as inputs, and returns the absolute difference.
// Hint: use absolute function you just implemented.
double absolute_difference1( double a , double b )
{

}

// P5: Implement difference2 that takes two pointers-to-doubles p_a and p_b as inputs, and retuns the results.
// Hint: Use dereferencing on pointers to access the variables on memory.
// Hint: Use absolute function you implemented.
double absolute_difference2( double *p_a , double *p_b )
{

}

// P6: Implement difference3 that takes two references-to-doubles a and b as inputs, and returns the results.
// Hint: very simple (1 line needed)
// Hint: use absolute function you implemented.
double absolute_difference3( double &a , double &b )
{

}

// P8 (Solved for you): Implement sumAndDifference1 that takes 4 arguments (two doubles and two pointers-to-doubles)
// 1. Use dereferencing to modify the variable pointed to by pSum to hold the summation of a and b.
// 2. Use dereferencing to modify the variables pointed to by pDiff to hold the absolute difference of a and b.
// Hint: use absolute function you implemented.  
void sum_and_absolute_difference1( double a , double b , double *pSum , double *pDiff )
{
    // Use dereferencing to modify the variable pointed to by pSum.
    *pSum = a + b;

    // Use dereferencing to modify the variable pointed to by pDiff.
    // Also use the absolute function you implemented in P7.
    *pDiff = absolute( a - b );
}

// P9: Implement sumAndDifference2 that takes 4 arguments (two doubles and two references to doubles)
// Hint: Very simple, no pointers so dereferencing needed.
// Hint: use absolute function you implemented.
void sum_and_absolute_difference2( double a , double b , double &sum , double &diff )
{

}

// P10: Swap is very important function that we will use extensively when studying algorithms this semester.
// Implement swap1 that takes pointers to doubles and exchanges the values of the variables.
// Hint1: Use dereferencing to modify variables pointed to by p_a and p_b.
// Hint2: You can make a variable to hold a value during the exchange. 
// Hint3: Think of swap as exchanging the liquids in two glasses, so you would need a third glass to do the job.
// Hint4: 3 lines are enough.
void swap1( double * p_a , double * p_b )
{

}

// P11: same as P10, but with no pointers, just references.
// Hint1: Simpler, no need for dereferencing.
// Hint2: 3 lines are enough.
void swap2( double &a , double &b )
{

}

// P12: this function is implemented. It seems that this function exchanges the variables a and b.
// However, unlike swap1 and swap2, swap3 is useless, Can you explain why?!
// Explanation: 
void swap3( double a , double b )
{
    double temp_a = a;
    a = b;
    b = temp_a;
}


int main()
{
    std::cout << "13 + 14  = " << sum1( 13 , 14 ) << std::endl;

    double *px = sum2( 2 , 7 );
    std::cout << "2 + 7 = " << *px << std::endl;
    delete px;

    double a3 = 11;
    double b3 = 3;
    double *py = sum3( &a3 , &b3 );
    std::cout << "11 + 3 =" << *py << std::endl;
    delete py;

    std::cout << "|9.5| = " << absolute( 9.5 ) << std::endl;
    std::cout << "|-12.5| = " << absolute( -12.5 ) << std::endl;

    std::cout << "|13 - 14| = " << absolute_difference1( 13 , 14 ) << std::endl;

    double a4 = 23;
    double b4 = 12;
    std::cout << "|23 - 12| = " << absolute_difference2( &a4 , &b4 );


    std::cout << "|23 - 12| = " << absolute_difference3( a4 , b4 ) << std::endl;

    double s = 0;
    double d = 0;

    sum_and_absolute_difference1( 50 , 48 , &s , &d );
    std::cout << "50 + 48 = " << s << ", |50 - 48| = " << d << std::endl;

    sum_and_absolute_difference2( 17 , 20 , s , d );
    std::cout << "17 + 20 = " << s << ", |17 - 20| = " << d << std::endl;

    double x = 50.0;
    double y = 100.0;
    swap1( &x , &y );
    std::cout << "swapping (50,100) => (" << x << "," << y << ")" << std::endl;

    double u = 0.0;
    double v = 8.0;
    swap2( u , v );
    std::cout << "swapping (0,8) => (" << u << "," << v << ")" << std::endl;

    double i = 3;
    double j = 7;
    swap3( i , j );
    std::cout << "swapping (3,7) => (" << i << "," << j << ") .... swap3 is very useless" << std::endl;

    return 0;
}