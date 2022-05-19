// genetic algorithm
clc;
n=input('enter no of population in each iteration');
 nit=input('enter no of population');
[oldchrom]=initbp(n,5)
FieldD=[5;0;31;0;0;1;1]
for i=1:nit
    phen=bindecod(oldchrom,fieldD,3);
    sqx=phen.^2;
    sumsqx=sum(sqx);
    avsqx=sumsqx/n;
    hsqx=max(sqx);
    pselect=sqx./sumsqx;
    sumpselect=sum(pselect);
    acpselect=sumpselect/n;
    hpselect=max(pselect);
    FitnV=sqx;
    Nsel=4;
    newchrix=selrws(FitnV,Nsel);
    newchrom=oldchrom(newchrix,:);
    crossrate=1;
     newchrom=recsp(newchrom,crossrate);
     vlub=0:31;
     mutrate=0.001;
      newchrom=mutrandbin(newchromc,vlub,0.001);
      disp('for iteration');
      i
      disp('population');
      oldchrom
      disp('X');
      phen
      disp('f(X)');
      sqx
      oldchrom=newchromm;s
end
