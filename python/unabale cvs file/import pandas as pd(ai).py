import pandas as pd
import tkinter as tk
from tkinter import filedialog, messagebox

# Initialize the main application window
root = tk.Tk()
root.title("CSV Column Search")
root.geometry("500x400")

# Global variable to store the loaded DataFrame
dataframe = None

def load_csv():
    """Load a CSV file and display its columns."""
    global dataframe
    file_path = filedialog.askopenfilename(title="Select a CSV File", filetypes=[("CSV Files", "*.csv")])
    if file_path:
        try:
            dataframe = pd.read_csv(file_path)
            column_list.delete(0, tk.END)  # Clear the listbox
            for col in dataframe.columns:
                column_list.insert(tk.END, col)
            messagebox.showinfo("Success", "CSV file loaded successfully!")
        except Exception as e:
            messagebox.showerror("Error", f"Failed to load CSV file: {e}")

def search_column():
    """Search and display the selected column."""
    global dataframe
    if dataframe is None:
        messagebox.showwarning("Warning", "Please load a CSV file first.")
        return

    selected_column = column_list.get(tk.ACTIVE)
    if selected_column:
        try:
            result_text.delete(1.0, tk.END)  # Clear the text widget
            result_text.insert(tk.END, dataframe[selected_column].to_string(index=False))
        except KeyError:
            messagebox.showerror("Error", f"Column '{selected_column}' not found.")
    else:
        messagebox.showwarning("Warning", "Please select a column to search.")

# Create GUI components
load_button = tk.Button(root, text="Load CSV", command=load_csv)
load_button.pack(pady=10)

column_list = tk.Listbox(root, height=10, width=50)
column_list.pack(pady=10)

search_button = tk.Button(root, text="Search Column", command=search_column)
search_button.pack(pady=10)

result_text = tk.Text(root, height=10, width=50)
result_text.pack(pady=10)

# Run the application
root.mainloop()