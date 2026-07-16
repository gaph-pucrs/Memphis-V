import os
import pandas as pd
import matplotlib.pyplot as plt
import matplotlib.patches as mpatches
import seaborn as sns


root = os.path.dirname(os.path.abspath(__file__))
results = os.path.join(root, "results")

# __target = "v128"
__target = "scalar"

__app = os.path.join(results, "lmfrnet")
__data = os.path.join(__app, f"{__target}.csv")
__plots = __app

data_df = pd.read_csv(__data)

#---------------------------------
#       color of each bar
#---------------------------------
# color_scalar = "mediumslateblue"
# color_scalar = "dodgerblue"
# color_scalar = "midnightblue"
color_scalar = "royalblue"

# color_vector = "darkred"
# color_vector = "lightcoral"
# color_vector = "violet"
# color_vector = "mediumspringgreen"
# color_vector = "orangered"
color_vector = "red"

# color_hline = "mediumspringgreen"
color_hline = "mediumorchid"

# vector_tasks = [4, 6, 8]
vector_tasks = []
it = 0

palette = []
for i in range(9):
    if it < len(vector_tasks) and (i+1) == vector_tasks[it]:
        palette.append(color_vector)
        it += 1
    else:
        palette.append(color_scalar)

palette = [
    color_vector if (i+1) in vector_tasks else color_scalar for i in range(9)
]

#---------------------------------

plt.figure(figsize=(10,5))

sns.barplot(
    data=data_df,
    x="task",
    y="cycles",
    palette=palette
)

plt.ylim(1e6, 5*1e8)
plt.yticks([1e6, 1e7, 1e8])

plt.yscale("log")

# plt.title("LMFRNet pipeline - VLEN 128")
plt.title("LMFRNet pipeline - SCALAR")
plt.xlabel("Task")
plt.ylabel("Cycles")

plt.xticks(rotation=45)
plt.tight_layout()
plt.grid(True)

patch_scalar = mpatches.Patch(
    color=color_scalar, label="scalar"
)

patch_vector = mpatches.Patch(
    color=color_vector, label="vector"
)

# plt.legend(
#     handles=[patch_scalar, patch_vector, plt.gca().get_lines()[0]],
#     loc="upper right"
# )

plt.legend(
    handles=[patch_scalar, patch_vector],
    loc="upper right",
    prop={'size': 12},
    handlelength=2.5,
    handleheight=1.5 
)

plt.axhline(
    y=6e7, 
    linestyle="--", 
    color=color_hline, 
    linewidth=1.5*2, 
    label="6×10⁷"
)

plt.savefig(
    os.path.join(__plots, f"plot_{__target}.png"), 
    dpi=300, 
    bbox_inches="tight"
)
plt.show()
