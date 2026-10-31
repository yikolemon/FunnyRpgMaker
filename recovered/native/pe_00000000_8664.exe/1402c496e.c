/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402c496e */

undefined8 * FUN_1402c496e(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

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
  longlong *local_80;
  undefined8 *local_78;
  ulonglong local_70;
  undefined8 *local_68;
  longlong local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)param_1[2]) {
    uVar2 = *param_3;
    *puVar1 = *param_2;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)param_1[1];
    param_1[1] = (longlong)(puVar1 + 2);
    return puVar1;
  }
  local_48 = 0xfffffffffffffffe;
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
  local_58 = param_2;
  local_50 = param_3;
  if (uVar6 >> 0x3c == 0) {
    puVar4 = (undefined8 *)FUN_1402128b0(uVar6 << 4);
    lVar8 = (longlong)puVar4 + ((longlong)puVar1 - lVar3) + 0x10;
    puVar9 = (undefined8 *)(((longlong)puVar1 - lVar3) + (longlong)puVar4);
    uVar2 = *local_50;
    *puVar9 = *local_58;
    puVar9[1] = uVar2;
    local_80 = param_1;
    local_78 = puVar4;
    local_70 = uVar6;
    local_68 = puVar9;
    local_60 = lVar8;
    if (puVar1 == (undefined8 *)param_1[1]) {
      thunk_FUN_14022d2b0(*param_1,(undefined8 *)param_1[1],puVar4);
    }
    else {
      thunk_FUN_14022d2b0(*param_1,puVar1,puVar4);
      local_68 = puVar4;
      thunk_FUN_14022d2b0(puVar1,param_1[1],lVar8);
    }
    local_78 = (undefined8 *)0x0;
    FUN_1402c47a0(param_1,puVar4,uVar7,uVar6);
    FUN_140227e28(&local_80);
    return puVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402128f7();
}

