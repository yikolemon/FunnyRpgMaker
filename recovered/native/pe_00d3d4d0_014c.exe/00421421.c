/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00421421 */

uint __cdecl FUN_00421421(int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = (int)((longlong)param_2 * (longlong)param_1 >> 0x3f);
  lVar1 = (longlong)param_2 * (longlong)param_1 + CONCAT44(iVar2,iVar2) + 0x8000;
  return (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
}

