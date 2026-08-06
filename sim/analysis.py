import os
import math
import pandas as pd

root = "./results/lmfrnet"

scalar = 0
v128   = 1

scalar_df = pd.read_csv(
    os.path.join(root, "throughput_scalar.csv")
)

v128_df = pd.read_csv(
    os.path.join(root, "throughput_v128.csv")
)

data = [
    scalar_df,
    v128_df
]

for case in data:
    # values in mega (1e6)
    case["throughput"] = case["throughput"].apply(
        lambda x: int(math.ceil(x/1e6))
    )

print("--- SCALAR ---\n")
print(data[scalar])
print()

print("--- VECTOR 128 ---\n")
print(data[v128])
print()