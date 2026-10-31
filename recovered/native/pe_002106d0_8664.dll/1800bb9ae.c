/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bb9ae */

longlong FUN_1800bb9ae(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *local_88;
  longlong local_80;
  ulonglong local_78;
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  longlong *local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar6 = *param_1;
  uVar4 = (param_1[1] - lVar6 >> 3) * -0x3333333333333333 + 1;
  uVar2 = (param_1[2] - lVar6 >> 3) * -0x3333333333333333;
  uVar5 = 0x666666666666666 - (uVar2 >> 1);
  uVar8 = (uVar2 >> 1) + uVar2;
  if (uVar8 <= uVar4) {
    uVar8 = uVar4;
  }
  if (uVar5 <= uVar2 && uVar2 - uVar5 != 0) {
    uVar8 = 0x666666666666666;
  }
  local_60 = param_3;
  local_50 = param_4;
  if (0x666666666666666 < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_180001427();
  }
  lVar1 = FUN_1800013e0(uVar8 * 0x28);
  lVar7 = lVar1 + (param_2 - lVar6) + 0x28;
  lVar9 = (param_2 - lVar6) + lVar1;
  local_88 = param_1;
  local_80 = lVar1;
  local_78 = uVar8;
  local_70 = lVar7;
  local_68 = lVar7;
  local_58 = param_1;
  FUN_1800bbb90(lVar9,local_60,local_50);
  lVar6 = *local_58;
  lVar3 = local_58[1];
  local_70 = lVar9;
  local_50 = lVar1;
  if (param_2 == lVar3) {
    for (; lVar6 != param_2; lVar6 = lVar6 + 0x28) {
      FUN_18006648d(lVar1,lVar6);
      lVar1 = lVar1 + 0x28;
    }
  }
  else {
    if (lVar6 != param_2) {
      do {
        FUN_18006648d(lVar1,lVar6);
        lVar1 = lVar1 + 0x28;
        lVar6 = lVar6 + 0x28;
      } while (lVar6 != param_2);
      lVar3 = local_58[1];
      lVar1 = local_50;
    }
    for (; local_70 = lVar1, param_2 != lVar3; param_2 = param_2 + 0x28) {
      FUN_18006648d(lVar7,param_2);
      lVar7 = lVar7 + 0x28;
      lVar1 = local_70;
    }
  }
  local_80 = 0;
  FUN_180063680(local_58,local_50,uVar4,uVar8);
  FUN_18006371a(&local_88);
  return lVar9;
}

