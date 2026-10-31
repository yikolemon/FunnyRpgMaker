/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140028fcf */

undefined8 * FUN_140028fcf(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong *local_58;
  undefined4 local_50;
  longlong *local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  lVar1 = param_2[1];
  uVar2 = lVar1 + 1;
  if ((ulonglong)param_2[2] < uVar2) {
    (*(code *)param_2[3])(param_2);
    lVar1 = param_2[1];
    uVar2 = lVar1 + 1;
  }
  param_2[1] = uVar2;
  *(undefined1 *)(*param_2 + lVar1) = 0x22;
  plVar4 = (longlong *)*param_3;
  plVar3 = (longlong *)(param_3[1] + (longlong)plVar4);
  do {
    local_58 = (longlong *)0x0;
    local_50 = 0;
    local_40 = (longlong)plVar3 - (longlong)plVar4;
    local_60 = plVar3;
    local_48 = plVar4;
    FUN_14002959e(&local_48,&local_60);
    FUN_140019fc2(param_2,plVar4,local_60);
    plVar4 = local_58;
    if (local_58 == (longlong *)0x0) break;
    FUN_14001d858(&local_48,param_2,&local_60);
    param_2 = local_48;
  } while (plVar4 != plVar3);
  lVar1 = param_2[1];
  uVar2 = lVar1 + 1;
  if ((ulonglong)param_2[2] < uVar2) {
    (*(code *)param_2[3])(param_2);
    lVar1 = param_2[1];
    uVar2 = lVar1 + 1;
  }
  param_2[1] = uVar2;
  *(undefined1 *)(*param_2 + lVar1) = 0x22;
  *param_1 = param_2;
  if (DAT_140f17b40 == (local_38 ^ (ulonglong)auStack_88)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_38 ^ (ulonglong)auStack_88);
}

