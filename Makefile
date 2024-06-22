# Definições
TARGET = main
ARDUINO_LIBS = TM1637Display
ARDUINO_BOARD = uno

# Arquivos fonte
SRC = main.cpp display.cpp

# Diretórios
ARDUINO_DIR = /path/to/arduino
ARDMK_DIR = /path/to/Arduino-Makefile

# Inclusão do Makefile da biblioteca do Arduino
include $(ARDMK_DIR)/Arduino.mk
