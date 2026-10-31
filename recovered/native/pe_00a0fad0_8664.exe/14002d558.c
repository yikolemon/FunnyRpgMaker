/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002d558 */

longlong FUN_14002d558(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
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
  undefined8 local_60;
  longlong *local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar5 = *param_1;
  uVar4 = (param_1[1] - lVar5 >> 6) + 1;
  uVar2 = param_1[2] - lVar5 >> 6;
  uVar7 = (uVar2 >> 1) + uVar2;
  if (uVar7 <= uVar4) {
    uVar7 = uVar4;
  }
  if (0x3ffffffffffffff - (uVar2 >> 1) < uVar2) {
    uVar7 = 0x3ffffffffffffff;
  }
  local_60 = param_3;
  local_50 = param_4;
  if (uVar7 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1400062c7();
  }
  lVar1 = FUN_140006280(uVar7 << 6);
  lVar6 = lVar1 + (param_2 - lVar5) + 0x40;
  lVar8 = (param_2 - lVar5) + lVar1;
  local_88 = param_1;
  local_80 = lVar1;
  local_78 = uVar7;
  local_70 = lVar6;
  local_68 = lVar6;
  local_58 = param_1;
  FUN_14002d71e(lVar8,local_60,local_50);
  lVar5 = *local_58;
  lVar3 = local_58[1];
  local_70 = lVar8;
  local_50 = lVar1;
  if (param_2 == lVar3) {
    for (; lVar5 != param_2; lVar5 = lVar5 + 0x40) {
      FUN_14002d44e(lVar1,lVar5);
      lVar1 = lVar1 + 0x40;
    }
  }
  else {
    if (lVar5 != param_2) {
      do {
        FUN_14002d44e(lVar1,lVar5);
        lVar1 = lVar1 + 0x40;
        lVar5 = lVar5 + 0x40;
      } while (lVar5 != param_2);
      lVar3 = local_58[1];
      lVar1 = local_50;
    }
    for (; local_70 = lVar1, param_2 != lVar3; param_2 = param_2 + 0x40) {
      FUN_14002d44e(lVar6,param_2);
      lVar6 = lVar6 + 0x40;
      lVar1 = local_70;
    }
  }
  local_80 = 0;
  FUN_14002d374(local_58,local_50,uVar4,uVar7);
  FUN_14002d7a6(&local_88);
  return lVar8;
}

