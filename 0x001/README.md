# test result

### info 1

CPU:4 Intel(R) Core(TM) i5-4590 CPU @ 3.30GHz
MEM:8GB
OS: Linux

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
### info 2

VM
CPU:4 Intel(R) Xeon(R) CPU E5-2680 v4 @ 2.40GHz
MEM:4GB
OS: Linux

case 1：
```
./a.out /home/
ALL Files : 3718
ALL Empty Dir: 23
totile time= 0.000000 ms
```
case 2:
```
# ./a.out /
ALL Files : 607184
ALL Empty Dir: 4496
totile time= 560.000000 ms
```
