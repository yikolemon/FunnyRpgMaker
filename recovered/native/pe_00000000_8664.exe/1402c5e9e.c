/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402c5e9e */

longlong FUN_1402c5e9e(longlong *param_1,undefined8 param_2)

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
  longlong *local_80;
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  undefined8 local_48;
  
  lVar3 = param_1[1];
  if (lVar3 != param_1[2]) {
    FUN_1402c60b8(lVar3,param_2);
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
  local_50 = param_2;
  if (0x666666666666666 < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_1402128f7();
  }
  lVar1 = FUN_1402128b0(uVar9 * 0x28);
  lVar8 = lVar1 + (lVar3 - lVar7) + 0x28;
  lVar10 = (lVar3 - lVar7) + lVar1;
  local_80 = param_1;
  local_78 = lVar1;
  local_70 = uVar9;
  local_68 = lVar8;
  local_60 = lVar8;
  local_58 = param_1;
  FUN_1402c60b8(lVar10,local_50);
  lVar7 = *local_58;
  lVar4 = local_58[1];
  local_68 = lVar10;
  local_50 = lVar1;
  if (lVar3 == lVar4) {
    for (; lVar7 != lVar3; lVar7 = lVar7 + 0x28) {
      FUN_1402c6224(lVar1,lVar7);
      lVar1 = lVar1 + 0x28;
    }
  }
  else {
    if (lVar7 != lVar3) {
      do {
        FUN_1402c6224(lVar1,lVar7);
        lVar1 = lVar1 + 0x28;
        lVar7 = lVar7 + 0x28;
      } while (lVar7 != lVar3);
      lVar4 = local_58[1];
      lVar1 = local_50;
    }
    for (; local_68 = lVar1, lVar3 != lVar4; lVar3 = lVar3 + 0x28) {
      FUN_1402c6224(lVar8,lVar3);
      lVar8 = lVar8 + 0x28;
      lVar1 = local_68;
    }
  }
  local_78 = 0;
  FUN_1402c6112(local_58,local_50,uVar5,uVar9);
  FUN_1402c61ac(&local_80);
  return lVar10;
}

