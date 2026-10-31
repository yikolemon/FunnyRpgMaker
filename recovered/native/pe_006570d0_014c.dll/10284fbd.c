/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10284fbd */

undefined4 FUN_10284fbd(undefined4 *param_1,int param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_2 + 0x1c) = 1;
  *(undefined4 *)(param_2 + 0x18) = 0x2a;
  return 0xffffffff;
}

