
// Using the #define statement, how would you declare a manifest contact that return the number of seconds in year? Disregard leap years in your answer.

#define SECONDS_PER_YEAR (60UL * 60UL * 24UL * 365UL)

// Write the “standard” MIN macro. That is, a macro that takes two arguments and returns the smaller of the two arguments

#define  MIN(A,B) ((A <= (B) ? (A) : (B)))