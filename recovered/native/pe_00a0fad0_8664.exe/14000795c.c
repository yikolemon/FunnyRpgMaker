/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000795c */

longlong FUN_14000795c(longlong *param_1)

{
  longlong lVar1;
  undefined1 local_1c [4];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  if (lVar1 == 0) {
    FUN_1400d39b0(local_1c,0);
    if (*param_1 == 0) {
      lVar1 = (longlong)DAT_1401cc480;
      DAT_1401cc480 = (int)(lVar1 + 1);
      *param_1 = lVar1 + 1;
    }
    FUN_1400d3a00(local_1c);
    lVar1 = *param_1;
  }
  return lVar1;
}

