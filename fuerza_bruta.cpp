ZZ fuerza_bruta(ZZ m, ZZ n)
{
  ZZ i=m;
  while(divis(m,i)!=0||divis(n,i)!=0)
  {
    i=i-1;
    cout<<"mcd: "<<i<<endl;
  }
  return i;

}
