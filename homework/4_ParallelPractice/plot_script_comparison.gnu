set term pdf
set out "NaiveFibonacci1.pdf"
set logscale y
set key left top
set grid
set xlabel "n"
set ylabel "Time"
set title "Optimization level comparison for Naive Fibonacci Implementation"
plot 'data0.txt' u 1:2 w lp title "Optimization 0", 'data1.txt' u 1:2 w lp title "Optimization 1", 'data2.txt' u 1:2 w lp title "Optimization 2", 'data3.txt' u 1:2 w lp title "Optimization 3", 'datafast.txt' u 1:2 w lp title "Optimization fast"
unset output