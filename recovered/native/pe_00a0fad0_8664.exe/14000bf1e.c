/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000bf1e */

int FUN_14000bf1e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = **(ulonglong **)(param_1 + 0x38);
  iVar2 = -1;
  if ((uVar1 != 0) && (**(ulonglong **)(param_1 + 0x18) < uVar1)) {
    if (param_2 == -1) {
      **(int **)(param_1 + 0x50) = **(int **)(param_1 + 0x50) + 1;
      **(longlong **)(param_1 + 0x38) = **(longlong **)(param_1 + 0x38) + -1;
      iVar2 = 0;
    }
    else if ((*(char *)(uVar1 - 1) == (char)param_2) || ((*(byte *)(param_1 + 0x70) & 2) == 0)) {
      **(int **)(param_1 + 0x50) = **(int **)(param_1 + 0x50) + 1;
      **(longlong **)(param_1 + 0x38) = **(longlong **)(param_1 + 0x38) + -1;
      *(char *)**(undefined8 **)(param_1 + 0x38) = (char)param_2;
      return param_2;
    }
  }
  return iVar2;
}

