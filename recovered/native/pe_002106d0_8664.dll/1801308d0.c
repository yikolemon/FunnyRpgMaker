/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801308d0 */

void Unwind_1801308d0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_2 + 199) == '\0') {
    lVar1 = *(longlong *)(param_2 + 0xa0);
    do {
      if (*(longlong *)(lVar1 + -8) != 0) {
        FUN_1800fe8d4();
      }
      lVar1 = lVar1 + -0x10;
    } while (lVar1 != param_2 + 0x60);
  }
  return;
}

