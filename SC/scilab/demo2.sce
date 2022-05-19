x = -10:0.1:10;
 tmp = exp ( -x ) ;
 y1 =1 ./(1+ tmp ) ; // L o g i s t i c f u n c t i o n
 y2 =(1 - tmp ) ./(1+ tmp ) ; // H y p e r b o l i c Tangentf u n c t i o n
 y3 = x; // I d e n t i t y f u n c t i o n

subplot (2 ,3 ,1) ;
 plot (x , y1 ) ;
set ( gca () ,'grid' ,[1 1]) ;
 ([ min( x ) max( x ) -2 2]) ;
 title ('logistic function' ) ;
 xlabel ( '( a )' ) ;
( 's q u a r e' ) ;
 
 subplot (2 ,3 ,2) ;
plot (x , y2 ) ;
set ( gca () ,'grid',[1 1]) ;
 ([ min( x ) max( x ) -2 2]) ;
 title ( 'hyperbolic tangent function' ) ;
 xlabel (  '( b )' ) ;
 ( 's q u a r e ' ) ;

subplot (2 ,3 ,3) ;
 plot (x , y3 ) ;
 set ( gca () ,'grid',[1 1]) ;
 ([ min( x ) max( x ) -2 2]) ;
title ( 'Identity function' ) ;
xlabel ( '( c )'  ) ;
 ( 's q u a r e ' ) ;
 
 subplot (2 ,3 ,4) ;
 plot (x,x) ;
set ( gca () ,'grid' ,[1 1]) ;
 ([ min( x ) max( x ) -2 2]) ;
 title ('linear function' ) ;
 xlabel ( '( d )' ) ;
( 's q u a r e' ) ;

/*sig(0)
function [g]=sig(z)
    g=zeros(size(z));
    [m,n]=size(z);
    for i=1:m
        for j=1:n
            g(i,j)/(1+exp(-2(i,j)));
    end
    end
endfunction
subplot (2 ,3 ,5) ;
 plot (x,g) ;
set ( gca () ,'grid' ,[1 1]) ;
 ([ min( x ) max( y ) -2 2]) ;
 title ('sigmoid function' ) ;
 xlabel ( '( e )' ) ;
( 's q u a r e' ) ;
*/
/*temp1=1./1+exp(-l*x);*/
c= 1 // sigmoid constant
   
   function sg= sig( c, x)
    nx = length(x) ;
    on = ones(1,nx) ;
    sg = (on + exp(-c*x) ) ;
    sg = on./sg;
    endfunction
   // x=[-15:0.1:15];
   sg=sig(1,x)
   //plot(sg)
   subplot (2 ,3 ,5) ;
 plot (sg) ;
set ( gca () ,'grid' ,[1 1]) ;
 ([ min( x ) max( x ) -2 2]) ;
 title ('sigmoid function' ) ;
 xlabel ( '( e )' ) ;
( 's q u a r e' ) ;

l=input('Enter value for lambda-')
c=input('Enter value for constant-')
temp=exp(-(x-c)^2/2*l^2)
subplot (2 ,3 ,6) ;
 plot (x,temp) ;
set ( gca () ,'grid' ,[1 1]) ;
 ([ min( x ) max( x ) -2 2]) ;
 title ('gausian function' ) ;
 xlabel ( '( f )' ) ;
( 's q u a r e' ) ;


