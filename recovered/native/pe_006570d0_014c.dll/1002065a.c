/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002065a */

void FUN_1002065a(int param_1,int param_2)

{
  *(int *)(*(int *)(param_1 + 0x10) + 0xc) = param_2;
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = param_2;
  *(int *)(param_2 + 0xc) = param_1;
  return;
}

