# 🧮 CLICalc 

<div align="center">
  <img src="https://img.shields.io/badge/C-99+-blue?logo=c" alt="C 99+">
  <img src="https://img.shields.io/badge/License-MIT-green" alt="License MIT">
  <img src="https://img.shields.io/badge/Type-CLI%20Tool-orange" alt="CLI Tool">
  <a href="https://github.com/minx-nie"><img src="https://img.shields.io/badge/Maintainer-Thanh%20Nguyen-blueviolet?logo=github" alt="Maintainer: minx-nie"></a>
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
  - [Roadmap (v2.0)](#roadmap-v20)
- [Tiếng Việt](#vietnamese)
  - [Tổng quan](#tổng-quan)
  - [Tính năng chính](#tính-năng-chính)
  - [Cài đặt](#cài-đặt)
  - [Cách dùng](#cách-dùng)
  - [Kế hoạch phát triển (v2.0)](#kế-hoạch-phát-triển-v20)

---

<a id="english"></a>

## 🇬🇧 English

### Overview

**CLICalc** is a minimalist, zero-dependency Command Line Interface (CLI) Calculator written entirely in C. Designed for developers and terminal enthusiasts, it provides a continuous, fast, and interactive menu loop for basic arithmetic without the bloat of a graphical user interface.

### Core features

* ⚡ **Lightning Fast:** Compiled directly to machine code, taking up virtually zero system resources.
* 🔄 **Continuous REPL:** Uses a `do-while` loop to let you perform multiple calculations in one session.
* 🛡️ **Failsafe:** Built-in error handling to strictly prohibit mathematical errors like division by zero.
* 📦 **Standalone:** Only relies on standard C libraries (`stdio.h`). No external dependencies required.

### Installation

```bash
# Clone the repository
git clone [https://github.com/minx-nie/clicalc.git](https://github.com/minx-nie/clicalc.git)
cd clicalc

# Compile using GCC
gcc main.c -o clicalc
````

### Usage

Run the compiled executable directly in your terminal.

| OS | Command | Description |
| --- | --- | --- |
| **Linux / macOS** | `./clicalc` | Executes the binary in Unix-like environments |
| **Windows** | `clicalc.exe` | Executes the program in Command Prompt or PowerShell |

**Example Interaction:**

```text
===== Calculator =====
1. Addition (+)
2. Subtraction (-)
3. Multiplication (*)
4. Division (/)
5. Exit
Enter your choice: 3
Enter two numbers: 5.5 2
Result: 11.00
```

### Roadmap (v2.0)

  - [ ] Implement string parsing for complex expressions (e.g., `5 + 3 * (2 - 8)`).
  - [ ] Add support for mathematical constants (Pi, e).
  - [ ] Add exponentiation and square root functions.

-----

\<a id="vietnamese"\>\</a\>

## 🇻🇳 Tiếng Việt

### Tổng quan

**CLICalc** là một ứng dụng Máy tính giao diện dòng lệnh (CLI) tối giản, không phụ thuộc thư viện ngoài và được viết hoàn toàn bằng C. Được thiết kế dành cho lập trình viên và những người hệ "nghiện" terminal, công cụ này cung cấp một vòng lặp tương tác tốc độ cao để thực hiện các phép toán cơ bản mà không cần đến giao diện đồ hoạ cồng kềnh.

### Tính năng chính

  * ⚡ **Siêu nhẹ và nhanh:** Biên dịch trực tiếp ra mã máy, hầu như không tiêu tốn tài nguyên hệ thống.
  * 🔄 **Vòng lặp tương tác:** Sử dụng cấu trúc `do-while` cho phép tính toán liên tục nhiều lần trong một phiên làm việc.
  * 🛡️ **Bảo vệ lỗi:** Tích hợp sẵn cơ chế chặn các lỗi toán học cơ bản (ví dụ: chia cho số 0).
  * 📦 **Độc lập:** Chỉ sử dụng thư viện C tiêu chuẩn (`stdio.h`). Tuyệt đối không cần cài cắm thêm bất kỳ dependencies nào.

### Cài đặt

```bash
# Tải mã nguồn về máy
git clone [https://github.com/minx-nie/clicalc.git](https://github.com/minx-nie/clicalc.git)
cd clicalc

# Biên dịch bằng GCC
gcc main.c -o clicalc
```

### Cách dùng

Khởi chạy file thực thi vừa được biên dịch trực tiếp trên terminal của bạn.

| Hệ điều hành | Lệnh | Chú thích |
| --- | --- | --- |
| **Linux / macOS** | `./clicalc` | Chạy file thực thi trên môi trường Unix/Linux |
| **Windows** | `clicalc.exe` | Chạy chương trình trên CMD hoặc PowerShell |

**Ví dụ nhập xuất:**

```text
===== Calculator =====
1. Addition (+)
2. Subtraction (-)
3. Multiplication (*)
4. Division (/)
5. Exit
Enter your choice: 3
Enter two numbers: 5.5 2
Result: 11.00
```

### Kế hoạch phát triển (v2.0)

  - [ ] Xây dựng thuật toán phân tích chuỗi để tính biểu thức dài (VD: `5 + 3 * (2 - 8)`).
  - [ ] Bổ sung hằng số toán học cơ bản (Pi, e).
  - [ ] Thêm tính năng tính số mũ và căn bậc hai.

-----

*Giấy phép MIT — Tác giả: **minx-nie***

```
