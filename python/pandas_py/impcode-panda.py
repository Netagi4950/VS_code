import pandas as pd
ww=pd.read_csv("vc_code_py/pandas_py/dada.csv",index_col="Full Name")

#print(ww.head())   # Shows first 5 rows
#print(ww.index)    # Shows the index values (to confirm Student_ID is set correctly)
#print(ww.to_string())
#print(ww.iloc[0:50])
print(ww.loc["Bella Powell"])
#print(ww.iloc[0:50:4])
#print(ww[["Job Title","Department"]].to_string())
