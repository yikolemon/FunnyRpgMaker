/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180185a1a */

longlong FUN_180185a1a(longlong *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *local_80;
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar5 = *param_1;
  uVar4 = (param_1[1] - lVar5 >> 6) + 1;
  uVar1 = param_1[2] - lVar5 >> 6;
  uVar7 = (uVar1 >> 1) + uVar1;
  if (uVar7 <= uVar4) {
    uVar7 = uVar4;
  }
  if (0x3ffffffffffffff - (uVar1 >> 1) < uVar1) {
    uVar7 = 0x3ffffffffffffff;
  }
  if (uVar7 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180001427();
  }
  local_78 = FUN_1800013e0(uVar7 << 6);
  lVar6 = local_78 + (param_2 - lVar5) + 0x40;
  lVar8 = (param_2 - lVar5) + local_78;
  local_80 = param_1;
  local_70 = uVar7;
  local_68 = lVar6;
  local_60 = lVar6;
  local_50 = local_78;
  FUN_1801858f3(lVar8,param_3);
  lVar5 = *param_1;
  lVar3 = param_1[1];
  local_68 = lVar8;
  local_58 = param_1;
  lVar2 = local_50;
  if (param_2 == lVar3) {
    for (; lVar5 != param_2; lVar5 = lVar5 + 0x40) {
      FUN_1801858f3(lVar2,lVar5);
      lVar2 = lVar2 + 0x40;
    }
  }
  else {
    if (lVar5 != param_2) {
      do {
        FUN_1801858f3(lVar2,lVar5);
        lVar5 = lVar5 + 0x40;
        lVar2 = lVar2 + 0x40;
      } while (lVar5 != param_2);
      lVar3 = local_58[1];
      lVar2 = local_50;
    }
    for (; local_68 = lVar2, param_2 != lVar3; param_2 = param_2 + 0x40) {
      FUN_1801858f3(lVar6,param_2);
      lVar6 = lVar6 + 0x40;
      lVar2 = local_68;
    }
  }
  local_78 = 0;
  FUN_180185818(local_58,local_50,uVar4,uVar7);
  FUN_180185cb2(&local_80);
  return lVar8;
}

