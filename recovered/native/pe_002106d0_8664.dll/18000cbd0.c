/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18000cbd0 */

longlong FUN_18000cbd0(longlong *param_1)

{
  longlong lVar1;
  undefined1 local_1c [4];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  if (lVar1 == 0) {
    FUN_18023d240(local_1c,0);
    if (*param_1 == 0) {
      lVar1 = (longlong)DAT_180417ea0;
      DAT_180417ea0 = (int)(lVar1 + 1);
      *param_1 = lVar1 + 1;
    }
    FUN_18023d290(local_1c);
    lVar1 = *param_1;
  }
  return lVar1;
}

