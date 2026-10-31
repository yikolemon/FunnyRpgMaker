/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400a7796 */

longlong FUN_1400a7796(longlong *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *local_88;
  longlong local_80;
  ulonglong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  longlong *local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar4 = *param_1;
  local_60 = (param_1[1] - lVar4 >> 7) + 1;
  uVar1 = param_1[2] - lVar4 >> 7;
  uVar6 = (uVar1 >> 1) + uVar1;
  if (uVar6 <= local_60) {
    uVar6 = local_60;
  }
  if (0x1ffffffffffffff - (uVar1 >> 1) < uVar1) {
    uVar6 = 0x1ffffffffffffff;
  }
  if (uVar6 >> 0x39 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1400062c7();
  }
  local_80 = FUN_140006280(uVar6 << 7);
  lVar5 = local_80 + (param_2 - lVar4) + 0x80;
  lVar7 = (param_2 - lVar4) + local_80;
  local_88 = param_1;
  local_78 = uVar6;
  local_70 = lVar5;
  local_68 = lVar5;
  local_50 = local_80;
  FUN_1400a795a(lVar7,param_3);
  lVar4 = *param_1;
  lVar3 = param_1[1];
  local_70 = lVar7;
  local_58 = param_1;
  lVar2 = local_50;
  if (param_2 == lVar3) {
    for (; lVar4 != param_2; lVar4 = lVar4 + 0x80) {
      FUN_1400a795a(lVar2,lVar4);
      lVar2 = lVar2 + 0x80;
    }
  }
  else {
    if (lVar4 != param_2) {
      do {
        FUN_1400a795a(lVar2,lVar4);
        lVar4 = lVar4 + 0x80;
        lVar2 = lVar2 + 0x80;
      } while (lVar4 != param_2);
      lVar3 = local_58[1];
      lVar2 = local_50;
    }
    for (; local_70 = lVar2, param_2 != lVar3; param_2 = param_2 + 0x80) {
      FUN_1400a795a(lVar5,param_2);
      lVar5 = lVar5 + 0x80;
      lVar2 = local_70;
    }
  }
  local_80 = 0;
  FUN_1400a7ac6(local_58,local_50,local_60,uVar6);
  FUN_1400a7b5e(&local_88);
  return lVar7;
}

