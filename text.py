



import requests

url = "https://example.com/file.zip"
file_name = "downloaded_file.zip"

response = requests.get(url)
with open(file_name, "wb") as file:
    file.write(response.content)

print(f"File downloaded as {file_name}")






