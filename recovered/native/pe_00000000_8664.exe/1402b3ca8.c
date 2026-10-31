/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402b3ca8 */

longlong FUN_1402b3ca8(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
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
  
  lVar2 = param_1[1];
  if (lVar2 != param_1[2]) {
    FUN_1402b3eb0(lVar2,param_2);
    lVar2 = param_1[1];
    param_1[1] = lVar2 + 0x58;
    return lVar2;
  }
  local_48 = 0xfffffffffffffffe;
  lVar7 = *param_1;
  uVar5 = (param_1[1] - lVar7 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
  uVar1 = (param_1[2] - lVar7 >> 3) * 0x2e8ba2e8ba2e8ba3;
  uVar6 = 0x2e8ba2e8ba2e8ba - (uVar1 >> 1);
  uVar9 = (uVar1 >> 1) + uVar1;
  if (uVar9 <= uVar5) {
    uVar9 = uVar5;
  }
  if (uVar6 <= uVar1 && uVar1 - uVar6 != 0) {
    uVar9 = 0x2e8ba2e8ba2e8ba;
  }
  if (0x2e8ba2e8ba2e8ba < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_1402128f7();
  }
  local_78 = FUN_1402128b0(uVar9 * 0x58);
  lVar8 = local_78 + (lVar2 - lVar7) + 0x58;
  lVar10 = (lVar2 - lVar7) + local_78;
  local_80 = param_1;
  local_70 = uVar9;
  local_68 = lVar8;
  local_60 = lVar8;
  local_50 = local_78;
  FUN_1402b40bd(lVar10,param_2);
  lVar7 = *param_1;
  lVar4 = param_1[1];
  local_68 = lVar10;
  local_58 = param_1;
  lVar3 = local_50;
  if (lVar2 == lVar4) {
    for (; lVar7 != lVar2; lVar7 = lVar7 + 0x58) {
      FUN_1402b40bd(lVar3,lVar7);
      lVar3 = lVar3 + 0x58;
    }
  }
  else {
    if (lVar7 != lVar2) {
      do {
        FUN_1402b40bd(lVar3,lVar7);
        lVar7 = lVar7 + 0x58;
        lVar3 = lVar3 + 0x58;
      } while (lVar7 != lVar2);
      lVar4 = local_58[1];
      lVar3 = local_50;
    }
    for (; local_68 = lVar3, lVar2 != lVar4; lVar2 = lVar2 + 0x58) {
      FUN_1402b40bd(lVar8,lVar2);
      lVar8 = lVar8 + 0x58;
      lVar3 = local_68;
    }
  }
  local_78 = 0;
  FUN_1402b3fb4(local_58,local_50,uVar5,uVar9);
  FUN_1402b404c(&local_80);
  return lVar10;
}

