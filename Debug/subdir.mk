################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../App.cpp \
../App_draw.cpp \
../App_event.cpp \
../App_init.cpp \
../App_loop.cpp \
../App_quit.cpp \
../Ctile.cpp \
../Map.cpp \
../Surfaces.cpp \
../Tile.cpp \
../main.cpp 

OBJS += \
./App.o \
./App_draw.o \
./App_event.o \
./App_init.o \
./App_loop.o \
./App_quit.o \
./Ctile.o \
./Map.o \
./Surfaces.o \
./Tile.o \
./main.o 

CPP_DEPS += \
./App.d \
./App_draw.d \
./App_event.d \
./App_init.d \
./App_loop.d \
./App_quit.d \
./Ctile.d \
./Map.d \
./Surfaces.d \
./Tile.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++  -o"$@" "$<"-O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)"
	@echo 'Finished building: $<'
	@echo ' '


