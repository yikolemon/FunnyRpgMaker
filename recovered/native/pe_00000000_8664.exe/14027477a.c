/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14027477a */

longlong FUN_14027477a(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *local_88;
  longlong local_80;
  ulonglong local_78;
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  longlong *local_58;
  longlong local_50;
  undefined8 local_48;
  
  lVar3 = param_1[1];
  if (lVar3 != param_1[2]) {
    FUN_1402749a2(lVar3,param_2,param_3);
    lVar3 = param_1[1];
    param_1[1] = lVar3 + 0x28;
    return lVar3;
  }
  local_48 = 0xfffffffffffffffe;
  lVar7 = *param_1;
  uVar5 = (param_1[1] - lVar7 >> 3) * -0x3333333333333333 + 1;
  uVar2 = (param_1[2] - lVar7 >> 3) * -0x3333333333333333;
  uVar6 = 0x666666666666666 - (uVar2 >> 1);
  uVar9 = (uVar2 >> 1) + uVar2;
  if (uVar9 <= uVar5) {
    uVar9 = uVar5;
  }
  if (uVar6 <= uVar2 && uVar2 - uVar6 != 0) {
    uVar9 = 0x666666666666666;
  }
  local_60 = param_2;
  local_50 = param_3;
  if (0x666666666666666 < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_1402128f7();
  }
  lVar1 = FUN_1402128b0(uVar9 * 0x28);
  lVar8 = lVar1 + (lVar3 - lVar7) + 0x28;
  lVar10 = (lVar3 - lVar7) + lVar1;
  local_88 = param_1;
  local_80 = lVar1;
  local_78 = uVar9;
  local_70 = lVar8;
  local_68 = lVar8;
  local_58 = param_1;
  FUN_1402749a2(lVar10,local_60,local_50);
  lVar7 = *local_58;
  lVar4 = local_58[1];
  local_70 = lVar10;
  local_50 = lVar1;
  if (lVar3 == lVar4) {
    for (; lVar7 != lVar3; lVar7 = lVar7 + 0x28) {
      FUN_140274c62(lVar1,lVar7);
      lVar1 = lVar1 + 0x28;
    }
  }
  else {
    if (lVar7 != lVar3) {
      do {
        FUN_140274c62(lVar1,lVar7);
        lVar1 = lVar1 + 0x28;
        lVar7 = lVar7 + 0x28;
      } while (lVar7 != lVar3);
      lVar4 = local_58[1];
      lVar1 = local_50;
    }
    for (; local_70 = lVar1, lVar3 != lVar4; lVar3 = lVar3 + 0x28) {
      FUN_140274c62(lVar8,lVar3);
      lVar8 = lVar8 + 0x28;
      lVar1 = local_70;
    }
  }
  local_80 = 0;
  FUN_140274b50(local_58,local_50,uVar5,uVar9);
  FUN_140274bea(&local_88);
  return lVar10;
}

