echo "g(i,x,t,o){return((3&x&(i*((3&i>>16?\"BY}6YB6%\":\"Qj}6jQ6%\")[t%8]+51)>>o))<<4);};main(i,n,s){for(i=0;;i++)putchar(g(i,1,n=i>>14,12)+g(i,s=i>>17,n^i>>13,10)+g(i,s/3,n+((i>>11)%3),10)+g(i,s/5,8+n-((i>>10)%3),9));}"|gcc -xc -&&./a.out > nerdymusic.txt &
#only have to compute it once
cat nerdymusic.txt | aplay &
#remeber ctrl + z; jobs; kill %foojobs; or  ctrl + c to stop a process early!!!!! 

echo "g(i,x,t,o){return((3&x&(i*((3&i>>16?\"BY}6YB6%\":\"Qj}6jQ6%\")[t%8]+51)>>o))<<4);};main(i,n,s){for(i=0;;i++)putchar(g(i,1,n=i*14,12)+g(i,s=i*17,n^i*13,10)+g(i,s/3,n+((i*11)%3),10)+g(i,s/5,8+n-((i*10)%3),9));}"|gcc -xc -&&./a.out > nerdymusic2.txt &
# can I alter the c code to stop instead of repeating? too tired atm
# this would probably mean figuring out why it repeats and when it repeats, then ending the code there

fg; ctrl + z;
# to pause play
bg;
# restarts playback






cat CPPpractice/'g(i...).c' | gcc -xc -&&./a.out > nerdymusic2.txt &


#gcc  -xc 'g(i...).c' -&&./a.out > nerdymusic3.txt &


gcc  -xc 'g(i...).c' -o'g(i...).o' 
./'g(i...).o' > nerdymusic3.txt &



# Their original code: 
# echo "g(i,x,t,o){return((3&x&(i*((3&i>>16?\"BY}6YB6%\":\"Qj}6jQ6%\")[t%8]+51)>>o))<<4);};main(i,n,s){for(i=0;;i++)putchar(g(i,1,n=i>>14,12)+g(i,s=i>>17,n^i>>13,10)+g(i,s/3,n+((i>>11)%3),10)+g(i,s/5,8+n-((i>>10)%3),9));}"|gcc -xc -&&./a.out|aplay
# from:
# http://txti.es/bitshiftvariationsincminor
# https://www.youtube.com/watch?v=MqZgoNRERY8&t=255s
# (computerphile)