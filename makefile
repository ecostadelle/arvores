DOT:=$(wildcard dot/*)

dot:
	dot dot/1.dot -Tpng  -o img/1.png 
	dot dot/2.dot -Tpng  -o img/2.png 
	dot dot/3.dot -Tpng  -o img/3.png 
	dot dot/4.dot -Tpng  -o img/4.png 
	dot dot/5.dot -Tpng  -o img/5.png 
	dot dot/6.dot -Tpng  -o img/6.png 
	dot dot/7.dot -Tpng  -o img/7.png 
	dot dot/8.dot -Tpng  -o img/8.png 
	dot dot/9.dot -Tpng  -o img/9.png 
	dot dot/10.dot -Tpng  -o img/10.png 
	



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