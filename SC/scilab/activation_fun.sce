x=-10:.1:10
tmp=exp(-x);
y1=1./(1+tmp);
y2=(1-tmp)./(1+tmp);
y3=x;

subplot(2,3,1);
plot(x,y1);
xgrid(5,1,7);
//grid on
set ( gca () ,"grid" ,[1 1]) ;
axis([min(x) max(x) -2 2]);
title('Logistic function');
xlabel1('(a)');
axis('square');

subplot(2,3,2);
plot(x,y2);
//grid on
xgrid(5,1,7);
set ( gca () ,"grid" ,[1 1]) ;
axis([min(x) max(x) -2 2]);
title('Hyperbolic tangent function');
xlabel1('(b)');
axis('square');
subplot(2,3,3);

plot(x,y3);
//grid on
xgrid(5,1,7);
set ( gca () ,"grid" ,[1 1]) ;
axis([min(x) max(x) min(x) max(x)]);
title('Identity function');
xlabel1('(c)');
axis('square');
