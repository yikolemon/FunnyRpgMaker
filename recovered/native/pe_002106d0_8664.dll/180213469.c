/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180213469 */

undefined8 FUN_180213469(longlong *param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_118 [48];
  longlong local_e8;
  int local_dc;
  ulonglong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  longlong *local_c0;
  int local_b8;
  int local_b4;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  int local_70;
  undefined1 local_68 [16];
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_118;
  local_d8 = param_4;
  local_c0 = param_1;
  FUN_1802131d5(param_1,&local_80);
  plVar3 = local_c0;
  if (local_70 == 0) goto LAB_180213929;
  local_88 = local_80;
  iVar5 = *(int *)(param_2 + 0x14);
  local_b4 = local_70;
  local_e8 = local_78;
  local_d0 = param_3;
  local_c8 = param_2;
  if (iVar5 == 7) {
    lVar1 = *local_c0;
    lVar2 = local_c0[2];
    *local_c0 = local_80 + 1;
    local_c0[2] = local_78 + -1;
    FUN_1802131d5(local_c0,local_68);
    *plVar3 = lVar1;
    plVar3[2] = lVar2;
    if (local_58 == 3) {
      if ((int)local_d8 == 0) goto LAB_180213929;
      iVar5 = 8;
      local_dc = 1;
LAB_180213567:
      local_88 = local_80 + 1;
      local_e8 = local_e8 + -1;
    }
    else {
      iVar5 = 7;
      local_dc = 1;
    }
  }
  else {
    if (local_70 == 3) {
      local_dc = (int)local_d8;
      if (local_dc == 0) goto LAB_180213929;
      goto LAB_180213567;
    }
    local_dc = 1;
  }
  local_b8 = (int)local_d8 * 4;
  local_a8 = (ulonglong)(uint)((int)local_d8 * 3);
  local_a0 = local_d8 & 0xffffffff;
  local_98 = (ulonglong)(iVar5 - 1);
  FUN_1802162b6(&local_88,local_e8);
  if ((uint)local_98 < 8) {
                    /* WARNING: Could not recover jumptable at 0x000180213615. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(code *)(&DAT_18033ce5c + *(int *)(&DAT_18033ce5c + local_98 * 4)))();
    return uVar4;
  }
LAB_180213929:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_118)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_118);
  }
  return 3;
}

