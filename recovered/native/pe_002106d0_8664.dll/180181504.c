/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180181504 */

longlong FUN_180181504(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar7 = *param_1;
  uVar4 = (param_1[1] - lVar7 >> 2) * 0x6db6db6db6db6db7 + 1;
  uVar2 = (param_1[2] - lVar7 >> 2) * 0x6db6db6db6db6db7;
  uVar5 = 0x924924924924924 - (uVar2 >> 1);
  uVar3 = (uVar2 >> 1) + uVar2;
  if (uVar3 <= uVar4) {
    uVar3 = uVar4;
  }
  if (uVar5 <= uVar2 && uVar2 - uVar5 != 0) {
    uVar3 = 0x924924924924924;
  }
  local_50 = param_3;
  if (uVar3 < 0x924924924924925) {
    lVar1 = FUN_1800013e0(uVar3 * 0x1c);
    lVar6 = lVar1 + (param_2 - lVar7) + 0x1c;
    lVar7 = (param_2 - lVar7) + lVar1;
    local_78 = param_1;
    local_70 = lVar1;
    local_68 = uVar3;
    local_60 = lVar6;
    local_58 = lVar6;
    FUN_180181688(lVar7,local_50);
    local_60 = lVar7;
    if (param_2 == param_1[1]) {
      thunk_FUN_180181977(*param_1,param_1[1],lVar1);
    }
    else {
      thunk_FUN_180181977(*param_1,param_2,lVar1);
      local_60 = lVar1;
      thunk_FUN_180181977(param_2,param_1[1],lVar6);
    }
    local_70 = 0;
    FUN_1801818ac(param_1,lVar1,uVar4,uVar3);
    FUN_18018192a(&local_78);
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180001427();
}

