/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003c654 */

void Unwind_14003c654(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0x40;
  do {
    FUN_140001e90(lVar1 + param_2 + 0x128);
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != -0x20);
  return;
}

