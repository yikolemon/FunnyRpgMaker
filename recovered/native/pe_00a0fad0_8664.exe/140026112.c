/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140026112 */

undefined8 * FUN_140026112(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  ulonglong unaff_R14;
  undefined8 *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  lVar1 = param_2[2];
  if (0xf < lVar1 + 4U) {
    FUN_14000e9ea(param_1);
    param_1[2] = 0;
    lVar1 = param_2[2];
  }
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  puVar2 = (undefined8 *)(lVar1 + (longlong)param_2);
  for (; param_2 != puVar2; param_2 = (undefined8 *)((longlong)param_2 + 1)) {
    unaff_R14 = CONCAT71((int7)(unaff_R14 >> 8),*(undefined1 *)param_2);
    lVar1 = FUN_14000e108(&DAT_140139020,unaff_R14 & 0xffffffff,0);
    if (lVar1 == -1) {
      FUN_14000cf50(param_1,unaff_R14 & 0xffffffff);
    }
    else {
      FUN_14000cf50(param_1,0x5c);
      FUN_14000cf50(param_1,"btnfr\"\\"[lVar1]);
    }
  }
  return param_1;
}

