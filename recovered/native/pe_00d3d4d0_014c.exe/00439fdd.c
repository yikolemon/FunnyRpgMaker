/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00439fdd */

void __fastcall FUN_00439fdd(int param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = (longlong)*param_2 * (longlong)*(int *)(param_1 + 0xe0);
  iVar2 = (int)(lVar1 >> 0x3f);
  lVar1 = lVar1 + CONCAT44(iVar2,iVar2) + 0x8000;
  *(uint *)(param_1 + 0x124) = (int)((ulonglong)lVar1 >> 0x20) << 0x10 | (uint)lVar1 >> 0x10;
  return;
}

