/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011db05 */

int * FUN_18011db05(int param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *(longlong *)(DAT_180419160 + 0x29a0);
  if (lVar1 != 0) {
    piVar2 = (int *)(lVar1 + 4);
    do {
      if ((*piVar2 == param_1) && (*(char *)((longlong)piVar2 + 0x21) != '\x01')) {
        return piVar2;
      }
      piVar2 = (int *)((longlong)piVar2 + (longlong)piVar2[-1]);
    } while (piVar2 != (int *)(*(int *)(DAT_180419160 + 0x2998) + lVar1 + 4));
  }
  return (int *)0x0;
}

