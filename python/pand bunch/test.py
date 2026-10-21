import pandas as pd

def student():
#import find_student1done
    student=pd.read_csv("vc_code_py/python/python/pand bunch/Student Id2345.csv")
    
    try:
        results = student[student["Grade"].str.contains("D", case=False, na=False)]
    
        print(results)
    
        
    except ValueError:
        print("Ok")        
          
        
    student=student.fillna("Not")
    print (student.to_string())
    student.to_csv("vc_code_py/python/python/pand bunch/Student Id2345.csv", index=False)
    
student()

"""

student =pd.read_csv("vc_code_py/python/python/pand bunch/Student Id2345.csv")
print(student.to_string())

try :
    print("ok")
except ValueError:
    print("no")
    
    
    
w=0
        while w<1:
            student=student.drop(columns=["Student ID"])
            w=w+1
    

    
    
import pandas as pd

def search_pandas_column(file_path, target_column, keyword):
    # Load the CSV into a DataFrame
    df = pd.read_csv(file_path)
    
    # Search for the keyword in the specific column
    # case=False makes it case-insensitive
    results = df[df[target_column].str.contains(keyword, case=False, na=False)]
    
    return results

# Example usage:
# results = search_pandas_column('data.csv', 'Name', 'john')   
""" 
    
    