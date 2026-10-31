/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006a1fd */

int __fastcall FUN_1006a1fd(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 3;
    iVar1 = 0;
    if ((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 3) * -0x33333333 +
        iVar2 * -0x3cf3cf3d == 0) {
      iVar1 = iVar2 * 0x3cf3cf3d;
    }
    return iVar1;
  }
  return 0;
}

