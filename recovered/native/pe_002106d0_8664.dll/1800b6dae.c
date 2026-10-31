/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b6dae */

undefined1 * FUN_1800b6dae(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  longlong *local_78;
  undefined1 *local_70;
  ulonglong local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  uVar5 = (param_1[1] - lVar1 >> 1) + 1;
  uVar3 = param_1[2] - lVar1 >> 1;
  uVar4 = (uVar3 >> 1) + uVar3;
  if (uVar4 <= uVar5) {
    uVar4 = uVar5;
  }
  if ((uVar3 >> 1 ^ 0x7fffffffffffffff) < uVar3) {
    uVar4 = 0x7fffffffffffffff;
  }
  local_50 = param_3;
  if (-1 < (longlong)uVar4) {
    puVar2 = (undefined1 *)FUN_1800013e0(uVar4 * 2);
    puVar6 = puVar2 + (param_2 - lVar1) + 2;
    puVar7 = puVar2 + (param_2 - lVar1);
    *puVar7 = *local_50;
    puVar7[1] = 0;
    local_78 = param_1;
    local_70 = puVar2;
    local_68 = uVar4;
    local_60 = puVar7;
    local_58 = puVar6;
    if (param_2 == param_1[1]) {
      thunk_FUN_18004688a(*param_1,param_1[1],puVar2);
    }
    else {
      thunk_FUN_18004688a(*param_1,param_2,puVar2);
      local_60 = puVar2;
      thunk_FUN_18004688a(param_2,param_1[1],puVar6);
    }
    local_70 = (undefined1 *)0x0;
    FUN_1800b6cdc(param_1,puVar2,uVar5,uVar4);
    FUN_1800b6d46(&local_78);
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180001427();
}

