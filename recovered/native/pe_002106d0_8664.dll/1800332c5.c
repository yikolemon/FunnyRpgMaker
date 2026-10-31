/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800332c5 */

longlong * FUN_1800332c5(longlong *param_1,longlong param_2,longlong *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_108 [32];
  ulonglong local_e8;
  undefined1 *local_e0;
  undefined1 local_d8 [8];
  ulonglong local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 *local_a8;
  ulonglong *local_a0;
  longlong *local_98;
  ulonglong *local_90;
  longlong *local_88;
  ulonglong local_80;
  ulonglong local_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_108;
  uVar2 = *param_4 & 7;
  local_49 = uVar2 == 1;
  uVar1 = param_4[3];
  if (((longlong)(int)uVar1 < 0) && (param_4[2] == 0)) {
    if (*(ulonglong *)(param_2 + 0x10) < (ulonglong)(*(longlong *)(param_2 + 8) + param_3[1])) {
      (**(code **)(param_2 + 0x18))(param_2);
    }
    if (uVar2 == 1) {
      local_68 = (undefined4)*param_3;
      uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
      uStack_60 = (undefined4)param_3[1];
      uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
      FUN_18003344b(param_1,param_2);
    }
    else {
      FUN_180018bde(param_2,*param_3,param_3[1] + *param_3);
      *param_1 = param_2;
    }
  }
  else {
    local_70 = -1;
    if (-1 < (int)uVar1) {
      local_70 = (longlong)(int)uVar1;
    }
    local_98 = &local_70;
    local_80 = (ulonglong)(uVar1 != 0 && uVar2 == 1);
    local_a0 = &local_78;
    local_90 = &local_80;
    local_a8 = &local_49;
    local_b8 = (undefined4)*param_3;
    uStack_b4 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_b0 = (undefined4)param_3[1];
    uStack_ac = *(undefined4 *)((longlong)param_3 + 0xc);
    local_88 = param_3;
    local_78 = local_80;
    FUN_18003356b();
    local_e0 = local_d8;
    local_d8[0] = local_49;
    local_d0 = local_80;
    local_c8 = (undefined4)*param_3;
    uStack_c4 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_c0 = (undefined4)param_3[1];
    uStack_bc = *(undefined4 *)((longlong)param_3 + 0xc);
    local_e8 = local_78;
    FUN_1800338d9(param_1,param_2,param_4);
  }
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_108)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_108);
}

