escribirNPares(0) :- !.
escribirNPares(N) :- N > 0, N1 is N-1, escribirNPares(N1), P is 2*N, write(P).

sumarDigitos(N, S) :- N < 10, S is N, !.
sumarDigitos(N, S) :- N1 is N//10, sumarDigitos(N1, S1), S is (N mod 10) + S1.