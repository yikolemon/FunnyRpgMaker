/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a9800 */

void Unwind_1400a9800(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_2 + 199) == '\0') {
    lVar1 = *(longlong *)(param_2 + 0xa0);
    do {
      if (*(longlong *)(lVar1 + -8) != 0) {
        FUN_140077b90();
      }
      lVar1 = lVar1 + -0x10;
    } while (lVar1 != param_2 + 0x60);
  }
  return;
}

