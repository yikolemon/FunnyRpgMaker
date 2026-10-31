/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14032069b */

ulonglong FUN_14032069b(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(DAT_14062a630 + 0x15b0);
  plVar2 = plVar1;
  if (0 < (longlong)*(int *)(DAT_14062a630 + 0x15a8)) {
    do {
      if (*plVar2 == param_1) break;
      plVar2 = plVar2 + 1;
    } while (plVar2 < plVar1 + *(int *)(DAT_14062a630 + 0x15a8));
  }
  return (ulonglong)((longlong)plVar2 - (longlong)plVar1) >> 3;
}

