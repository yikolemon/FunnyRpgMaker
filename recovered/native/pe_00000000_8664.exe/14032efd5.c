/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14032efd5 */

int * FUN_14032efd5(int param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *(longlong *)(DAT_14062a630 + 0x29a0);
  if (lVar1 != 0) {
    piVar2 = (int *)(lVar1 + 4);
    do {
      if ((*piVar2 == param_1) && (*(char *)((longlong)piVar2 + 0x21) != '\x01')) {
        return piVar2;
      }
      piVar2 = (int *)((longlong)piVar2 + (longlong)piVar2[-1]);
    } while (piVar2 != (int *)(*(int *)(DAT_14062a630 + 0x2998) + lVar1 + 4));
  }
  return (int *)0x0;
}

