/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800eb474 */

longlong FUN_1800eb474(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *local_80;
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar7 = *param_1;
  uVar4 = (param_1[1] - lVar7 >> 4) * -0x5555555555555555 + 1;
  uVar2 = (param_1[2] - lVar7 >> 4) * -0x5555555555555555;
  uVar5 = 0x555555555555555 - (uVar2 >> 1);
  uVar3 = (uVar2 >> 1) + uVar2;
  if (uVar3 <= uVar4) {
    uVar3 = uVar4;
  }
  if (uVar5 <= uVar2 && uVar2 - uVar5 != 0) {
    uVar3 = 0x555555555555555;
  }
  local_58 = param_4;
  local_50 = param_3;
  if (uVar3 < 0x555555555555556) {
    lVar1 = FUN_1800013e0(uVar3 * 0x30);
    lVar6 = lVar1 + (param_2 - lVar7) + 0x30;
    lVar7 = (param_2 - lVar7) + lVar1;
    local_80 = param_1;
    local_78 = lVar1;
    local_70 = uVar3;
    local_68 = lVar6;
    local_60 = lVar6;
    FUN_1800eb60a(lVar7,local_50,local_58);
    local_68 = lVar7;
    if (param_2 == param_1[1]) {
      FUN_1800880fa(*param_1,param_1[1],lVar1,param_1);
    }
    else {
      FUN_180088eca(*param_1,param_2,lVar1,param_1);
      local_68 = lVar1;
      FUN_180088eca(param_2,param_1[1],lVar6,param_1);
    }
    local_78 = 0;
    FUN_180088868(param_1,lVar1,uVar4,uVar3);
    FUN_180088908(&local_80);
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180001427();
}

