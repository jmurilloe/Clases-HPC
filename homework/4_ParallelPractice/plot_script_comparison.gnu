set term pdf
set out "Fibonacci1.pdf"
set key left top
set grid
set xlabel "n"
set ylabel "Time"
set title "Optimization level comparison for Fibonacci Implementation"
plot 'datos0d.txt' u 1:2 w lp title "N Optimization 0", 'datos1d.txt' u 1:2 w lp title "N Optimization 1", 'datos2d.txt' u 1:2 w lp title "N Optimization 2", 'datos3d.txt' u 1:2 w lp title "N Optimization 3", 'datosfastd.txt' u 1:2 w lp title "N Optimization fast", 'datos0d.txt' u 1:3 w lp title "F Optimization 0", 'datos1d.txt' u 1:3 w lp title "F Optimization 1", 'datos2d.txt' u 1:3 w lp title "F Optimization 2", 'datos3d.txt' u 1:3 w lp title "F Optimization 3", 'datosfastd.txt' u 1:3 w lp title "F Optimization fast"
unset output
reset

set term pdf
set out "Fibonacci2.pdf"
set logscale y
set key left top
set grid
set xlabel "n"
set ylabel "Time"
set title "Optimization level comparison for Fibonacci Implementation"
plot 'datos0d.txt' u 1:2 w lp title "N Optimization 0", 'datos1d.txt' u 1:2 w lp title "N Optimization 1", 'datos2d.txt' u 1:2 w lp title "N Optimization 2", 'datos3d.txt' u 1:2 w lp title "N Optimization 3", 'datosfastd.txt' u 1:2 w lp title "N Optimization fast", 'datos0d.txt' u 1:3 w lp title "F Optimization 0", 'datos1d.txt' u 1:3 w lp title "F Optimization 1", 'datos2d.txt' u 1:3 w lp title "F Optimization 2", 'datos3d.txt' u 1:3 w lp title "F Optimization 3", 'datosfastd.txt' u 1:3 w lp title "F Optimization fast"
unset output
reset

set term pdf
set out "Fibonacci3.pdf"
set key left top
set grid
set xrange [0:20] 
set xlabel "n"
set ylabel "Time"
set title "Optimization level comparison for Fibonacci Implementation"
plot 'datos0d.txt' u 1:2 w lp title "N Optimization 0", 'datos1d.txt' u 1:2 w lp title "N Optimization 1", 'datos2d.txt' u 1:2 w lp title "N Optimization 2", 'datos3d.txt' u 1:2 w lp title "N Optimization 3", 'datosfastd.txt' u 1:2 w lp title "N Optimization fast", 'datos0d.txt' u 1:3 w lp title "F Optimization 0", 'datos1d.txt' u 1:3 w lp title "F Optimization 1", 'datos2d.txt' u 1:3 w lp title "F Optimization 2", 'datos3d.txt' u 1:3 w lp title "F Optimization 3", 'datosfastd.txt' u 1:3 w lp title "F Optimization fast"
unset output
reset

set term pdf
set out "Fibonacci4.pdf"
set logscale y
set key left top
set grid
set xrange [0:20] 
set xlabel "n"
set ylabel "Time"
set title "Optimization level comparison for Fibonacci Implementation"
plot 'datos0d.txt' u 1:2 w lp title "N Optimization 0", 'datos1d.txt' u 1:2 w lp title "N Optimization 1", 'datos2d.txt' u 1:2 w lp title "N Optimization 2", 'datos3d.txt' u 1:2 w lp title "N Optimization 3", 'datosfastd.txt' u 1:2 w lp title "N Optimization fast", 'datos0d.txt' u 1:3 w lp title "F Optimization 0", 'datos1d.txt' u 1:3 w lp title "F Optimization 1", 'datos2d.txt' u 1:3 w lp title "F Optimization 2", 'datos3d.txt' u 1:3 w lp title "F Optimization 3", 'datosfastd.txt' u 1:3 w lp title "F Optimization fast"
unset output
reset