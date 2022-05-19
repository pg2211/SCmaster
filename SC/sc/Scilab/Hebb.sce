clear all;
clc;
disp('AUTO ASSCOSIATIVE NETWORKS----HEBB RULE');
w=[0 0 0 0;0 0 0 0;0 0 0 0;0 0 0 0];
s=[1 1 1 -1];
t=[1 1 1 -1];
ip=[-1 -1 -1 -1];
disp('INPUT VECTOR');
disp(s);
for i=1:4
    for j=1:4
        w(i,j)=w(i,j)+(s(i)*t(j));
        end
end
disp('WEIGHTS TO STORE THE GIVEN VECTOR IS');
disp(w);
disp('TESTING THE NET WITH VECTOR');
ip
yin=ip*w;
    for i=1:4
        if yin(i)>0;
            y(i)=1;
        else
            y(i)=-1;
        end
    end
    if y==5
        disp('PATTERN IS RECOGNIZED');
    else
        disp('PATTERN IS NOT');
    end
    
