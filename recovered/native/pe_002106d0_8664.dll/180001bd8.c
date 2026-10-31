/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180001bd8 */

undefined8 FUN_180001bd8(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_58;
  plVar1 = param_1 + 2;
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  lVar4 = (longlong)param_1 + *plVar1 * 2;
  lVar2 = FUN_180001f7f(param_1,lVar4);
  do {
    lVar3 = lVar4;
    lVar4 = lVar2;
    if (lVar3 == lVar2) goto LAB_180001c46;
  } while ((*(short *)(lVar3 + -2) != 0x5c) && (lVar4 = lVar3 + -2, *(short *)(lVar3 + -2) != 0x2f))
  ;
  do {
    if ((*(short *)(lVar3 + -2) != 0x5c) && (lVar4 = lVar3, *(short *)(lVar3 + -2) != 0x2f)) break;
    lVar3 = lVar3 + -2;
    lVar4 = lVar2;
  } while (lVar3 != lVar2);
LAB_180001c46:
  local_28 = lVar4 - (longlong)param_1 >> 1;
  local_30 = param_1;
  FUN_180001f38(param_2,&local_30,0);
  if (DAT_180402640 != (local_20 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_20 ^ (ulonglong)auStack_58);
  }
  return param_2;
}

