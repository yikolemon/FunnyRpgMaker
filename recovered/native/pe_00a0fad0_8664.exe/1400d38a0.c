/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d38a0 */

undefined1 FUN_1400d38a0(int param_1)

{
  char cVar1;
  
  if (param_1 == 0) {
    DAT_1401cc280 = 1;
  }
  FUN_1400ddd00();
  cVar1 = FUN_140107e80();
  if (cVar1 != '\0') {
    cVar1 = FUN_14010b284();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_140107eb0(0);
  }
  return 0;
}

