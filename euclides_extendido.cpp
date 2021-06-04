ZZ euclides_ext(ZZ a, ZZ b)
{
    ZZ r1,r2,s1,s2,t1,t2,s,t;

     r1 = a, r2 = b,
     s1 = 1, s2 = 0;
     t1 = 0, t2 = 1;
    
    while (r2 > 0)
    {
        ZZ q = r1 / r2;
        ZZ r = r1 - (q * r2);
        r1 = r2; r2 = r;

        s = s1 - (q * s2);
        s1 = s2; s2 = s;

        t = t1 - (q * t2);
        t1 = t2; t2 = t;
    };
    s = s1;
    if (s < 0)
        s = divis(s, b);
    return r1;
}
