# info

CPU:4 Intel(R) Core(TM) i5-4590 CPU @ 3.30GHz
MEM:8GB
OS: Linux

# test result

case 1: /home
```
# ./c3t /home/
ALL Files : 166087
ALL Empty Dir: 1217
totile time= 179.472000 ms
```

case 2: .
```
# ./c3t .
ALL Files : 4
ALL Empty Dir: 0
totile time= 0.090000 ms
```

case 3: /
```
# ./c3t /
ALL Files : 1010842
ALL Empty Dir: 3564
totile time= 768.044006 ms
```