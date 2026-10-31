/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001ccd6 */

longlong FUN_14001ccd6(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = FUN_140021ff6(param_1,param_2);
  lVar2 = *plVar1 + 8;
  if (*plVar1 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}

