 in python5 import hashlib

def calculate_md5(input_string):
    md5_hash = hashlib.md5(input_string.encode())
    return md5_hash.hexdigest()

def main():
    input_string = input("Enter a string: ")
    md5_hash = calculate_md5(input_string)
    print("MD5 Hash:", md5_hash)

if __name__ == "__main__":
    main()