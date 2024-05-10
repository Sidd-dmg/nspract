// Initialize variables
g = 7;
p = 23;
x = 3;
y = 6;

// Calculate shared values
R1 = modulo(g^x, p);
R2 = modulo(g^y, p);
K = modulo(R2^x, p); // Alice and Bob will arrive at the same value

// Display results
printf("\nThe results are as follows:\n\n"); 
printf("1) Alice chooses x = %d, calculates R1 = %d\n", x, R1);
printf("2) Bob chooses y = %d, calculates R2 = %d\n", y, R2);
printf("3) Alice sends %d to Bob\n", R1);
printf("4) Bob sends %d to Alice\n", R2);
printf("5) Shared symmetric key: K = %d\n", K); 
