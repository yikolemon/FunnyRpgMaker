/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407eae6c */

void FUN_1407eae6c(longlong param_1,uint param_2)

{
  undefined2 uVar1;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar1 = FUN_140752f3c((int)param_1 + 0x2c);
    *(undefined2 *)(ulonglong)param_2 = uVar1;
  }
  return;
}

