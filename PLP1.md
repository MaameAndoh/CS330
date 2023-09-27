## History of C++

The language I’ve selected for my Programming Language Project (PLP) is C++. The language was developed by Bjarne Stroustrup, a Danish computer scientist in 1979. 

C++ was designed to be flexible and stable. In terms of flexibility, the language was designed to do high level abstraction (the creation of classes and relationships between those objects), while being adaptable to the hardware. For this reason, the language can handle both demanding computing tasks, and complex applications as well as higher level languages. 

In terms of stability, in many of the areas C++ is used, such as IBM mainframes, programmers cannot afford to rewrite code all the time. They need code that can work efficiently across decades and hardware changes, and C++ is able to provide that security.

C++ is used across a variety of industries: from game development, to automobiles, to High Frequency Trading (HFT). For HFTs in particular, C++ is prized for it’s speed. As explained before, C++ is highly compatible with hardware and as such, helps reduce latency in the program. When trading opportunities are only available for nanoseconds, firms use C++ to quickly take advantage of those opportunities and return profits. 

As I go on my journey of learning C++, the following are the resources I will consult:
- https://www.learncpp.com/cpp-tutorial/function-templates/
- https://www.youtube.com/playlist?list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb
- C++ Primer by Stanley Lippman and Josee Lajoie 


## Getting Started

The following are the things I had to do in order to set up C++ on my computer and begin coding.
1. I had VSCode installed on my computer since that was the IDE I used to learn Java and Python. So I didn’t have to go through additional steps of installing and setting up an IDE. In VSCode I installed the C++ extension provided by Microsoft, as well as Code Runner. 
2. There are several possible IDEs to use to run C++ applications. These include Eclipse, Dev-C++, Visual Studio, Oracle Developer Studio, and many more. In the end I went with VSCode because it was the platform I was most familiar with. 
3. In order to run the programs, I had to install the MinGW compiler. I followed steps on several youtube videos, which can be found [here](https://www.youtube.com/watch?v=9VE7p-he4fA) and [here](https://www.youtube.com/watch?v=77v-Poud_io). 
4. To write comments in C++ you either: (1) Put two slashes (//) followed by your comment; (2) If you want a block of comments, then write /* followed by your comments, and ending in */

## Hello World Program
This is an illustration of coding in C++ using the classic 'Hello World' example. 

```
#include <iostream>

int main() {
    std::cout << "Hello World!";
    return 0;
}
```

The #include allows us to use the contents of the iostream file. We need this file in order to use cout to print the contents of the main function. 

All C++ programs include a main() function and the curly brackets indicate a code block - the beginning and end of the function. 

std::cout prints the contents inside the quotation marks. It must be followed by << followed by the format string. We use the semicolon to indicate the end of the line. 

Finally, return 0 indicates the end of the program. 

## Sources

[1]IET, “C++: The Evolution of a Programming Language,” www.youtube.com, Mar. 01, 2019. https://www.youtube.com/watch?v=bKCHzFuPwl0 (accessed Mar. 09, 2023).

[2]Big Think, “Bjarne Stroustrup: Why I Created C++ | Big Think,” www.youtube.com, Jun. 10, 2011. https://www.youtube.com/watch?v=JBjjnqG0BP8&t=181s (accessed Sep. 18, 2023).

[3]O'Reilly Media, Inc., “1.3 - Brief History of C++ - Object Oriented Programming with C++, Second Edition [Book],” www.oreilly.com. https://www.oreilly.com/library/view/object-oriented-programming/9789332503663/xhtml/head-0045.xhtml#:~:text=C%2B%2B%20was%20developed%20by%20Bjarne

[4]J. Zitomer, “Why Local Fintech Engineers Use C++,” www.builtinchicago.org, Sep. 10, 2020. https://www.builtinchicago.org/2020/09/10/best-practices-programming-cpp (accessed Sep. 18, 2023).

[5]D. Ramel, “When Milliseconds Make Millions: Why Wall Street Programmers Earn the Big Bucks -,” ADTmag, Jul. 29, 2011. https://adtmag.com/articles/2011/07/29/why-hft-programmers-earn-top-salaries.aspx (accessed Sep. 18, 2023).

[6]“C++ ‘Hello, World!’ Program,” www.programiz.com. https://www.programiz.com/cpp-programming/examples/print-sentence
