################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../srcpp/Caffe.cpp 

OBJS += \
./srcpp/Caffe.o 

CPP_DEPS += \
./srcpp/Caffe.d 


# Each subdirectory must supply rules for building sources it contributes
srcpp/%.o: ../srcpp/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -fPIC -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


