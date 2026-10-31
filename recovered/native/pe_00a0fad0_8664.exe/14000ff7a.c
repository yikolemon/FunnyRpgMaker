/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000ff7a */

longlong FUN_14000ff7a(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar1 = *param_1;
  lVar3 = *(longlong *)(lVar1 + 8);
  lVar2 = lVar1;
  if (*(char *)(lVar3 + 0x19) == '\0') {
    do {
      bVar4 = *(uint *)(lVar3 + 0x20) < *param_2;
      if (!bVar4) {
        lVar2 = lVar3;
      }
      lVar3 = *(longlong *)(lVar3 + (ulonglong)bVar4 * 0x10);
    } while (*(char *)(lVar3 + 0x19) == '\0');
  }
  if ((*(char *)(lVar2 + 0x19) != '\0') || (*param_2 < *(uint *)(lVar2 + 0x20))) {
    lVar2 = lVar1;
  }
  return lVar2;
}

