/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14030fdfe */

longlong FUN_14030fdfe(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1404b9620(param_1,10,param_2 - param_1);
  if (lVar1 == 0) {
    lVar1 = param_2;
  }
  return lVar1;
}

