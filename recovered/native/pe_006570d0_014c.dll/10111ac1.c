/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10111ac1 */

undefined1 FUN_10111ac1(int param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_10111b0e(param_4);
  if (iVar2 == param_2) {
    uVar1 = 1;
  }
  else if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    do {
      if (param_1 == param_2) {
        return 1;
      }
      if (param_1 == iVar2) {
        return 0;
      }
      param_1 = *(int *)(param_1 + 0x3a0);
      uVar1 = 0;
    } while (param_1 != 0);
  }
  return uVar1;
}

