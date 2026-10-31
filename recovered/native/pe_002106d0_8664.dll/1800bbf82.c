/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bbf82 */

void FUN_1800bbf82(longlong *param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *local_b0;
  longlong local_a8;
  ulonglong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  undefined8 local_78;
  longlong *local_68;
  longlong local_60;
  ulonglong local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (param_4 != 0) {
    lVar3 = param_1[1];
    local_78 = param_3;
    local_68 = param_1;
    local_60 = lVar3;
    local_50 = param_2;
    if ((ulonglong)(param_1[2] - lVar3 >> 3) < param_4) {
      lVar5 = *param_1;
      lVar3 = lVar3 - lVar5 >> 3;
      if (0x1fffffffffffffffU - lVar3 < param_4) {
                    /* WARNING: Subroutine does not return */
        FUN_18001620a();
      }
      uVar4 = lVar3 + param_4;
      uVar1 = param_1[2] - lVar5 >> 3;
      uVar2 = (uVar1 >> 1) + uVar1;
      if (uVar2 <= uVar4) {
        uVar2 = uVar4;
      }
      if (0x1fffffffffffffff - (uVar1 >> 1) < uVar1) {
        uVar2 = 0x1fffffffffffffff;
      }
      if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180001427();
      }
      lVar3 = FUN_1800013e0(uVar2 * 8);
      lVar7 = (local_50 - lVar5) + lVar3;
      lVar6 = param_4 * 8 + lVar7;
      local_b0 = local_68;
      local_a8 = lVar3;
      local_a0 = uVar2;
      local_98 = lVar6;
      local_90 = lVar6;
      thunk_FUN_1800bc359(local_78,param_4,lVar7);
      local_98 = lVar7;
      if (local_60 == local_50 && param_4 == 1) {
        thunk_FUN_180018197(lVar5,local_60,lVar3);
      }
      else {
        thunk_FUN_180018197(lVar5,local_50,lVar3);
        local_98 = lVar3;
        thunk_FUN_180018197(local_50,local_60,lVar6);
      }
      local_a8 = 0;
      FUN_180052d44(local_68,lVar3,uVar4,uVar2);
      FUN_18001a206(&local_b0);
    }
    else if (param_4 < (ulonglong)(lVar3 - param_2 >> 3)) {
      lVar5 = lVar3 + param_4 * -8;
      thunk_FUN_180018197(lVar5,lVar3,lVar3);
      param_1[1] = lVar3 + param_4 * 8;
      local_58 = param_4;
      FUN_18007b866(param_2,lVar5,lVar3);
      local_88 = param_2 + param_4 * 8;
      thunk_FUN_1800bc359(local_78,local_58,param_2);
    }
    else {
      lVar5 = param_2 + param_4 * 8;
      local_58 = lVar5;
      thunk_FUN_180018197(param_2,lVar3,lVar5);
      param_1[1] = (lVar3 - param_2) + lVar5;
      thunk_FUN_1800bc359(local_78,param_4,param_2);
    }
  }
  return;
}

