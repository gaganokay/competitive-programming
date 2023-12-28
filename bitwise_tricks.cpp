/*
    *** 10 BITWISE TRICKS ***
    1. Check if a number is Even or Odd.
    2. Check if a number is Power of 2.
    3. Playing with the kth bit.
    4. Multiply or Divide a number by 2^k.
    5. Find out x % 2^k.
    6. Swapping 2 numbers X and Y without using temporary variable.
    7. Property.
    8. Toggle Numbers
    9. Identities.
    10. 


    1. Check if a number is Even or Odd.
    - n & 1 = 1 --> Odd
    - n & 1 = 0 --> Even


    2. Check if a number is Power of 2.
    - x & (x-1) = 0 --> Power of 2
    - x & (x-1) > 0 --> not a Power of 2
    # doesn't work if x is 0. so, it's an edge for not a power of 2.

    // returns 1 if it's a power of 2 otherwise, returns 0.
    bool powerOf2(int x) {
        return x && !(x & (x-1));
    }


    3. Playing with the kth bit.
    - check if kth bit is set : x & (1 << k)
    - toggle the kth bit      : x ^ (1 << k)
    - set the kth bit         : x | (1 << k)
    - unset the kth bit       : x & !(1 << k)


    4. Multiply or Divide a number by 2^k.
    - multiplication : left shift : (x << k)
    - division : right shift : (x >> k)


    5. Find out x % 2^k.
    - x & ((1 << k) - 1)


    6. Swapping 2 numbers X and Y without using temporary variable. (3 continuous operations)
    - X = X ^ Y
    - Y = X ^ Y
    - X = X ^ Y


    7. Property: no. of set bits in A = X
                 no. of set bits in B = Y
                 no. of set bits in (A ^ B) = Z
        then,
        Z is even if X + Y is even.
        Z is odd if X + Y is odd.


    8. if (X == A) X = B
       else if (X == B) X = A
       - X = A ^ B ^ X


    9. 2 important identities useful in some CP probems.
    - A + B = (A ^ B) + 2 * (A & B)
    - A + B = (A | B) + (A & B)


    10. Finding no. of set bits in a number X.
    --  __builtin_popcount(X)  // X is an int
    --  __builtin_popcountll(X)  // X is an long long


    NOTE: bitwise operations are faster than arithmetic operations.
*/