clear all;
clc;
disp('AUTO ASSOC NETWORK----HEBB RULE');
w=[0 0 0 0;0 0 0 0;0 0 0 0;0 0 0 0];
s=[1 1 1 -1];
t=[1 1 1 -1];
input=[1 -1 -1 -1];
disp('input vector');
disp(s);
for i=1:4
    for j=1:4
        w(i,j)=w(i,j)+(s(i)*t(j));
        end
end
disp('weight to store the given vector');
disp(w);
disp('testing the net with vector');
input
yin=input*w;
for i=1:4
    if yin(i)>0
        y(i)=1;
    else
        y(i)=-1;
        end
end
if y==s 
    disp('pattern is recognised');
else
    disp('pattern is not recogni');
end
/*
"AUTO ASSOC NETWORK----HEBB RULE"

  "input vector"

   1..   1.   1.  -1

  "weight to store the given vector"

   1.   1.   1.  -1.
   1.   1.   1.  -1.
   1.   1.   1.  -1.
  -1.  -1.  -1.   1.

  "testing the net with vector"

  "pattern is not recogni"
  */
  
