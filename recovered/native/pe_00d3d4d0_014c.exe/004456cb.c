/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004456cb */

void __fastcall FUN_004456cb(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x68);
  FUN_0041c607(*(int *)(iVar1 + 0x1c),*(int *)(param_1 + 0x318));
  *(undefined4 *)(param_1 + 0x318) = 0;
  FUN_00420cb6(iVar1,(int *)(param_1 + 0x308));
  return;
}

