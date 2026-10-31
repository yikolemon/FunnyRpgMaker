/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ad81a */

longlong FUN_1800ad81a(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_68;
  plVar1 = param_1 + 3;
  cVar2 = FUN_180062510(plVar1);
  if (cVar2 == '\0') {
    local_40 = (param_1[1] - *param_1 >> 4) * -0x3333333333333333;
    FUN_1800ae220(plVar1,local_38,param_2);
    lVar3 = FUN_1800aea80(param_1);
  }
  else {
    FUN_1800ae3b2(plVar1,local_38,param_2);
    lVar3 = *(longlong *)(local_38[0] + 0x30) * 0x50 + *param_1;
  }
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_68)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_68);
}

