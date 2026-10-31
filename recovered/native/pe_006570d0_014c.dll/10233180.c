/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10233180 */

void __fastcall FUN_10233180(int param_1)

{
  *(undefined4 **)(param_1 + 0x10) = (undefined4 *)(param_1 + 8);
  *(int *)(param_1 + 0xc) = param_1 + 4;
  *(undefined4 **)(param_1 + 0x1c) = (undefined4 *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x20) = (undefined4 *)(param_1 + 0x18);
  *(undefined4 **)(param_1 + 0x2c) = (undefined4 *)(param_1 + 0x24);
  *(undefined4 **)(param_1 + 0x30) = (undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}

