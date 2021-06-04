ZZ euclides(ZZ a, ZZ b) {                                                       
    if (a == 0)                                                                    
         return b;                                                                    
     return euclides(mod(b, a), a);                
}
