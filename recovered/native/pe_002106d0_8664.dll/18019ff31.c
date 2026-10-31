/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019ff31 */

undefined8 FUN_18019ff31(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1801006f9();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = FUN_180107ee8();
    uVar2 = *(undefined8 *)(lVar1 + 0xa0);
  }
  return uVar2;
}

