/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041ca05 */

void __fastcall FUN_0041ca05(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x30) * 0x20;
  }
  *(int *)(param_1 + 0x58) = iVar1;
  return;
}

