talento(juan, cantar).
talento(pedro, cantar).
talento(maria, cantar).
talento(juan, pintar).
talento(patricia, pintar).
talento(lucas, bailar).
talento(pedro, escribir).
talento(luisa, escribir).
talento(ana, escribir).

talentoso(X) :- talento(X, Y), talento(X, Z), Y \= Z.
semejantes(X, Y) :- talento(X, Z), talento(Y, Z), X \= Y.