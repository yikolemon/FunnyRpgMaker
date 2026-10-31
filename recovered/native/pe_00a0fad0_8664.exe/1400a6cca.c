/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400a6cca */

longlong FUN_1400a6cca(longlong *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *local_88;
  longlong local_80;
  ulonglong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar5 = *param_1;
  uVar3 = (param_1[1] - lVar5 >> 5) * -0x3333333333333333 + 1;
  uVar1 = (param_1[2] - lVar5 >> 5) * -0x3333333333333333;
  uVar4 = 0x199999999999999 - (uVar1 >> 1);
  uVar7 = (uVar1 >> 1) + uVar1;
  if (uVar7 <= uVar3) {
    uVar7 = uVar3;
  }
  if (uVar4 <= uVar1 && uVar1 - uVar4 != 0) {
    uVar7 = 0x199999999999999;
  }
  if (0x199999999999999 < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_1400062c7();
  }
  local_80 = FUN_140006280(uVar7 * 0xa0);
  lVar6 = local_80 + (param_2 - lVar5) + 0xa0;
  lVar8 = (param_2 - lVar5) + local_80;
  local_88 = param_1;
  local_78 = uVar7;
  local_70 = lVar6;
  local_68 = lVar6;
  local_50 = local_80;
  FUN_1400a6eb0(lVar8,param_3);
  lVar5 = *param_1;
  lVar2 = param_1[1];
  local_70 = lVar8;
  local_60 = lVar8;
  local_58 = param_1;
  lVar8 = local_50;
  if (param_2 == lVar2) {
    for (; lVar5 != param_2; lVar5 = lVar5 + 0xa0) {
      FUN_1400a6eb0(lVar8,lVar5);
      lVar8 = lVar8 + 0xa0;
    }
  }
  else {
    if (lVar5 != param_2) {
      do {
        FUN_1400a6eb0(lVar8,lVar5);
        lVar5 = lVar5 + 0xa0;
        lVar8 = lVar8 + 0xa0;
      } while (lVar5 != param_2);
      lVar2 = local_58[1];
      lVar8 = local_50;
    }
    for (; local_70 = lVar8, param_2 != lVar2; param_2 = param_2 + 0xa0) {
      FUN_1400a6eb0(lVar6,param_2);
      lVar6 = lVar6 + 0xa0;
      lVar8 = local_70;
    }
  }
  local_80 = 0;
  FUN_1400a73b6(local_58,local_50,uVar3,uVar7);
  lVar5 = local_60;
  FUN_1400a7458(&local_88);
  return lVar5;
}

