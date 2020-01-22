#目标对象:依赖对象
#all:a b

#1a:a.c
	#1	gcc a.c -o a
#1b:a.c
	#gcc a.c -o b

#a:a.o
#		gcc a.o -o a
#a.o:a.c
#		gcc -c a.c -o a.o
#


#a:b.c a.c
#		gcc $< -o $@
#   #()引用一个命令，获取执行结果      
src=$(wildcard ./*.c)#src 定义一个变量 src 存储 wildcard命令得到的当前目录下以.c结尾的文件名
obj=$(patsubst %.c,%.o,$(src))#将src里面的文件名替换成.o a.o b.o
#变量的使用需要使用$()括起来

bin=./a#要生成的目标对象，a
.PHONY:$(bin) clean  #声明伪对象,重新执行
$(bin):$(obj)#通过俩个.o文件生成.c
		gcc $^ -o $@
%.o:%.c#%是通配符
		gcc -c $< -o $@
clean:
		rm -rf $(obj) $(bin)


