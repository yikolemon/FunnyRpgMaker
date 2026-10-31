/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400786ec */

undefined8 * FUN_1400786ec(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = DAT_1401cc260;
  for (lVar2 = DAT_1401cc258; lVar2 != lVar1; lVar2 = lVar2 + 0x50) {
    FUN_14000d086(param_1,lVar2);
  }
  return param_1;
}

