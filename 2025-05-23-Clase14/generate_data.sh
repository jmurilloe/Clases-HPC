parallel 'g++ -O{} matmul_block.cpp -o {}.x' ::: 0 1 2 3 fast
parallel './{2}.x 1024 {1} 2 >> {2}.txt'  ::: 2 4 8 16 32 64 128 256 512 1024 ::: 0 1 2 3 fast
parallel 'sort -n 2 {}.txt' ::: 0 1 2 3 fast