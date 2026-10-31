/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140052ee6 */

undefined8 FUN_140052ee6(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_1401c9640 ^ (ulonglong)auStack_58;
  plVar1 = param_1 + 2;
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  lVar4 = (longlong)param_1 + *plVar1 * 2;
  lVar2 = FUN_1400423eb(param_1,lVar4);
  do {
    lVar3 = lVar4;
    lVar4 = lVar2;
    if (lVar3 == lVar2) goto LAB_140052f54;
  } while ((*(short *)(lVar3 + -2) != 0x5c) && (lVar4 = lVar3 + -2, *(short *)(lVar3 + -2) != 0x2f))
  ;
  do {
    if ((*(short *)(lVar3 + -2) != 0x5c) && (lVar4 = lVar3, *(short *)(lVar3 + -2) != 0x2f)) break;
    lVar3 = lVar3 + -2;
    lVar4 = lVar2;
  } while (lVar3 != lVar2);
LAB_140052f54:
  local_28 = lVar4 - (longlong)param_1 >> 1;
  local_30 = param_1;
  FUN_1400423a4(param_2,&local_30,0);
  if (DAT_1401c9640 != (local_20 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_20 ^ (ulonglong)auStack_58);
  }
  return param_2;
}

