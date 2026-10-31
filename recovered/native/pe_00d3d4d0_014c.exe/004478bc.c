/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004478bc */

void __fastcall FUN_004478bc(int param_1,int param_2)

{
  FUN_0041c607(param_1,*(int *)(param_2 + 0x24));
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  FUN_0041c607(param_1,*(int *)(param_2 + 0x1c));
  *(undefined4 *)(param_2 + 0x1c) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  FUN_0041c607(param_1,param_2);
  return;
}

