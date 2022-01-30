  /*  
  count all prime numbers below N
sieve of reatosthenes algorithm for counting prime numbers below
step 1 :- Mark all number as prime number from 2 to N
step 2 :- start from 2 now cut all the number(except 2) which are in the table of 2  till N
           now 3 cut all the number(except 3) which are in the table of 3  till N
           ans so on till N
Then we only left all prime numbers till N


HFC (highest common factor)-->  Highest no. which completely divide by 2 number
easiest form to find
    int gcd(int a, int b){
        if(a==0)
        return b;
        if(b==0)
        return a;

        while(a!=b){
            if(a>b)
            a-=b;
            else
            b-=a;
        }        return a;
Relation with LCM(a,b) * bcd(a,b) = a*b


Some important identities about the modulo operator:(for avoid overflow)

we can write this to ->this
(a % m)+(b % m)%m    =(a+b)%m
(a % m)−(b % m)%m    =(a−b)%m
(a % m)⋅(b % m)%m     =(a*b)%m

  
Fast exponentiation algorithm
  
  
  
  
  
    */
