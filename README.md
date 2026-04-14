# 🧮 CLICalc

<div align="center">
  <img src="https://img.shields.io/badge/C-99+-blue?logo=c" alt="C 99+">
  <img src="https://img.shields.io/badge/License-MIT-green" alt="License MIT">
  <img src="https://img.shields.io/badge/Type-CLI%20Tool-orange" alt="CLI Tool">
  <a href="https://github.com/minx-nie"><img src="https://img.shields.io/badge/Maintainer-minx--nie-blueviolet?logo=github" alt="Maintainer: minx-nie"></a>
</div>

---

<div align="center">
  <strong>🌐 Languages:</strong> 🇬🇧 <a href="#english">English</a> | 🇻🇳 <a href="#vietnamese">Tiếng Việt</a>
</div>

---

## 🧭 Table of Contents

- [English](#english)
  - [Overview](#overview)
  - [Core features](#core-features)
  - [Installation](#installation)
  - [Usage](#usage)
  - [Roadmap](#roadmap)
- [Tiếng Việt](#vietnamese)
  - [Tổng quan](#tổng-quan)
  - [Tính năng chính](#tính-năng-chính)
  - [Cài đặt](#cài-đặt)
  - [Cách dùng](#cách-dùng)

---

<a id="english"></a>

## 🇬🇧 English

### Overview
**CLICalc** is an advanced, minimalist CLI calculator. This version features a powerful expression engine that can parse and evaluate complex mathematical strings with nested parentheses and standard operator precedence.

### Core features
* 📦 **Complex Expressions:** Supports infinitely long math strings. No more simple 2-number limits.
* 괄호 **Parentheses Support:** Fully handles nested brackets like `(5 + 3) * (10 / 2)` with perfect accuracy.
* 🧠 **Smart Math Engine:** Automatically prioritizes multiplication and division over addition and subtraction (BODMAS/PEMDAS).
* 🔄 **Continuous Workflow:** Run the app once and perform as many calculations as you want in a single session.
* 🛡️ **Zero-Crash Guard:** Intelligent error handling for invalid syntax or division-by-zero attempts.

### Installation
```bash
# Clone the repository
git clone [https://github.com/minx-nie/clicalc.git](https://github.com/minx-nie/clicalc.git)
cd clicalc

# Compile the code
gcc main.c -o clicalc
````

### Usage

Run the executable and type your expression:

```bash
./clicalc
```

**Example:** `Enter an expression: (10 + 5) * 2 / 3` -\> `Result: 10.00`

-----


### 🚀 Roadmap

  - [x] v1.0: Basic 2-number arithmetic.
  - [x] v2.0: Dynamic input length detection (2-3 operands).
  - [x] v3.0: Full expression parsing & Parentheses support.
  - [ ] v4.0: Support for advanced math functions (`sqrt`, `pow`, `sin`, `cos`).
-----

\<a id="vietnamese"\>\</a\>

## 🇻🇳 Tiếng Việt

### Tổng quan

**CLICalc** là một máy tính giao diện dòng lệnh (CLI) mạnh mẽ và tối giản. Phiên bản này sở hữu bộ nòng xử lý biểu thức cho phép bạn tính toán các chuỗi toán học phức tạp, bao gồm cả các dấu ngoặc lồng nhau và quy tắc ưu tiên toán tử chuẩn quốc tế.

### Tính năng chính

  * 📦 **Biểu thức phức tạp:** Không còn giới hạn 2 hay 3 con số. Bạn có thể nhập một chuỗi dài bất tận để tính toán một lúc.
  * 괄호 **Hỗ trợ dấu ngoặc:** Xử lý chuẩn xác các biểu thức có dấu ngoặc đơn lồng nhau như `((5 + 3) * 2) / 4`.
  * 🧠 **Ưu tiên toán tử:** Tự động áp dụng quy tắc "nhân chia trước, cộng trừ sau" một cách thông minh.
  * 🔄 **Vòng lặp liên tục:** Tính toán không giới hạn trong một phiên làm việc mà không cần khởi động lại ứng dụng.
  * 🛡️ **Bảo vệ an toàn:** Chống treo terminal và ngăn chặn lỗi khi người dùng nhập sai cú pháp hoặc chia cho số 0.

### Cài đặt

```bash
# Tải mã nguồn về máy
git clone [https://github.com/minx-nie/clicalc.git](https://github.com/minx-nie/clicalc.git)
cd clicalc

# Biên dịch bằng GCC
gcc main.c -o clicalc
```

### Cách dùng

Khởi chạy file thực thi và nhập phép tính của bạn:

```bash
./clicalc
```

**Ví dụ:** `Nhap bieu thuc: (10 + 5) * 2 / 3` -\> `Result: 10.00`

-----

*MIT License — Maintained by **minx-nie***

