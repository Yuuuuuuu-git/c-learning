# 基础练习

这里放我学 C 语言基础语法时写的小程序。

## 文件说明

| 文件 | 内容 | 涉及的知识点 |
|---|---|---|
| `change.c` | 找零计算器：输入金额，输出找零 | `scanf` 输入、算术运算、变量 |
| `hello.c` | 第一个程序：打印文字 | `printf`、`main` 函数结构 |

## 怎么编译运行

装了 VS Code 的话，打开某个 `.c` 文件后：
- 按 `Ctrl+Shift+B` 只编译
- 按 `Ctrl+Shift+F5`（或 `Ctrl+Shift+P` → 运行任务 → 编译并运行）编译并运行

命令行方式：
```bash
gcc -Wall -finput-charset=UTF-8 -fexec-charset=UTF-8 change.c -o change.exe
./change.exe
```

## ⚠️ 编码注意事项（踩过的坑）

用 **Dev-C++** 写的文件默认存成 **GBK 编码**，而本项目的编译参数要求 **UTF-8**。
如果把 Dev-C++ 写的文件直接拿过来编译，**中文字符串会显示成乱码**。

解决办法（两种任选其一）：

1. **把编码转成 UTF-8**：VS Code 打开文件 → 右下角点编码（如 `GB2312`）→ 选 "通过编码保存" → 选 `UTF-8`
2. **改编译参数**：把 `-finput-charset=UTF-8` 改成 `-finput-charset=GBK`

推荐第 1 种——**统一用 UTF-8** 是行业惯例，省得以后各种工具之间来回转换。
