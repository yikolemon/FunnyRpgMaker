/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800605ea */

longlong FUN_1800605ea(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *local_70;
  longlong local_68;
  ulonglong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar7 = *param_1;
  uVar4 = (param_1[1] - lVar7 >> 5) * -0x5555555555555555 + 1;
  uVar2 = (param_1[2] - lVar7 >> 5) * -0x5555555555555555;
  uVar5 = 0x2aaaaaaaaaaaaaa - (uVar2 >> 1);
  uVar3 = (uVar2 >> 1) + uVar2;
  if (uVar3 <= uVar4) {
    uVar3 = uVar4;
  }
  if (uVar5 <= uVar2 && uVar2 - uVar5 != 0) {
    uVar3 = 0x2aaaaaaaaaaaaaa;
  }
  if (uVar3 < 0x2aaaaaaaaaaaaab) {
    lVar1 = FUN_1800013e0(uVar3 * 0x60);
    lVar6 = lVar1 + (param_2 - lVar7) + 0x60;
    lVar7 = (param_2 - lVar7) + lVar1;
    local_70 = param_1;
    local_68 = lVar1;
    local_60 = uVar3;
    local_58 = lVar6;
    local_50 = lVar6;
    FUN_180060770(lVar7);
    local_58 = lVar7;
    if (param_2 == param_1[1]) {
      FUN_180060a23(*param_1,param_1[1],lVar1,param_1);
    }
    else {
      FUN_180060ac7(*param_1,param_2,lVar1,param_1);
      local_58 = lVar1;
      FUN_180060ac7(param_2,param_1[1],lVar6,param_1);
    }
    local_68 = 0;
    FUN_180060b6c(param_1,lVar1,uVar4,uVar3);
    FUN_180060c0c(&local_70);
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180001427();
}

