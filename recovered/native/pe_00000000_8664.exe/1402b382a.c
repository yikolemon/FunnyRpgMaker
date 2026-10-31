/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402b382a */

longlong FUN_1402b382a(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *local_88;
  longlong local_80;
  ulonglong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  longlong *local_58;
  longlong local_50;
  undefined8 local_48;
  
  lVar2 = param_1[1];
  if (lVar2 != param_1[2]) {
    FUN_1402b3a30(lVar2,param_2);
    lVar2 = param_1[1];
    param_1[1] = lVar2 + 0x80;
    return lVar2;
  }
  local_48 = 0xfffffffffffffffe;
  lVar5 = *param_1;
  local_60 = (param_1[1] - lVar5 >> 7) + 1;
  uVar1 = param_1[2] - lVar5 >> 7;
  uVar7 = (uVar1 >> 1) + uVar1;
  if (uVar7 <= local_60) {
    uVar7 = local_60;
  }
  if (0x1ffffffffffffff - (uVar1 >> 1) < uVar1) {
    uVar7 = 0x1ffffffffffffff;
  }
  if (uVar7 >> 0x39 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402128f7();
  }
  local_80 = FUN_1402128b0(uVar7 << 7);
  lVar6 = local_80 + (lVar2 - lVar5) + 0x80;
  lVar8 = (lVar2 - lVar5) + local_80;
  local_88 = param_1;
  local_78 = uVar7;
  local_70 = lVar6;
  local_68 = lVar6;
  local_50 = local_80;
  FUN_1402b3a30(lVar8,param_2);
  lVar5 = *param_1;
  lVar4 = param_1[1];
  local_70 = lVar8;
  local_58 = param_1;
  lVar3 = local_50;
  if (lVar2 == lVar4) {
    for (; lVar5 != lVar2; lVar5 = lVar5 + 0x80) {
      FUN_1402b3a30(lVar3,lVar5);
      lVar3 = lVar3 + 0x80;
    }
  }
  else {
    if (lVar5 != lVar2) {
      do {
        FUN_1402b3a30(lVar3,lVar5);
        lVar5 = lVar5 + 0x80;
        lVar3 = lVar3 + 0x80;
      } while (lVar5 != lVar2);
      lVar4 = local_58[1];
      lVar3 = local_50;
    }
    for (; local_70 = lVar3, lVar2 != lVar4; lVar2 = lVar2 + 0x80) {
      FUN_1402b3a30(lVar6,lVar2);
      lVar6 = lVar6 + 0x80;
      lVar3 = local_70;
    }
  }
  local_80 = 0;
  FUN_1402b3b9c(local_58,local_50,local_60,uVar7);
  FUN_1402b3c34(&local_88);
  return lVar8;
}

