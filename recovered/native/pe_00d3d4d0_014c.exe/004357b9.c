/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004357b9 */

void __fastcall FUN_004357b9(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x10) - *(int *)(param_3 + 0x10);
  iVar1 = (int)((ulonglong)((longlong)iVar1 * 0x6db6db6d) >> 0x20) - iVar1;
  FUN_00436bfc(param_1,((iVar1 >> 2) - (iVar1 >> 0x1f)) + *(int *)(param_3 + 0x10) + -0x10);
  return;
}

