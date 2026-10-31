/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007ac02 */

longlong FUN_18007ac02(longlong *param_1,int *param_2)

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
  if ((*(char *)(lVar1 + 0x19) == '\0') && (*(int *)(lVar1 + 0x20) <= *param_2)) {
    return lVar1 + 0x28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802397c0("invalid map<K, T> key");
}

