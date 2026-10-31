/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10221b78 */

undefined4 __thiscall FUN_10221b78(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 3) {
    FUN_102223eb(param_2,param_3);
  }
  else if (iVar1 == 2) {
    FUN_10221e7e(param_2,param_3);
  }
  else {
    if (iVar1 != 1) {
      return 6;
    }
    FUN_10221bf4(param_2,param_3);
  }
  return 0;
}

