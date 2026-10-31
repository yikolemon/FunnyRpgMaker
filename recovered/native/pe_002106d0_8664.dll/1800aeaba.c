/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800aeaba */

longlong FUN_1800aeaba(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *local_80;
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar6 = *param_1;
  uVar4 = (param_1[1] - lVar6 >> 4) * -0x3333333333333333 + 1;
  uVar1 = (param_1[2] - lVar6 >> 4) * -0x3333333333333333;
  uVar5 = 0x333333333333333 - (uVar1 >> 1);
  uVar8 = (uVar1 >> 1) + uVar1;
  if (uVar8 <= uVar4) {
    uVar8 = uVar4;
  }
  if (uVar5 <= uVar1 && uVar1 - uVar5 != 0) {
    uVar8 = 0x333333333333333;
  }
  if (0x333333333333333 < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_180001427();
  }
  local_78 = FUN_1800013e0(uVar8 * 0x50);
  lVar7 = local_78 + (param_2 - lVar6) + 0x50;
  lVar9 = (param_2 - lVar6) + local_78;
  local_80 = param_1;
  local_70 = uVar8;
  local_68 = lVar7;
  local_60 = lVar7;
  local_50 = local_78;
  FUN_1800aee66(lVar9);
  lVar6 = *param_1;
  lVar3 = param_1[1];
  local_68 = lVar9;
  local_58 = param_1;
  lVar2 = local_50;
  if (param_2 == lVar3) {
    for (; lVar6 != param_2; lVar6 = lVar6 + 0x50) {
      FUN_1800aef33(lVar2,lVar6);
      lVar2 = lVar2 + 0x50;
    }
  }
  else {
    if (lVar6 != param_2) {
      do {
        FUN_1800aef33(lVar2,lVar6);
        lVar6 = lVar6 + 0x50;
        lVar2 = lVar2 + 0x50;
      } while (lVar6 != param_2);
      lVar3 = local_58[1];
      lVar2 = local_50;
    }
    for (; local_68 = lVar2, param_2 != lVar3; param_2 = param_2 + 0x50) {
      FUN_1800aef33(lVar7,param_2);
      lVar7 = lVar7 + 0x50;
      lVar2 = local_68;
    }
  }
  local_78 = 0;
  FUN_1800aed4e(local_58,local_50,uVar4,uVar8);
  FUN_1800aedee(&local_80);
  return lVar9;
}

