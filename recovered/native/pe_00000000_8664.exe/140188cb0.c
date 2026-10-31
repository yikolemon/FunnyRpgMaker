/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140188cb0 */

undefined1 FUN_140188cb0(int param_1)

{
  char cVar1;
  
  if (param_1 == 0) {
    DAT_140f2a9b8 = 1;
  }
  FUN_14018e0d0();
  cVar1 = FUN_140190640();
  if (cVar1 != '\0') {
    cVar1 = FUN_1401930ac();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_140190670(0);
  }
  return 0;
}

