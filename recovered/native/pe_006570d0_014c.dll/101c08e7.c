/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c08e7 */

void FUN_101c08e7(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  *(undefined4 *)(param_1 + 0x44) = param_3;
  *(undefined4 *)(param_1 + 0x48) = param_4;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return;
}

