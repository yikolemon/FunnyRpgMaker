/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007540c */

undefined4 FUN_14007540c(int param_1,int param_2)

{
  ulonglong uVar1;
  
  uVar1 = 0xfffffffffffffff4;
  while ((*(int *)((longlong)&DAT_140109cbc + uVar1) != param_1 ||
         ((*(int *)((longlong)&DAT_140109cc0 + uVar1) != param_2 &&
          (*(int *)((longlong)&DAT_140109cc0 + uVar1) != -1))))) {
    uVar1 = uVar1 + 0xc;
    if (0x77 < uVar1) {
      return 0;
    }
  }
  return *(undefined4 *)((longlong)&DAT_140109cc4 + uVar1);
}

