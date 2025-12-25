all: clean build run

clean:
	rm -rf main

build:
	gcc main.c -o main \
		-lraylib \
		-framework OpenGL \
		-framework Cocoa \
		-framework IOKit \
		-framework CoreVideo

run:
	./main


n: clean 
	nvim main.c


# GIT HELPERS

MESSAGE = .

push: clean add commit
	git push

add:
	git add .

commit:
	git commit -a -m "$(MESSAGE)"
