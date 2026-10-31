/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14028c9a2 */

void FUN_14028c9a2(longlong *param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

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
        FUN_1402276da();
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
      lVar4 = FUN_1402128b0(uVar5);
      lVar7 = (local_50 - lVar2) + lVar4;
      lVar1 = param_4 + lVar7;
      local_a8 = param_1;
      local_a0 = lVar4;
      local_98 = uVar5;
      local_90 = lVar1;
      local_88 = lVar1;
      thunk_FUN_140218075(local_58,param_4,lVar7);
      local_90 = lVar7;
      if (local_60 == local_50 && param_4 == 1) {
        thunk_FUN_14021bb5c(lVar2,local_60,lVar4);
      }
      else {
        thunk_FUN_14021bb5c(lVar2,local_50,lVar4);
        local_90 = lVar4;
        thunk_FUN_14021bb5c(local_50,local_60,lVar1);
      }
      local_a0 = 0;
      FUN_14025f296(local_70,lVar4,uVar6,uVar5);
      FUN_14025f2fe(&local_a8);
    }
    else if (param_4 < (ulonglong)(lVar1 - param_2)) {
      thunk_FUN_14021bb5c(lVar1 - param_4,lVar1,lVar1);
      param_1[1] = lVar1 + param_4;
      local_58 = param_4;
      FUN_14028cd36(param_2,lVar1 - param_4,lVar1);
      local_80 = param_2 + param_4;
      thunk_FUN_140218075(param_3,local_58,param_2);
    }
    else {
      lVar2 = param_2 + param_4;
      local_58 = lVar2;
      thunk_FUN_14021bb5c(param_2,lVar1,lVar2);
      param_1[1] = (lVar1 - param_2) + lVar2;
      thunk_FUN_140218075(param_3,param_4,param_2);
    }
  }
  return;
}

