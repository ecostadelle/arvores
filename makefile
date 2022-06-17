DOT:=$(wildcard dot/*)

dot:
	dot dot/1 -Tpng  -o img/1.png 
	dot dot/2 -Tpng  -o img/2.png 
	dot dot/3 -Tpng  -o img/3.png 
	dot dot/4 -Tpng  -o img/4.png 
	dot dot/5 -Tpng  -o img/5.png 
	dot dot/6 -Tpng  -o img/6.png 
	dot dot/7 -Tpng  -o img/7.png 
	dot dot/8 -Tpng  -o img/8.png 
	dot dot/9 -Tpng  -o img/9.png 
	dot dot/10 -Tpng  -o img/10.png 
	



all:
	clear
	g++ -o main main.cpp
	./main
	rm -rf main.exe

pdf:
	pandoc README.md -o Lista2.pdf --from markdown --template eisvogel -V classoption=oneside --listings
	start "" "C:\Program Files (x86)\Google\Chrome\Application\chrome.exe" "C:\github\edAtividade5\arvores\Lista2.pdf"

htm:
	pandoc README.md -o Lista2.html --lua-filter=codeblock-filter.lua