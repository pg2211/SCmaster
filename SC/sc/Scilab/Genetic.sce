clc;
n=input('enter no of n iteration:');
nit=input('Enter no. of population in each iteration:');
[oldchrom]=zeros(n,5)        
field=[5;0;31;0;0;1;1]
for i=1:nit
    phen=bindec(oldchrom,field,3);
    sqx=phen.^2;
    sumsqx=sum(sqx);
    avsqx=sumsqxln;
    hsqx=max(sqx);
    pselect=sqx|sumsqx;
    sumpselect=sum(pselect);
    avpselect=sumselect/n;
    hpselect=max(pselect);
    Fitnv=sqx;
    Nsel=4;
    newchirx=selrws(Fitnv,Nsel);
    newchrom=oldcrom(newchrix,:);
    crossrate=1;
    newchrom=recsp(newchrom,crossrate);
    vlub=0:31;
    mutrate=0.001;
    newchromn=mutrandbin(newcromic,vlub,0.001);
    disp('for iteration');
    disp(i);
    disp('population');
    disp(oldcrom);
    disp('X');
    disp(phen);
    disp("f(x)");
    disp(sqx);
    oldcrom=newchrom;
end 
