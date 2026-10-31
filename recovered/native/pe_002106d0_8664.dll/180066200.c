/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180066200 */

undefined8 * FUN_180066200(longlong *param_1)

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
  longlong *plStack_80;
  undefined8 *puStack_78;
  ulonglong uStack_70;
  undefined8 *puStack_68;
  longlong lStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  lVar3 = param_1[1];
  if (lVar3 != param_1[2]) {
    puVar1 = (undefined8 *)FUN_180066214();
    return puVar1;
  }
  uStack_48 = 0xfffffffffffffffe;
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
    FUN_180001427();
  }
  puVar1 = (undefined8 *)FUN_1800013e0(uVar8 * 0x28);
  lVar6 = (longlong)puVar1 + (lVar3 - lVar7) + 0x28;
  puStack_68 = (undefined8 *)((lVar3 - lVar7) + (longlong)puVar1);
  puStack_68[2] = 0;
  puStack_68[3] = 0;
  *puStack_68 = 0;
  puStack_68[1] = 0;
  puStack_68[4] = 3;
  lVar7 = *param_1;
  lVar9 = param_1[1];
  lStack_60 = lVar6;
  puStack_58 = puStack_68;
  puStack_78 = puVar1;
  puStack_50 = puVar1;
  uStack_70 = uVar8;
  plStack_80 = param_1;
  if (lVar3 == lVar9) {
    for (; lVar7 != lVar3; lVar7 = lVar7 + 0x28) {
      FUN_18006648d(puVar1,lVar7);
      puVar1 = puVar1 + 5;
    }
  }
  else {
    if (lVar7 != lVar3) {
      do {
        FUN_18006648d(puVar1,lVar7);
        puVar1 = puVar1 + 5;
        lVar7 = lVar7 + 0x28;
      } while (lVar7 != lVar3);
      lVar9 = param_1[1];
      puVar1 = puStack_50;
    }
    for (; puStack_68 = puVar1, lVar3 != lVar9; lVar3 = lVar3 + 0x28) {
      FUN_18006648d(lVar6,lVar3);
      lVar6 = lVar6 + 0x28;
      puVar1 = puStack_68;
    }
  }
  puStack_78 = (undefined8 *)0x0;
  FUN_180063680(param_1,puStack_50,uVar4,uVar8);
  puVar1 = puStack_58;
  FUN_18006371a(&plStack_80);
  return puVar1;
}

