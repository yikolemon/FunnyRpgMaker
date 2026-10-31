/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400050f0 */

longlong FUN_1400050f0(longlong *param_1)

{
  longlong lVar1;
  int local_1c [3];
  
  local_1c[1] = -2;
  local_1c[2] = -1;
  lVar1 = *param_1;
  if (lVar1 == 0) {
    FUN_140086460(local_1c,0);
    if (*param_1 == 0) {
      lVar1 = (longlong)DAT_14013cb10;
      DAT_14013cb10 = (int)(lVar1 + 1);
      *param_1 = lVar1 + 1;
    }
    FUN_1400864b0(local_1c);
    lVar1 = *param_1;
  }
  return lVar1;
}

