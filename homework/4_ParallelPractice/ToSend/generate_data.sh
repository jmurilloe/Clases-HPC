parallel 'g++ -O{} fibonacci.cpp -o fibonacci{}.x' ::: 0 1 2 3 fast 
parallel './fibonacci{1}.x {2} >> data{1}.txt ' ::: 0 1 2 3 fast ::: 5 8 10 15 18 20 25 28 30 35 38 40 45 48 50 55 58 60 # 65 68 70 75 78 80 85 88
#parallel 'sort -nk 1 data{}.txt' ::: 0 1 2 3 fast