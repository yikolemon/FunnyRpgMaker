/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400a39ca */

undefined8 * FUN_1400a39ca(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plStack_80;
  undefined8 *puStack_78;
  ulonglong uStack_70;
  undefined8 *puStack_68;
  longlong lStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)param_1[2]) {
    uVar2 = *param_3;
    *puVar1 = *param_2;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)param_1[1];
    param_1[1] = (longlong)(puVar1 + 2);
    return puVar1;
  }
  uStack_48 = 0xfffffffffffffffe;
  lVar3 = *param_1;
  uVar7 = (param_1[1] - lVar3 >> 4) + 1;
  uVar5 = param_1[2] - lVar3 >> 4;
  uVar6 = (uVar5 >> 1) + uVar5;
  if (uVar6 <= uVar7) {
    uVar6 = uVar7;
  }
  if (0xfffffffffffffff - (uVar5 >> 1) < uVar5) {
    uVar6 = 0xfffffffffffffff;
  }
  puStack_58 = param_2;
  puStack_50 = param_3;
  if (uVar6 >> 0x3c == 0) {
    puVar4 = (undefined8 *)FUN_140006280(uVar6 << 4);
    lVar8 = (longlong)puVar4 + ((longlong)puVar1 - lVar3) + 0x10;
    puVar9 = (undefined8 *)(((longlong)puVar1 - lVar3) + (longlong)puVar4);
    uVar2 = *puStack_50;
    *puVar9 = *puStack_58;
    puVar9[1] = uVar2;
    plStack_80 = param_1;
    puStack_78 = puVar4;
    uStack_70 = uVar6;
    puStack_68 = puVar9;
    lStack_60 = lVar8;
    if (puVar1 == (undefined8 *)param_1[1]) {
      thunk_FUN_140092f5e(*param_1,(undefined8 *)param_1[1],puVar4);
    }
    else {
      thunk_FUN_140092f5e(*param_1,puVar1,puVar4);
      puStack_68 = puVar4;
      thunk_FUN_140092f5e(puVar1,param_1[1],lVar8);
    }
    puStack_78 = (undefined8 *)0x0;
    FUN_1400a37fc(param_1,puVar4,uVar7,uVar6);
    FUN_14005a4f4(&plStack_80);
    return puVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400062c7();
}

