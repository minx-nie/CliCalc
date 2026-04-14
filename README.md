# 🧮 CLICalc v2.1

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
- [Tiếng Việt](#vietnamese)
  - [Tổng quan](#tổng-quan)
  - [Tính năng chính](#tính-năng-chính)
  - [Cài đặt](#cài-đặt)
  - [Cách dùng](#cách-dùng)

---

<a id="english"></a>

## 🇬🇧 English

### Overview
**CLICalc** is a fast, minimalist CLI calculator. Designed for simplicity and speed, it allows you to type out continuous math expressions naturally without the distraction of a graphical interface.

### Core features
* 🧠 **Smart Precedence:** Automatically applies correct mathematical rules (BODMAS/PEMDAS) so multiplication and division are handled before addition and subtraction.
* 🔀 **Seamless Input:** Type naturally. Whether you need a quick 2-number calculation (`5 + 3`) or a 3-number expression (`5 + 3 * 2`), the calculator adapts instantly.
* 🛡️ **Bulletproof Reliability:** Built-in safeguards prevent the application from crashing during invalid mathematical operations like dividing by zero.
* ⚡ **High Precision:** Delivers accurate decimal results for all your floating-point calculations.

### Installation
```bash
# Clone the repository
git clone [https://github.com/minx-nie/clicalc.git](https://github.com/minx-nie/clicalc.git)
cd clicalc

# Compile the code
gcc main.c -o clicalc
````

### Usage

Run the compiled executable directly in your terminal:

```bash
./clicalc
```

**Example:** `Nhap bieu thuc: 2 + 3 * 4` -\> `Result: 14.00`

-----

\<a id="vietnamese"\>\</a\>

## 🇻🇳 Tiếng Việt

### Tổng quan

**CLICalc v2.1** là một máy tính giao diện dòng lệnh siêu nhẹ. Được thiết kế tối giản và tập trung vào tốc độ, công cụ này cho phép bạn gõ trực tiếp các phép toán một cách tự nhiên nhất mà không cần đến giao diện đồ họa.

### Tính năng chính

  * 🧠 **Tính toán thông minh:** Tự động hiểu và áp dụng đúng quy tắc ưu tiên toán học (nhân chia trước, cộng trừ sau).
  * 🔀 **Nhập liệu tự nhiên:** Thoải mái gõ phép tính liền mạch. Dù bạn nhập 2 số (`5 + 3`) hay 3 số (`5 + 3 * 2`), ứng dụng đều tự động nhận diện và xử lý mượt mà.
  * 🛡️ **Chống treo máy:** Tích hợp cơ chế bảo vệ an toàn, ngăn chặn việc văng ứng dụng khi người dùng vô tình thực hiện các phép toán vô lý (như chia cho 0).
  * ⚡ **Độ chính xác cao:** Trả về kết quả thập phân chuẩn xác cho mọi phép tính của bạn.

### Cài đặt

```bash
# Tải mã nguồn về máy
git clone [https://github.com/minx-nie/clicalc.git](https://github.com/minx-nie/clicalc.git)
cd clicalc

# Biên dịch bằng GCC
gcc main.c -o clicalc
```

### Cách dùng

Khởi chạy file thực thi vừa được biên dịch trên terminal của bạn:

```bash
./clicalc
```

**Ví dụ:** `Nhap bieu thuc: 2 + 3 * 4` -\> `Result: 14.00`

-----

*MIT License — Maintained by **minx-nie***

