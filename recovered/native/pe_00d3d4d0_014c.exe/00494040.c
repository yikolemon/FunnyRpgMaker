/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00494040 */

int __cdecl FUN_00494040(ushort *param_1,ushort *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = (uint)*param_2;
  iVar2 = *param_1 - uVar1;
  if (iVar2 == 0) {
    iVar3 = (int)param_1 - (int)param_2;
    do {
      if ((short)uVar1 == 0) break;
      uVar1 = (uint)param_2[1];
      param_2 = param_2 + 1;
      iVar2 = *(ushort *)(iVar3 + (int)param_2) - uVar1;
    } while (iVar2 == 0);
  }
  return (iVar2 >> 0x1f) - (-iVar2 >> 0x1f);
}

