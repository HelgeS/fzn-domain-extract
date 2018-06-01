var 0..100: c;
var 0..20: b;
array[1..4] of var 1..10: a;
constraint b > a[1];
constraint b < a[4];
constraint a[2] != 3;
constraint c == 15;
var int: objective = b + sum(a) + c;
solve maximize objective;