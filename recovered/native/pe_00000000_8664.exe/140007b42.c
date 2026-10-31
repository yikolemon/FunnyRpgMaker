/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140007b42 */

undefined1 * FUN_140007b42(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  longlong *local_78;
  undefined1 *local_70;
  ulonglong local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  local_50 = param_3;
  if (param_1[1] - lVar1 != 0x7fffffffffffffff) {
    uVar4 = (param_1[1] - lVar1) + 1;
    uVar3 = param_1[2] - lVar1;
    uVar7 = (uVar3 >> 1) + uVar3;
    if (uVar7 <= uVar4) {
      uVar7 = uVar4;
    }
    if ((uVar3 >> 1 ^ 0x7fffffffffffffff) < uVar3) {
      uVar7 = 0x7fffffffffffffff;
    }
    puVar2 = (undefined1 *)FUN_140001fba(uVar7);
    puVar6 = puVar2 + (param_2 - lVar1) + 1;
    puVar5 = puVar2 + (param_2 - lVar1);
    *puVar5 = *local_50;
    local_78 = param_1;
    local_70 = puVar2;
    local_68 = uVar7;
    local_60 = puVar5;
    local_58 = puVar6;
    if (param_2 == param_1[1]) {
      thunk_FUN_140007d3e(*param_1,param_1[1],puVar2);
    }
    else {
      thunk_FUN_140007d3e(*param_1,param_2,puVar2);
      local_60 = puVar2;
      thunk_FUN_140007d3e(param_2,param_1[1],puVar6);
    }
    local_70 = (undefined1 *)0x0;
    FUN_140007c94(param_1,puVar2,uVar4,uVar7);
    FUN_140007cfc(&local_78);
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400066bc();
}

