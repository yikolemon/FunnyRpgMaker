/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180227dcc */

undefined4 FUN_180227dcc(int param_1,int param_2)

{
  ulonglong uVar1;
  
  uVar1 = 0xfffffffffffffff4;
  while ((*(int *)((longlong)&DAT_18034cb8c + uVar1) != param_1 ||
         ((*(int *)((longlong)&DAT_18034cb90 + uVar1) != param_2 &&
          (*(int *)((longlong)&DAT_18034cb90 + uVar1) != -1))))) {
    uVar1 = uVar1 + 0xc;
    if (0x77 < uVar1) {
      return 0;
    }
  }
  return *(undefined4 *)((longlong)&DAT_18034cb94 + uVar1);
}

