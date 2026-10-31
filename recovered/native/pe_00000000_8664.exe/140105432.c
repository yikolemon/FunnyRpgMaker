/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140105432 */

void Unwind_140105432(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_2 + 0x47) == '\0') {
    lVar1 = *(longlong *)(param_2 + 0x30);
    do {
      if (*(longlong *)(lVar1 + -8) != 0) {
        FUN_140077b90();
      }
      lVar1 = lVar1 + -0x10;
    } while (lVar1 != *(longlong *)(param_2 + 0x38));
  }
  return;
}

