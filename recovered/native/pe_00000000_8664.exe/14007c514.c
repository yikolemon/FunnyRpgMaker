/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007c514 */

undefined8 FUN_14007c514(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1400799b5();
  uVar2 = FUN_140077ab4(0x2d28);
  FUN_14007c564(uVar2,param_1);
  FUN_14007c50c(uVar2);
  FUN_14007dbdb();
  if (lVar1 != 0) {
    FUN_14007c50c(lVar1);
  }
  return uVar2;
}

