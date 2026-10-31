/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d3a06 */

undefined8 thunk_FUN_1400d30d4(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1400799b5();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = FUN_140081200();
    uVar2 = *(undefined8 *)(lVar1 + 0xa8);
  }
  return uVar2;
}

