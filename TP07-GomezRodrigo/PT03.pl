edad(luis, 20).
edad(juan, 72).
edad(pedro, 40).
edad(julia, 17).
edad(maria, 46).
edad(andres, 50).
edad(rocio, 67).
edad(joaquin, 15).
edad(cecilia, 35).
edad(felicia, 60).
edad(santiago, 45).
edad(veronica, 34).
edad(eugenia, 70).
edad(carlos, 73).

estadoCivil(luis, soltero).
estadoCivil(juan, viudo).
estadoCivil(pedro, casado).
estadoCivil(julia, casada).
estadoCivil(maria, soltera).
estadoCivil(andres, casado).
estadoCivil(rocio, soltera).
estadoCivil(joaquin, soltero).
estadoCivil(cecilia, casada).
estadoCivil(felicia, casada).
estadoCivil(santiago, casado).
estadoCivil(veronica, casada).
estadoCivil(eugenia, viuda).
estadoCivil(carlos, casado).

masculino(luis).
masculino(juan).
masculino(pedro).
masculino(andres).
masculino(joaquin).
masculino(santiago).
masculino(carlos).

femenino(julia).
femenino(maria).
femenino(rocio).
femenino(cecilia).
femenino(felicia).
femenino(veronica).
femenino(eugenia).

menorDeEdad(X) :- edad(X, Y), Y < 18.
jubilacion(X) :- (masculino(X), edad(X, Y), Y >= 65); (femenino(X), edad(X, Y), Y >= 60).
esMayor(X, Y) :- edad(X, Z), edad(Y, W), Z > W.
coetaneos(X, Y) :- (edad(X, Z),edad(Y,W)), (Z-W < 10, Z-W > -10),(X \= Y).