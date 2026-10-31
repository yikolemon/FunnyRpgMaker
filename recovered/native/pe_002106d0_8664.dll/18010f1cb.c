/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18010f1cb */

ulonglong FUN_18010f1cb(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(DAT_180419160 + 0x15b0);
  plVar2 = plVar1;
  if (0 < (longlong)*(int *)(DAT_180419160 + 0x15a8)) {
    do {
      if (*plVar2 == param_1) break;
      plVar2 = plVar2 + 1;
    } while (plVar2 < plVar1 + *(int *)(DAT_180419160 + 0x15a8));
  }
  return (ulonglong)((longlong)plVar2 - (longlong)plVar1) >> 3;
}

