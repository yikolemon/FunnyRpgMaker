/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007b4d2 */

void FUN_18007b4d2(longlong *param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *local_a8;
  longlong local_a0;
  ulonglong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong *local_70;
  longlong local_60;
  ulonglong local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (param_4 != 0) {
    lVar1 = param_1[1];
    local_70 = param_1;
    local_60 = lVar1;
    local_50 = param_2;
    if ((ulonglong)(param_1[2] - lVar1) < param_4) {
      lVar2 = *param_1;
      local_58 = param_3;
      if ((lVar1 - lVar2 ^ 0x7fffffffffffffffU) < param_4) {
                    /* WARNING: Subroutine does not return */
        FUN_18001620a();
      }
      uVar6 = (lVar1 - lVar2) + param_4;
      uVar3 = param_1[2] - lVar2;
      uVar5 = (uVar3 >> 1) + uVar3;
      if (uVar5 <= uVar6) {
        uVar5 = uVar6;
      }
      if ((uVar3 >> 1 ^ 0x7fffffffffffffff) < uVar3) {
        uVar5 = 0x7fffffffffffffff;
      }
      lVar4 = FUN_1800013e0(uVar5);
      lVar7 = (local_50 - lVar2) + lVar4;
      lVar1 = param_4 + lVar7;
      local_a8 = param_1;
      local_a0 = lVar4;
      local_98 = uVar5;
      local_90 = lVar1;
      local_88 = lVar1;
      thunk_FUN_180006ba5(local_58,param_4,lVar7);
      local_90 = lVar7;
      if (local_60 == local_50 && param_4 == 1) {
        thunk_FUN_18000a68c(lVar2,local_60,lVar4);
      }
      else {
        thunk_FUN_18000a68c(lVar2,local_50,lVar4);
        local_90 = lVar4;
        thunk_FUN_18000a68c(local_50,local_60,lVar1);
      }
      local_a0 = 0;
      FUN_18004ddc6(local_70,lVar4,uVar6,uVar5);
      FUN_18004de2e(&local_a8);
    }
    else if (param_4 < (ulonglong)(lVar1 - param_2)) {
      thunk_FUN_18000a68c(lVar1 - param_4,lVar1,lVar1);
      param_1[1] = lVar1 + param_4;
      local_58 = param_4;
      FUN_18007b866(param_2,lVar1 - param_4,lVar1);
      local_80 = param_2 + param_4;
      thunk_FUN_180006ba5(param_3,local_58,param_2);
    }
    else {
      lVar2 = param_2 + param_4;
      local_58 = lVar2;
      thunk_FUN_18000a68c(param_2,lVar1,lVar2);
      param_1[1] = (lVar1 - param_2) + lVar2;
      thunk_FUN_180006ba5(param_3,param_4,param_2);
    }
  }
  return;
}

