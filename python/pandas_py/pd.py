import pandas as pd
data={
    "name":["sayantan","krishna","tista","ria","riva","alen"],
    "age":[16,17,18,16,16,16],
    "address":["kolkata","katwa","katwa","uttarpara","jhorahat","andul"]
}
student=pd.DataFrame(data,index=[1,2,3,4,5,6])
student["class"]=[11,13,11,15,15,16]
new_row=pd.DataFrame([{"name":"alive","age":17,"class":12,"address":"kolkata"}],index=[7])
student=pd.concat([student,new_row])
print(student) 