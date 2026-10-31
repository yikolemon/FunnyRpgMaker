/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400c0716 */

bool FUN_1400c0716(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = *param_1;
  lVar1 = *(longlong *)(lVar2 + 8);
  if (*(char *)(lVar1 + 0x19) == '\0') {
    do {
      bVar3 = *(uint *)(lVar1 + 0x20) < *param_2;
      if (!bVar3) {
        lVar2 = lVar1;
      }
      lVar1 = *(longlong *)(lVar1 + (ulonglong)bVar3 * 0x10);
    } while (*(char *)(lVar1 + 0x19) == '\0');
  }
  if (*(char *)(lVar2 + 0x19) != '\0') {
    return false;
  }
  return *(uint *)(lVar2 + 0x20) <= *param_2;
}

