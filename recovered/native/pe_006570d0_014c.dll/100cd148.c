/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cd148 */

bool __thiscall FUN_100cd148(int *param_1,ushort *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  iVar3 = *(int *)(iVar2 + 4);
  if (*(char *)(iVar3 + 0xd) == '\0') {
    do {
      bVar1 = *(ushort *)(iVar3 + 0x10) < *param_2;
      if (*(ushort *)(iVar3 + 0x10) == *param_2) {
        bVar1 = *(byte *)(iVar3 + 0x12) < (byte)param_2[1];
      }
      if (bVar1 == false) {
        iVar2 = iVar3;
      }
      iVar3 = *(int *)(iVar3 + (uint)bVar1 * 8);
    } while (*(char *)(iVar3 + 0xd) == '\0');
  }
  if (*(char *)(iVar2 + 0xd) == '\0') {
    bVar1 = *(ushort *)(iVar2 + 0x10) <= *param_2;
    if (*param_2 == *(ushort *)(iVar2 + 0x10)) {
      bVar1 = *(byte *)(iVar2 + 0x12) <= (byte)param_2[1];
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

