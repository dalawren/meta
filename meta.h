#define ARGN(a, b, c, d, e, f, g, h, i, j, N, ...) N
#define JOIN(A, ...) A __VA_ARGS__
#define ARGC(...) JOIN(ARGN, (0, ##__VA_ARGS__, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0))

#define M0(F)
#define M1(F, a) F(a)
#define M2(F, a, b) F(a), F(b) 
#define M3(F, a, b, c) F(a), F(b), F(c)
#define M4(F, a, b, c, d) F(a), F(b), F(c), F(d)
#define MAP(F, ...) JOIN(ARGN, (0, ##__VA_ARGS__, M9, M8, M7, M6, M5, M4, M3, M2, M1, M0))(F, ##__VA_ARGS__)

void out(...);

#define VAR(x) #x " = ", x

#define OUT(...) out(MAP(VAR, ##__VA_ARGS__))

