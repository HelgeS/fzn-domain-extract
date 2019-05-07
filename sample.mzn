var 0..100: c;
var 0..20: b;
array[1..4] of var 1..10: z;
constraint b > z[1];
constraint b < z[4];
constraint z[2] != 3;
constraint c == 15;
var int: objective = b + sum(z) + c;
solve maximize objective;
