/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d087e */

bool FUN_1800d087e(longlong *param_1,ushort *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = *param_1;
  lVar1 = *(longlong *)(lVar2 + 8);
  if (*(char *)(lVar1 + 0x19) == '\0') {
    do {
      bVar3 = *(ushort *)(lVar1 + 0x20) < *param_2;
      if (*(ushort *)(lVar1 + 0x20) == *param_2) {
        bVar3 = *(byte *)(lVar1 + 0x22) < (byte)param_2[1];
      }
      if (bVar3 == false) {
        lVar2 = lVar1;
      }
      lVar1 = *(longlong *)(lVar1 + (ulonglong)bVar3 * 0x10);
    } while (*(char *)(lVar1 + 0x19) == '\0');
  }
  if (*(char *)(lVar2 + 0x19) != '\0') {
    return false;
  }
  bVar3 = *(ushort *)(lVar2 + 0x20) <= *param_2;
  if (*param_2 == *(ushort *)(lVar2 + 0x20)) {
    bVar3 = *(byte *)(lVar2 + 0x22) <= (byte)param_2[1];
  }
  return bVar3;
}

