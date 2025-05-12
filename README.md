# Crazy Compiler :D

<!--  Overview  -->
## <img  align= center width =60px src="https://cdn-icons-png.flaticon.com/512/8632/8632710.png"> Overview <a id="overview"></a>
This is a custom C++ compiler project built using **Lex** and **Yacc** (Flex and Bison), which performs:
- Lexical analysis
- Syntax analysis
- Semantic analysis
- Symbol table construction
- Intermediate code generation (Quadruples)


<h2 href="#Structure">📁 Project Structure</h2>
 <div> 
  <pre>
├── src
│   └── compiler.cpp
│   └── compiler.h
│   └── lexer.l
│   └── parser.y
├── logs
│   └── bison_errors.log
│   └── flex_errors.log
│   └── gcc_errors.log
├── outputs
│   └── action.txt
│   └── error.txt
│   └── symbol.txt
├── GUI
│   └── gui.py
├── run.sh
├── run.bat
└── README.md
    </pre>
</div>

<!-- Getting Started -->
## <img align="center" width="60px" height="60px" src="https://media3.giphy.com/media/wuZWV7keWqi2jJGzdB/giphy.gif?cid=6c09b952wp4ev7jtywg3j6tt7ec7vr3piiwql2vhrlsgydyz&ep=v1_internal_gif_by_id&rid=giphy.gif&ct=s"> Getting Started <a id="started"></a>

1. **Clone the Repository**
    ```bash
    git clone https://github.com/Sara-Gamal12/compilers-project.git
    ```

2. **Change Directory**
    ```bash
    cd compilers-project
    ```

3. **Running the project (UNIX)**
    ```bash
    chmod +x run.sh
    ./run.sh
    ```

3. **Running the project (WINDOWS)**
    ```bat
    run.bat
    ```