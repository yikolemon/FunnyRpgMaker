/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801848f2 */

undefined8 FUN_1801848f2(longlong *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + 8);
  if (*(char *)(lVar2 + 0x19) == '\0') {
    do {
      if (*param_2 <= *(int *)(lVar2 + 0x20)) {
        lVar1 = lVar2;
      }
      lVar2 = *(longlong *)(lVar2 + (ulonglong)(*(int *)(lVar2 + 0x20) < *param_2) * 0x10);
    } while (*(char *)(lVar2 + 0x19) == '\0');
  }
  if (*(char *)(lVar1 + 0x19) != '\0') {
    return 0;
  }
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(int *)(lVar1 + 0x20) <= *param_2);
}

