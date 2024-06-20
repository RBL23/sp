# Process
### Step 1: Define the Language
Let's define a simple language with the following features:
1. Arithmetic expressions with +, -, *, and /.
2. Integer literals.

### Step 2: Lexical Analysis (Tokenizer)
The lexical analyzer (tokenizer) converts the input source code into a list of tokens.

### Step 3: Syntax Analysis (Parser)
The syntax analyzer (parser) takes the tokens produced by the lexer and generates an Abstract Syntax Tree (AST).

### Step 4: Code Generation
The code generator walks the AST and generates the corresponding machine code or bytecode.
## Explanation
### 1. Lexer:

Tokenizes the input string into individual tokens like integers, operators, and parentheses.
### 2. Parser:

Converts the tokenized input into an Abstract Syntax Tree (AST) representing the hierarchical structure of the expression.
### 3. Interpreter:

Traverses the AST and evaluates the expression, producing the final result.
## Running the Compiler
To run the compiler, simply execute the script and input arithmetic expressions:
```
python compiler.py
```
Input expressions such as:
```
calc> 3 + 5
calc> (2 + 3) * 4
```
This example demonstrates the basic structure of a compiler and provides a foundation that can be extended to support more complex language features.
