import base64

encoded = "VG90YWwgRXh0cmEgRmVhdHVyZTogMjMKVG90YWwgQnV0dG9ucyA6IDM4Ckhp\nZ2h0IENhbGN1bGF0aW9uIERpZ2l0OjUwCgorLS0tLS0tLS0tLS0tLS0tLS0t\nLS0tLS0tLS0tLS0tCkZ1bGwgU3RvcCBDdXN0b21pemF0aW9uLCAKSGlzdG9y\neSBUcmFjawpaZXJvIERpdml0aW9uIEVycm9yCkltYWdpbmF5IFRyYWNrCldp\nbmRvdyBJY29uCkJpbmFyeS1EZWNpbWFsIC0+PC0KSGV4LURlY2ltYWwgLT48\nLQpPY3QtRGVjaW1hbCAtPjwtClNjaWVudGlmaWMgQ2FsY3VsYXRpb24gPSBT\naW4sIFRhbiwgQ290LCBsb2cxYAo=\n"  # this is a truncated string for example

decoded_bytes = base64.b64decode(encoded)
decoded_text = decoded_bytes.decode('utf-8')

print(decoded_text)

 
txt = 'Hello how are you!'
encoded_bytes = base64.b64encode(txt.encode('utf-8'))
print(encoded_bytes)            # Outputs: b'SGVsbG8gaG93IGFyZSB5b3Uh'
print(encoded_bytes.decode())   # Optional: to get the string version
