****XV6 Null Pointer Dereference in Two-Level Page Tables****
*Project Overview*
This project explores how XV6 (a teaching OS for RISC-V) handles null pointer dereferences in its two-level page table system. We analyze key kernel mechanisms, including:

Address space initialization via exec()

Page table copying during fork()

Kernel page fault handling for null pointer dereferences


Build & Run
# Clone XV6
git clone https://github.com/mit-pdos/xv6-riscv.git

# Apply modifications:
# 1. Overwrite kernel/trap.c and kernel/start.c
# 2. Add user/null_deref.c
# 3. Modify Makefile to include null_deref in UPROGS

# Build and run
command make clean
command make qemu

# In XV6 shell:
command null_deref
# Expected Output:
Dereferencing null pointer...
pid 3: page fault at 0x00000000
Null pointer detected!
Academic Context
# **This project was developed under the guidance of Prof. Krutika Verma (Assistant Professor, KIIT DU) as part of Operating Systems coursework.**

Repository
Explore the full source code:
github.com/digontobiswas/XV6-Null-Pointer-Dereference-in-Two-Level-Page-Tables

Documented by: Digonto Biswas (Roll 23053429, CSE38, KIIT DU)
