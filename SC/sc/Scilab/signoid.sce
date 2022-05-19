x=-10:0.1:10;
tmp=exp(-x);
y1=1./(1+tmp);
y2=(1-tmp)./(1+tmp);
y3=x;
subplot(2,3,1); plot(x,y1);
'grid on';
([min(x) max(x)-2 2]);
title('logistic function');
('(a)');
('circle');
subplot(2,3,2);
plot(x,y2);
'grid on';
([min(x)max(x)-2 2]);
title('Hyperbolic tangent function');
('(b)');
('circle');
subplot(2,3,3);
plot(x,y3);
'grid on';
([min(x)max(x)min(x)max(x)]);
title('identity function');
('(c)');
('circle');
c=1
function sg=sig(c,x)
    nx=length(x)
    on=ones(1,nx)
    sg=(on+exp(-c*x));
    sg=on./sg;
    
endfunction
x=[-15:0.1:15]
sg=sig(1,x)
//plot(sg)
subplot(2,3,5);
plot(sg);
'grid on'
set(gca(),'grid',[1,1]);
([min(x) max(x) -2 2]);
('(e)');
('square');
