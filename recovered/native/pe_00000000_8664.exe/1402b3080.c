/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402b3080 */

longlong FUN_1402b3080(longlong *param_1,undefined8 param_2)

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
  longlong *local_88;
  longlong local_80;
  ulonglong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  undefined8 local_48;
  
  lVar2 = param_1[1];
  if (lVar2 != param_1[2]) {
    FUN_1402b32a8(lVar2,param_2);
    lVar2 = param_1[1];
    param_1[1] = lVar2 + 0xa0;
    return lVar2;
  }
  local_48 = 0xfffffffffffffffe;
  lVar6 = *param_1;
  uVar4 = (param_1[1] - lVar6 >> 5) * -0x3333333333333333 + 1;
  uVar1 = (param_1[2] - lVar6 >> 5) * -0x3333333333333333;
  uVar5 = 0x199999999999999 - (uVar1 >> 1);
  uVar8 = (uVar1 >> 1) + uVar1;
  if (uVar8 <= uVar4) {
    uVar8 = uVar4;
  }
  if (uVar5 <= uVar1 && uVar1 - uVar5 != 0) {
    uVar8 = 0x199999999999999;
  }
  if (0x199999999999999 < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_1402128f7();
  }
  local_80 = FUN_1402128b0(uVar8 * 0xa0);
  lVar7 = local_80 + (lVar2 - lVar6) + 0xa0;
  lVar9 = (lVar2 - lVar6) + local_80;
  local_88 = param_1;
  local_78 = uVar8;
  local_70 = lVar7;
  local_68 = lVar7;
  local_50 = local_80;
  FUN_1402b32a8(lVar9,param_2);
  lVar6 = *param_1;
  lVar3 = param_1[1];
  local_70 = lVar9;
  local_60 = lVar9;
  local_58 = param_1;
  lVar9 = local_50;
  if (lVar2 == lVar3) {
    for (; lVar6 != lVar2; lVar6 = lVar6 + 0xa0) {
      FUN_1402b32a8(lVar9,lVar6);
      lVar9 = lVar9 + 0xa0;
    }
  }
  else {
    if (lVar6 != lVar2) {
      do {
        FUN_1402b32a8(lVar9,lVar6);
        lVar6 = lVar6 + 0xa0;
        lVar9 = lVar9 + 0xa0;
      } while (lVar6 != lVar2);
      lVar3 = local_58[1];
      lVar9 = local_50;
    }
    for (; local_70 = lVar9, lVar2 != lVar3; lVar2 = lVar2 + 0xa0) {
      FUN_1402b32a8(lVar7,lVar2);
      lVar7 = lVar7 + 0xa0;
      lVar9 = local_70;
    }
  }
  local_80 = 0;
  FUN_1402b348c(local_58,local_50,uVar4,uVar8);
  lVar2 = local_60;
  FUN_1402b352e(&local_88);
  return lVar2;
}

