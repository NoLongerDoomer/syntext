# Setting build as as variable
BUILD_DIR := build

# $(BUILD_DIR) makes sure dir exists
# $(BUILD_DIR)/syntext specifies output target
all : $(BUILD_DIR) $(BUILD_DIR)/syntext

# mkdir -p : creates directory if doesn't exist
$(BUILD_DIR) :
	mkdir -p $(BUILD_DIR)

# Builds to $@ which in this case means target directory
$(BUILD_DIR)/syntext : 
	gcc syntext.c -o $@ -Wall -Wextra -pedantic -std=c99
