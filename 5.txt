clc;
g = 7;
p = 23;
printf("\nThe results are as follows:\n\n");

x = 3;
y = 6;
[R1, R2] = modulo(g^x, g^y, p);

printf("1) Alice chooses x=%d & calculates R1=%d\n\n2) Bob chooses y=%d & calculates R2=%d\n\n", x, R1, y, R2);
printf("3) Alice sends the number %d to Bob \n\n4) Bob sends the number %d to Alice\n\n", R1, R2);

[K_Alice, K_Bob, K_Final] = modulo(R2^x, R1^y, g^(x*y), p);
printf('5) Alice calculates the symmetric key K=%d \n\n6) Bob calculates the symmetric key k=%d\n\n7) K_Final=%d \n\n', K_Alice, K_Bob, K_Final);
