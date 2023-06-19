import ctypes

# Load the shared library
dynamic_lib = ctypes.CDLL('./libdynamic.so')  # Use the appropriate library name for your system

# Call one of the functions
result = dynamic_lib._putchar('A')
print(result)
