Sure, here's a revised version of the text with some improvements for clarity and consistency:

# Design Pattern - Builder Pattern

## Description

![builder](https://github.com/jiji-thecat/dp-builder/assets/104809324/0865f3b7-3b1d-4a67-bf11-9980ff4079fb)

The term "Builder" refers to a person who constructs buildings. Therefore, this pattern can be easily understood by imagining the process of building a structure.

For example, when constructing a house, the building process is somewhat standardized.

However, you might want to create a variety of structures, such as a wooden house, a concrete house, or even a candy house.

This pattern is very useful when you want to generate various products from a certain construction process.

### Class Diagram

![class diagram](https://github.com/jiji-thecat/dp-builder/assets/104809324/0007b964-45f4-4543-886b-271d6928307e)
[wiki](https://ja.wikipedia.org/wiki/Builder_%E3%83%91%E3%82%BF%E3%83%BC%E3%83%B3)

The `Director` class contains the procedure for building a house. The `ConcreteBuilder` class, which inherits from the `Builder` class, can create different types of houses such as a wooden house, a concrete house, or a candy house. Therefore, the `Director` class can adapt to various kinds of `Builder` classes.

## How to Install and Run

Import this project as a Qt project.

## How to Use This App

![builder](https://github.com/jiji-thecat/dp-builder/assets/104809324/0865f3b7-3b1d-4a67-bf11-9980ff4079fb)

This app will generate a Cat and an Alien from the living organism class. The `Director` class has the process of creating a living organism, and the `ConcreteBuilder` class has the materials for creating a Cat and an Alien.

## License

**MIT License**

Copyright © 2024 jiji

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

**THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.**
