################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Animable.cpp \
../App.cpp \
../App_draw.cpp \
../App_event.cpp \
../App_init.cpp \
../App_loop.cpp \
../App_quit.cpp \
../Entity.cpp \
../EventHandler.cpp \
../Map.cpp \
../PlayableCharacter.cpp \
../Surfaces.cpp \
../Tile.cpp \
../main.cpp 

OBJS += \
./Animable.o \
./App.o \
./App_draw.o \
./App_event.o \
./App_init.o \
./App_loop.o \
./App_quit.o \
./Entity.o \
./EventHandler.o \
./Map.o \
./PlayableCharacter.o \
./Surfaces.o \
./Tile.o \
./main.o 

CPP_DEPS += \
./Animable.d \
./App.d \
./App_draw.d \
./App_event.d \
./App_init.d \
./App_loop.d \
./App_quit.d \
./Entity.d \
./EventHandler.d \
./Map.d \
./PlayableCharacter.d \
./Surfaces.d \
./Tile.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


