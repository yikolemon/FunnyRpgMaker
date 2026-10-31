/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101029f7 */

undefined4 FUN_101029f7(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (*(int *)(param_1 + 0x3a8) != param_2) {
    do {
      if (param_1 == param_2) {
        return 1;
      }
      param_1 = *(int *)(param_1 + 0x3a4);
    } while (param_1 != 0);
    uVar1 = 0;
  }
  return uVar1;
}

