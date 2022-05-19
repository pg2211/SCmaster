//net=newff([0 1;0 1],[6 1],{'logsig','logsig'});
//net=newff(minmax(p),[30,1],{'tansig','purelen'},'trainlm');
input=[1 1 0 0;1 0 1 0];
target=[0 1 1 0];
//%net.trainParam.show=NaN;
net=train(net,input,target);
output=sim(net,input);
output
