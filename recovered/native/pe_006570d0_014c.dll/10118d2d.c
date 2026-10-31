/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10118d2d */

void FUN_10118d2d(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0xf8) == '\x01') &&
     (iVar1 = *(int *)(param_1 + 0x3c), *(int *)(iVar1 + 0x58) == param_1)) {
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
  }
  *(undefined4 **)(param_1 + 0x3c) = param_2;
  *(undefined4 *)(param_1 + 0x40) = *param_2;
  *(bool *)(param_1 + 0xf8) = param_2[0x16] == param_1;
  return;
}

