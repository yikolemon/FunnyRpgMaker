/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14029244e */

undefined4 * FUN_14029244e(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *local_78;
  undefined4 *local_70;
  ulonglong local_68;
  undefined4 *local_60;
  longlong local_58;
  undefined4 *local_50;
  undefined8 local_48;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)param_1[2]) {
    uVar6 = param_2[1];
    *puVar1 = *param_2;
    puVar1[1] = uVar6;
    *(undefined1 *)param_2 = 0;
    param_2[1] = 0;
    puVar7 = (undefined4 *)param_1[1];
    param_1[1] = (longlong)(puVar7 + 4);
    return puVar7;
  }
  local_48 = 0xfffffffffffffffe;
  lVar2 = *param_1;
  uVar10 = (param_1[1] - lVar2 >> 4) + 1;
  uVar8 = param_1[2] - lVar2 >> 4;
  uVar9 = (uVar8 >> 1) + uVar8;
  if (uVar9 <= uVar10) {
    uVar9 = uVar10;
  }
  if (0xfffffffffffffff - (uVar8 >> 1) < uVar8) {
    uVar9 = 0xfffffffffffffff;
  }
  if (uVar9 >> 0x3c == 0) {
    puVar7 = (undefined4 *)FUN_1402128b0(uVar9 << 4);
    lVar11 = (longlong)puVar7 + ((longlong)puVar1 - lVar2) + 0x10;
    local_60 = (undefined4 *)(((longlong)puVar1 - lVar2) + (longlong)puVar7);
    uVar3 = *(undefined4 *)((longlong)param_2 + 4);
    uVar4 = *(undefined4 *)(param_2 + 1);
    uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
    *local_60 = *(undefined4 *)param_2;
    local_60[1] = uVar3;
    local_60[2] = uVar4;
    local_60[3] = uVar5;
    *(undefined1 *)param_2 = 0;
    param_2[1] = 0;
    local_78 = param_1;
    local_70 = puVar7;
    local_68 = uVar9;
    local_58 = lVar11;
    local_50 = local_60;
    if (puVar1 == (undefined8 *)param_1[1]) {
      FUN_140292348(*param_1,(undefined8 *)param_1[1],puVar7,param_1);
    }
    else {
      FUN_140292348(*param_1,puVar1,puVar7,param_1);
      local_60 = puVar7;
      FUN_140292348(puVar1,param_1[1],lVar11,param_1);
    }
    local_70 = (undefined4 *)0x0;
    FUN_1402923b6(param_1,puVar7,uVar10,uVar9);
    FUN_14029268c(&local_78);
    return local_50;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402128f7();
}

