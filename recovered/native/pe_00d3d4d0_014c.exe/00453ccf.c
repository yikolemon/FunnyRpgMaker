/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00453ccf */

void __fastcall FUN_00453ccf(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x1c);
  FUN_0041c607(iVar1,*(int *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_0041c607(iVar1,*(int *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}

