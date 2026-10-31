/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004840e0 */

int __cdecl FUN_004840e0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x3c) + param_1;
  iVar1 = *(ushort *)(iVar2 + 0x14) + 0x18 + iVar2;
  iVar2 = iVar1 + (uint)*(ushort *)(iVar2 + 6) * 0x28;
  while( true ) {
    if (iVar1 == iVar2) {
      return 0;
    }
    if ((*(uint *)(iVar1 + 0xc) <= param_2) &&
       (param_2 < *(int *)(iVar1 + 8) + *(uint *)(iVar1 + 0xc))) break;
    iVar1 = iVar1 + 0x28;
  }
  return iVar1;
}

