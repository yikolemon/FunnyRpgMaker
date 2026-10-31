/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401056ea */

void Unwind_1401056ea(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0x20;
  do {
    if (*(longlong *)(*(longlong *)(param_2 + 0x28) + -8 + lVar1) != 0) {
      FUN_140077b90();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  return;
}

