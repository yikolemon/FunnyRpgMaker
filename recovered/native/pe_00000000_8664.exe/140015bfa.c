/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140015bfa */

undefined8 FUN_140015bfa(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  plVar1 = param_1 + 2;
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  lVar4 = (longlong)param_1 + *plVar1 * 2;
  lVar2 = FUN_140015cf9(param_1,lVar4);
  do {
    lVar3 = lVar4;
    lVar4 = lVar2;
    if (lVar3 == lVar2) goto LAB_140015c68;
  } while ((*(short *)(lVar3 + -2) != 0x5c) && (lVar4 = lVar3 + -2, *(short *)(lVar3 + -2) != 0x2f))
  ;
  do {
    if ((*(short *)(lVar3 + -2) != 0x5c) && (lVar4 = lVar3, *(short *)(lVar3 + -2) != 0x2f)) break;
    lVar3 = lVar3 + -2;
    lVar4 = lVar2;
  } while (lVar3 != lVar2);
LAB_140015c68:
  local_28 = lVar4 - (longlong)param_1 >> 1;
  local_30 = param_1;
  FUN_140015cb2(param_2,&local_30,0);
  if (DAT_140f17b40 != (local_20 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_20 ^ (ulonglong)auStack_58);
  }
  return param_2;
}

