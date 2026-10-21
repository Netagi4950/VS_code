import pandas as pd

df = pd.read_csv("vc_code_py/pandas_py/dada.csv",index_col="Full Name")

# Print entire DataFrame
print(df.to_string())

# If you want to access a row by name in the "Name" column:
#print(df.loc["Everleigh Ng"])

# Print just the "Name" column
print(df["Job Title"].to_string())

# Print row at index 10
#print(df.iloc[10])

# Print rows 10 to 104, stepping by 5
#print(df[10:105:5].to_string())

# Print selected columns
#print(df[["Full Name","Job Title"]].to_string())
