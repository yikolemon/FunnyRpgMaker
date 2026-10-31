/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800eebe8 */

longlong * FUN_1800eebe8(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_98 [40];
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_3 + 0x10);
  puVar2 = (undefined8 *)*param_1;
  lVar3 = *(longlong *)(param_4 + 0x10);
  if (lVar3 == lVar5) {
    param_2[1] = 0;
    *param_2 = (longlong)puVar2;
    param_2[2] = lVar5;
  }
  else {
    local_68 = param_1[3];
    uVar6 = lVar5 - local_68;
    if (puVar2 == (undefined8 *)0x0) {
      local_70 = (longlong *)0x0;
    }
    else {
      local_70 = (longlong *)*puVar2;
    }
    local_58 = param_1[4] + local_68;
    if (uVar6 < (ulonglong)(local_58 - lVar3)) {
      local_60 = local_70;
      local_70 = param_1;
      local_58 = lVar5;
      local_50 = local_60;
      local_48 = lVar3;
      FUN_1800eed40(local_40);
      uVar4 = param_1[3];
      lVar5 = lVar5 - lVar3;
      do {
        FUN_1800e5399(*(undefined8 *)(param_1[1] + (param_1[2] - 1U & uVar4) * 8));
        plVar1 = param_1 + 4;
        *plVar1 = *plVar1 + -1;
        uVar4 = param_1[3] + 1;
        if (*plVar1 == 0) {
          uVar4 = 0;
        }
        param_1[3] = uVar4;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0);
    }
    else {
      local_68 = lVar3;
      local_60 = param_1;
      local_50 = local_70;
      local_48 = lVar5;
      FUN_1800eee4d(local_40);
      lVar5 = lVar5 - lVar3;
      do {
        FUN_1800e52c8(param_1);
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0);
      uVar4 = param_1[3];
    }
    lVar5 = *param_1;
    param_2[1] = 0;
    *param_2 = lVar5;
    param_2[2] = uVar4 + uVar6;
  }
  if (DAT_180402640 != (local_30 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_30 ^ (ulonglong)auStack_98);
  }
  return param_2;
}

