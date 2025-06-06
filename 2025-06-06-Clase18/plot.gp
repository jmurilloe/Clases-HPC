set title "Tiempo de pared vs tamaño para varios threads"
set xlabel "Tamaño de Matriz"
set ylabel "Tiempo"
set grid 
set key outside 
set datafile separator whitespace 
set style data linespoints 
set terminal pngcairo size 800,600
set output 'ThreadsComparisonWall.png'
plot 'lu1.txt' u 1:2:3 w yerrorlines title "Using 1 Thread", 'lu2.txt' u 1:2:3 w yerrorlines title "Using 2 Thread", 'lu4.txt' u 1:2:3 w yerrorlines title "Using 4 Thread", 'lu8.txt' u 1:2:3 w yerrorlines title "Using 8 Thread", 'lu16.txt' u 1:2:3 w yerrorlines title "Using 16 Thread"