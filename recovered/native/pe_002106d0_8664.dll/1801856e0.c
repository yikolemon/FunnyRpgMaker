/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801856e0 */

longlong FUN_1801856e0(longlong *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  lVar3 = *(longlong *)(lVar1 + 8);
  lVar2 = lVar1;
  if (*(char *)(lVar3 + 0x19) == '\0') {
    do {
      if (*param_2 <= *(int *)(lVar3 + 0x20)) {
        lVar2 = lVar3;
      }
      lVar3 = *(longlong *)(lVar3 + (ulonglong)(*(int *)(lVar3 + 0x20) < *param_2) * 0x10);
    } while (*(char *)(lVar3 + 0x19) == '\0');
  }
  if ((*(char *)(lVar2 + 0x19) != '\0') || (*param_2 < *(int *)(lVar2 + 0x20))) {
    lVar2 = lVar1;
  }
  return lVar2;
}

