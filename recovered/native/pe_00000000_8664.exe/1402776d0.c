/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402776d0 */

undefined8 * FUN_1402776d0(longlong *param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *local_80;
  undefined8 *local_78;
  ulonglong local_70;
  undefined8 *local_68;
  longlong local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  lVar3 = param_1[1];
  if (lVar3 != param_1[2]) {
    puVar1 = (undefined8 *)param_1[1];
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 3;
    puVar1 = (undefined8 *)param_1[1];
    param_1[1] = (longlong)(puVar1 + 5);
    return puVar1;
  }
  local_48 = 0xfffffffffffffffe;
  lVar7 = *param_1;
  uVar4 = (param_1[1] - lVar7 >> 3) * -0x3333333333333333 + 1;
  uVar2 = (param_1[2] - lVar7 >> 3) * -0x3333333333333333;
  uVar5 = 0x666666666666666 - (uVar2 >> 1);
  uVar8 = (uVar2 >> 1) + uVar2;
  if (uVar8 <= uVar4) {
    uVar8 = uVar4;
  }
  if (uVar5 <= uVar2 && uVar2 - uVar5 != 0) {
    uVar8 = 0x666666666666666;
  }
  if (0x666666666666666 < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_1402128f7();
  }
  puVar1 = (undefined8 *)FUN_1402128b0(uVar8 * 0x28);
  lVar6 = (longlong)puVar1 + (lVar3 - lVar7) + 0x28;
  local_68 = (undefined8 *)((lVar3 - lVar7) + (longlong)puVar1);
  local_68[2] = 0;
  local_68[3] = 0;
  *local_68 = 0;
  local_68[1] = 0;
  local_68[4] = 3;
  lVar7 = *param_1;
  lVar9 = param_1[1];
  local_60 = lVar6;
  local_58 = local_68;
  local_78 = puVar1;
  local_50 = puVar1;
  local_70 = uVar8;
  local_80 = param_1;
  if (lVar3 == lVar9) {
    for (; lVar7 != lVar3; lVar7 = lVar7 + 0x28) {
      FUN_14027795d(puVar1,lVar7);
      puVar1 = puVar1 + 5;
    }
  }
  else {
    if (lVar7 != lVar3) {
      do {
        FUN_14027795d(puVar1,lVar7);
        puVar1 = puVar1 + 5;
        lVar7 = lVar7 + 0x28;
      } while (lVar7 != lVar3);
      lVar9 = param_1[1];
      puVar1 = local_50;
    }
    for (; local_68 = puVar1, lVar3 != lVar9; lVar3 = lVar3 + 0x28) {
      FUN_14027795d(lVar6,lVar3);
      lVar6 = lVar6 + 0x28;
      puVar1 = local_68;
    }
  }
  local_78 = (undefined8 *)0x0;
  FUN_140274b50(param_1,local_50,uVar4,uVar8);
  puVar1 = local_58;
  FUN_140274bea(&local_80);
  return puVar1;
}

