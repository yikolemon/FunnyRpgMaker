/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180080ffa */

undefined4 * FUN_180080ffa(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *local_78;
  undefined4 *local_70;
  ulonglong local_68;
  undefined4 *local_60;
  longlong local_58;
  undefined4 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  uVar8 = (param_1[1] - lVar1 >> 4) + 1;
  uVar6 = param_1[2] - lVar1 >> 4;
  uVar7 = (uVar6 >> 1) + uVar6;
  if (uVar7 <= uVar8) {
    uVar7 = uVar8;
  }
  if (0xfffffffffffffff - (uVar6 >> 1) < uVar6) {
    uVar7 = 0xfffffffffffffff;
  }
  if (uVar7 >> 0x3c == 0) {
    puVar5 = (undefined4 *)FUN_1800013e0(uVar7 << 4);
    lVar9 = (longlong)puVar5 + (param_2 - lVar1) + 0x10;
    local_60 = (undefined4 *)((param_2 - lVar1) + (longlong)puVar5);
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    *local_60 = *param_3;
    local_60[1] = uVar2;
    local_60[2] = uVar3;
    local_60[3] = uVar4;
    *(undefined1 *)param_3 = 0;
    *(undefined8 *)(param_3 + 2) = 0;
    local_78 = param_1;
    local_70 = puVar5;
    local_68 = uVar7;
    local_58 = lVar9;
    local_50 = local_60;
    if (param_2 == param_1[1]) {
      FUN_180080e78(*param_1,param_1[1],puVar5,param_1);
    }
    else {
      FUN_180080e78(*param_1,param_2,puVar5,param_1);
      local_60 = puVar5;
      FUN_180080e78(param_2,param_1[1],lVar9,param_1);
    }
    local_70 = (undefined4 *)0x0;
    FUN_180080ee6(param_1,puVar5,uVar8,uVar7);
    FUN_1800811bc(&local_78);
    return local_50;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180001427();
}

