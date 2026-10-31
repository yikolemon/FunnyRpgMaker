/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14021e0a0 */

longlong FUN_14021e0a0(longlong *param_1)

{
  longlong lVar1;
  undefined1 local_1c [4];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  if (lVar1 == 0) {
    FUN_14044e710(local_1c,0);
    if (*param_1 == 0) {
      lVar1 = (longlong)DAT_140629370;
      DAT_140629370 = (int)(lVar1 + 1);
      *param_1 = lVar1 + 1;
    }
    FUN_14044e760(local_1c);
    lVar1 = *param_1;
  }
  return lVar1;
}

