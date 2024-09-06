progenitor(jamesPotter, bisabueloDePrueba).
progenitor(jamesPotter, bisabuelaDePrueba).
progenitor(harry, jamesPotter).
progenitor(harry, lilyEvans).
progenitor(ginny, molleyWeasley).
progenitor(fred, molleyWeasley).
progenitor(george, molleyWeasley).
progenitor(ron, molleyWeasley).
progenitor(ginny, arthurWeasley).
progenitor(fred, arthurWeasley).
progenitor(george, arthurWeasley).
progenitor(ron, arthurWeasley).
progenitor(jamesSirius, harry).
progenitor(albusSeverus, harry).
progenitor(lilyLuna, harry).
progenitor(jamesSirius, ginny).
progenitor(albusSeverus, ginny).
progenitor(lilyLuna, ginny).
progenitor(rose, ron).
progenitor(hugo, ron).
progenitor(rose, hermione).
progenitor(hugo, hermione).

masculino(bisabueloDePrueba).
masculino(jamesPotter).
masculino(arthurWeasley).
masculino(harry).
masculino(fred).
masculino(george).
masculino(ron).
masculino(jamesSirius).
masculino(albusSeverus).
masculino(hugo).

femenino(bisabuelaDePrueba).
femenino(lilyEvans).
femenino(molleyWeasley).
femenino(ginny).
femenino(hermione).
femenino(lilyLuna).
femenino(rose).

padreDe(Y, X) :- progenitor(Y, X), masculino(X).
madreDe(Y, X) :- progenitor(Y, X), femenino(X).
hijoDe(Y, X) :- progenitor(X, Y), masculino(X).
hijaDe(Y, X) :- progenitor(X, Y), femenino(X).
abueloDe(Y, X) :- (progenitor(Z, X), progenitor(Y, Z)), masculino(X).
abuelaDe(Y, X) :- (progenitor(Z, X), progenitor(Y, Z)), femenino(X).
hermanos(Y, X) :- (madreDe(Y, Z), madreDe(X, Z)), (padreDe(Y,W),padreDe(X,W)), X \= Y.
primoDe(Y, X) :- (progenitor(Y, Z), progenitor(X, W), hermanos(Z, W)), hijoDe(W, X).
primaDe(Y, X) :- (progenitor(Y, Z), progenitor(X, W), hermanos(Z, W)), hijaDe(W, X).
tioDe(Y, X) :- progenitor(Y, Z),hermanos(Z, X), masculino(X).
tiaDe(Y, X) :- progenitor(Y, Z),hermanos(Z, X), femenino(X).

bisabueloDe(Y, X) :- (progenitor(W, X), progenitor(Z, W), progenitor(Y, Z)), masculino(X).
bisabuelaDe(Y, X) :- (progenitor(W, X), progenitor(Z, W), progenitor(Y, Z)), femenino(X).