/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a9915 */

void Unwind_1400a9915(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0x20;
  do {
    if (*(longlong *)(param_2 + 0x58 + lVar1) != 0) {
      FUN_140077b90();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  return;
}

