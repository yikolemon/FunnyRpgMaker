/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140077bea */

longlong FUN_140077bea(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1401c4fe0(param_1,10,param_2 - param_1);
  if (lVar1 == 0) {
    lVar1 = param_2;
  }
  return lVar1;
}

