/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140029bd8 */

longlong FUN_140029bd8(longlong *param_1,longlong param_2,undefined8 param_3)

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
  uVar2 = (param_1[2] - lVar6 >> 4) * -0x3333333333333333;
  uVar5 = 0x333333333333333 - (uVar2 >> 1);
  uVar8 = (uVar2 >> 1) + uVar2;
  if (uVar8 <= uVar4) {
    uVar8 = uVar4;
  }
  if (uVar5 <= uVar2 && uVar2 - uVar5 != 0) {
    uVar8 = 0x333333333333333;
  }
  local_50 = param_3;
  if (0x333333333333333 < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_1400062c7();
  }
  lVar1 = FUN_140006280(uVar8 * 0x50);
  lVar7 = lVar1 + (param_2 - lVar6) + 0x50;
  lVar9 = (param_2 - lVar6) + lVar1;
  local_80 = param_1;
  local_78 = lVar1;
  local_70 = uVar8;
  local_68 = lVar7;
  local_60 = lVar7;
  local_58 = param_1;
  FUN_140029db2(lVar9,local_50);
  lVar6 = *local_58;
  lVar3 = local_58[1];
  local_68 = lVar9;
  local_50 = lVar1;
  if (param_2 == lVar3) {
    for (; lVar6 != param_2; lVar6 = lVar6 + 0x50) {
      FUN_140028f07(lVar1,lVar6);
      lVar1 = lVar1 + 0x50;
    }
  }
  else {
    if (lVar6 != param_2) {
      do {
        FUN_140028f07(lVar1,lVar6);
        lVar1 = lVar1 + 0x50;
        lVar6 = lVar6 + 0x50;
      } while (lVar6 != param_2);
      lVar3 = local_58[1];
      lVar1 = local_50;
    }
    for (; local_68 = lVar1, param_2 != lVar3; param_2 = param_2 + 0x50) {
      FUN_140028f07(lVar7,param_2);
      lVar7 = lVar7 + 0x50;
      lVar1 = local_68;
    }
  }
  local_78 = 0;
  FUN_140028d22(local_58,local_50,uVar4,uVar8);
  FUN_140028dc2(&local_80);
  return lVar9;
}

