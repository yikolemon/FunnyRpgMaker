/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140276042 */

undefined4 * FUN_140276042(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  longlong *local_78;
  undefined4 *local_70;
  ulonglong local_68;
  undefined4 *local_60;
  longlong local_58;
  undefined4 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  uVar8 = (param_1[1] - lVar1 >> 3) * -0x5555555555555555 + 1;
  uVar6 = (param_1[2] - lVar1 >> 3) * -0x5555555555555555;
  uVar9 = 0xaaaaaaaaaaaaaaa - (uVar6 >> 1);
  uVar7 = (uVar6 >> 1) + uVar6;
  if (uVar7 <= uVar8) {
    uVar7 = uVar8;
  }
  if (uVar9 <= uVar6 && uVar6 - uVar9 != 0) {
    uVar7 = 0xaaaaaaaaaaaaaaa;
  }
  local_50 = param_3;
  if (uVar7 < 0xaaaaaaaaaaaaaab) {
    puVar5 = (undefined4 *)FUN_1402128b0(uVar7 * 0x18);
    lVar10 = (longlong)puVar5 + (param_2 - lVar1) + 0x18;
    puVar11 = (undefined4 *)((param_2 - lVar1) + (longlong)puVar5);
    *(undefined8 *)(puVar11 + 4) = *(undefined8 *)(local_50 + 4);
    uVar2 = local_50[1];
    uVar3 = local_50[2];
    uVar4 = local_50[3];
    *puVar11 = *local_50;
    puVar11[1] = uVar2;
    puVar11[2] = uVar3;
    puVar11[3] = uVar4;
    local_78 = param_1;
    local_70 = puVar5;
    local_68 = uVar7;
    local_60 = puVar11;
    local_58 = lVar10;
    if (param_2 == param_1[1]) {
      thunk_FUN_14022ad28(*param_1,param_1[1],puVar5);
    }
    else {
      thunk_FUN_14022ad28(*param_1,param_2,puVar5);
      local_60 = puVar5;
      thunk_FUN_14022ad28(param_2,param_1[1],lVar10);
    }
    local_70 = (undefined4 *)0x0;
    FUN_14022ac6c(param_1,puVar5,uVar8,uVar7);
    FUN_14022acde(&local_78);
    return puVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402128f7();
}

