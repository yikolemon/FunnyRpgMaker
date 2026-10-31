/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400884e3 */

ulonglong FUN_1400884e3(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(DAT_140f2a910 + 0x15b0);
  plVar2 = plVar1;
  if (0 < (longlong)*(int *)(DAT_140f2a910 + 0x15a8)) {
    do {
      if (*plVar2 == param_1) break;
      plVar2 = plVar2 + 1;
    } while (plVar2 < plVar1 + *(int *)(DAT_140f2a910 + 0x15a8));
  }
  return (ulonglong)((longlong)plVar2 - (longlong)plVar1) >> 3;
}

