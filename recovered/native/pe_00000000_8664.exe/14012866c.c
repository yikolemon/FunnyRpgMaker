/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012866c */

undefined8 * FUN_14012866c(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *local_78;
  undefined8 *local_70;
  ulonglong local_68;
  undefined8 *local_60;
  longlong local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  uVar5 = (param_1[1] - lVar1 >> 3) + 1;
  uVar3 = param_1[2] - lVar1 >> 3;
  uVar4 = (uVar3 >> 1) + uVar3;
  if (uVar4 <= uVar5) {
    uVar4 = uVar5;
  }
  if (0x1fffffffffffffff - (uVar3 >> 1) < uVar3) {
    uVar4 = 0x1fffffffffffffff;
  }
  local_50 = param_3;
  if (uVar4 >> 0x3d == 0) {
    puVar2 = (undefined8 *)FUN_140001fba(uVar4 * 8);
    lVar6 = (longlong)puVar2 + (param_2 - lVar1) + 8;
    puVar7 = (undefined8 *)((param_2 - lVar1) + (longlong)puVar2);
    *puVar7 = *local_50;
    local_78 = param_1;
    local_70 = puVar2;
    local_68 = uVar4;
    local_60 = puVar7;
    local_58 = lVar6;
    if (param_2 == param_1[1]) {
      thunk_FUN_14000d5ca(*param_1,param_1[1],puVar2);
    }
    else {
      thunk_FUN_14000d5ca(*param_1,param_2,puVar2);
      local_60 = puVar2;
      thunk_FUN_14000d5ca(param_2,param_1[1],lVar6);
    }
    local_70 = (undefined8 *)0x0;
    FUN_14000d51a(param_1,puVar2,uVar5,uVar4);
    FUN_14000d584(&local_78);
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140002001();
}

