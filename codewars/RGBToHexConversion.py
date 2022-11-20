# The rgb function is incomplete. Complete it so that passing in RGB decimal will result in a hexadecimal
# representation being returned. Valid decimal values for RGB are 0 - 255. Any values that fall out of that range
# must be rounded to the closest valid value.

# Note: Your answer should always be 6 characters long, the shorthand with 3 will not work here.

def rgb(r, g, b):
    rgb_values = [r, g, b]
    valid_values = [0 if val < 0 else 255 if val > 255 else val for val in rgb_values]
    return f"{valid_values[0]:02X}{valid_values[1]:02X}{valid_values[2]:02X}"
