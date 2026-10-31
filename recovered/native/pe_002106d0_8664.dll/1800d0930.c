/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d0930 */

longlong FUN_1800d0930(longlong *param_1,ushort *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  
  lVar1 = *param_1;
  lVar4 = *(longlong *)(lVar1 + 8);
  lVar2 = lVar1;
  if (*(char *)(lVar4 + 0x19) == '\0') {
    do {
      bVar3 = *(ushort *)(lVar4 + 0x20) < *param_2;
      if (*(ushort *)(lVar4 + 0x20) == *param_2) {
        bVar3 = *(byte *)(lVar4 + 0x22) < (byte)param_2[1];
      }
      if (bVar3 == false) {
        lVar2 = lVar4;
      }
      lVar4 = *(longlong *)(lVar4 + (ulonglong)bVar3 * 0x10);
    } while (*(char *)(lVar4 + 0x19) == '\0');
  }
  if (*(char *)(lVar2 + 0x19) == '\0') {
    bVar3 = *(ushort *)(lVar2 + 0x20) <= *param_2;
    if (*param_2 == *(ushort *)(lVar2 + 0x20)) {
      bVar3 = *(byte *)(lVar2 + 0x22) <= (byte)param_2[1];
    }
    if (bVar3) {
      return lVar2;
    }
  }
  return lVar1;
}

