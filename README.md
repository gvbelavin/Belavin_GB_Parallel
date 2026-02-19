# Sine Array Sum

Заполняет массив из 10^7 элементов значениями синуса (один период) и считает сумму.

## Сборка

```bash
mkdir build && cd build

# Double (по умолчанию)
cmake ..
# или
cmake -DUSE_FLOAT=OFF ..

# Float
cmake -DUSE_FLOAT=ON ..

make
