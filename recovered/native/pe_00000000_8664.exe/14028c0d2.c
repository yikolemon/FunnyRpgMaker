/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14028c0d2 */

longlong FUN_14028c0d2(longlong *param_1,int *param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  lVar3 = *(longlong *)(lVar2 + 8);
  if (*(char *)(lVar3 + 0x19) == '\0') {
    do {
      if (*param_2 <= *(int *)(lVar3 + 0x20)) {
        lVar2 = lVar3;
      }
      lVar3 = *(longlong *)(lVar3 + (ulonglong)(*(int *)(lVar3 + 0x20) < *param_2) * 0x10);
    } while (*(char *)(lVar3 + 0x19) == '\0');
  }
  if ((*(char *)(lVar2 + 0x19) == '\0') && (*(int *)(lVar2 + 0x20) <= *param_2)) {
    return lVar2 + 0x28;
  }
  FUN_14044ac90(" Text Input");
  pcVar1 = (code *)swi(3);
  lVar2 = (*pcVar1)();
  return lVar2;
}

