/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140013ad4 */

longlong FUN_140013ad4(longlong *param_1)

{
  longlong lVar1;
  undefined1 local_1c [4];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  if (lVar1 == 0) {
    FUN_140188dc0(local_1c,0);
    if (*param_1 == 0) {
      lVar1 = (longlong)DAT_140f2abb0;
      DAT_140f2abb0 = (int)(lVar1 + 1);
      *param_1 = lVar1 + 1;
    }
    FUN_140188e10(local_1c);
    lVar1 = *param_1;
  }
  return lVar1;
}

