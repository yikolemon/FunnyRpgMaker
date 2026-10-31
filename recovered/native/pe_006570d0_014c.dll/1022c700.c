/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022c700 */

int FUN_1022c700(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  param_1 = *(int *)(param_1 + 0x3c) + param_1;
  iVar2 = *(ushort *)(param_1 + 0x14) + 0x18 + param_1;
  iVar1 = iVar2 + (uint)*(ushort *)(param_1 + 6) * 0x28;
  while( true ) {
    if (iVar2 == iVar1) {
      return 0;
    }
    if ((*(uint *)(iVar2 + 0xc) <= param_2) &&
       (param_2 < *(int *)(iVar2 + 8) + *(uint *)(iVar2 + 0xc))) break;
    iVar2 = iVar2 + 0x28;
  }
  return iVar2;
}

