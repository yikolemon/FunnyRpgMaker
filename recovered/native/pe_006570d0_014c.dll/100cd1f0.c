/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cd1f0 */

int __thiscall FUN_100cd1f0(int *param_1,ushort *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  
  iVar1 = *param_1;
  iVar4 = *(int *)(iVar1 + 4);
  iVar2 = iVar1;
  if (*(char *)(iVar4 + 0xd) == '\0') {
    do {
      bVar3 = *(ushort *)(iVar4 + 0x10) < *param_2;
      if (*(ushort *)(iVar4 + 0x10) == *param_2) {
        bVar3 = *(byte *)(iVar4 + 0x12) < (byte)param_2[1];
      }
      if (bVar3 == false) {
        iVar2 = iVar4;
      }
      iVar4 = *(int *)(iVar4 + (uint)bVar3 * 8);
    } while (*(char *)(iVar4 + 0xd) == '\0');
  }
  if (*(char *)(iVar2 + 0xd) == '\0') {
    bVar3 = *(ushort *)(iVar2 + 0x10) <= *param_2;
    if (*param_2 == *(ushort *)(iVar2 + 0x10)) {
      bVar3 = *(byte *)(iVar2 + 0x12) <= (byte)param_2[1];
    }
    if (bVar3) {
      return iVar2;
    }
  }
  return iVar1;
}

