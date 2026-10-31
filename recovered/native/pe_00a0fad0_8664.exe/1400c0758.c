/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400c0758 */

longlong FUN_1400c0758(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + 8);
  if (*(char *)(lVar2 + 0x19) == '\0') {
    do {
      bVar3 = *(uint *)(lVar2 + 0x20) < *param_2;
      if (!bVar3) {
        lVar1 = lVar2;
      }
      lVar2 = *(longlong *)(lVar2 + (ulonglong)bVar3 * 0x10);
    } while (*(char *)(lVar2 + 0x19) == '\0');
  }
  if ((*(char *)(lVar1 + 0x19) == '\0') && (*(uint *)(lVar1 + 0x20) <= *param_2)) {
    return lVar1 + 0x28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d9d30("invalid map<K, T> key");
}

