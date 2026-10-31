/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801633da */

undefined4 * FUN_1801633da(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong *local_80;
  undefined4 *local_78;
  ulonglong local_70;
  undefined4 *local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  uVar5 = (param_1[1] - lVar1 >> 2) + 1;
  uVar3 = param_1[2] - lVar1 >> 2;
  uVar4 = (uVar3 >> 1) + uVar3;
  if (uVar4 <= uVar5) {
    uVar4 = uVar5;
  }
  if (0x3fffffffffffffff - (uVar3 >> 1) < uVar3) {
    uVar4 = 0x3fffffffffffffff;
  }
  local_58 = param_3;
  if (uVar4 >> 0x3e == 0) {
    puVar2 = (undefined4 *)FUN_1800013e0(uVar4 * 4);
    lVar6 = (longlong)puVar2 + (param_2 - lVar1) + 4;
    local_4c = 0;
    local_80 = param_1;
    local_78 = puVar2;
    local_70 = uVar4;
    local_68 = (undefined4 *)lVar6;
    local_60 = lVar6;
    FUN_180057604(&DAT_1802b0ea8,local_58);
    puVar7 = (undefined4 *)((param_2 - lVar1) + (longlong)puVar2);
    *puVar7 = local_4c;
    local_68 = puVar7;
    if (param_2 == param_1[1]) {
      thunk_FUN_18001fd6c(*param_1,param_1[1],puVar2);
    }
    else {
      thunk_FUN_18001fd6c(*param_1,param_2,puVar2);
      local_68 = puVar2;
      thunk_FUN_18001fd6c(param_2,param_1[1],lVar6);
    }
    local_78 = (undefined4 *)0x0;
    FUN_18001fcbc(param_1,puVar2,uVar5,uVar4);
    FUN_18001fd26(&local_80);
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180001427();
}

