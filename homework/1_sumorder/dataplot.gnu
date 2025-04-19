set term pdf
set out "reldiffzoom.pdf"
set logscale x
set grid
set xrange[1e5:1e6] 
set xlabel "N Steps"
set ylabel "Relative difference"
set title "Relative Error Related to Sum Order Implementation"
plot 'data.txt' u 1:4 notitle w l
unset output