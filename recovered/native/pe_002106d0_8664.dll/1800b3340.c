/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b3340 */

undefined8 * FUN_1800b3340(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *local_70;
  undefined8 *local_68;
  ulonglong local_60;
  undefined8 *local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  uVar5 = (param_1[1] - lVar1 >> 4) + 1;
  uVar3 = param_1[2] - lVar1 >> 4;
  uVar4 = (uVar3 >> 1) + uVar3;
  if (uVar4 <= uVar5) {
    uVar4 = uVar5;
  }
  if (0xfffffffffffffff - (uVar3 >> 1) < uVar3) {
    uVar4 = 0xfffffffffffffff;
  }
  if (uVar4 >> 0x3c == 0) {
    puVar2 = (undefined8 *)FUN_1800013e0(uVar4 << 4);
    lVar6 = (longlong)puVar2 + (param_2 - lVar1) + 0x10;
    puVar7 = (undefined8 *)((param_2 - lVar1) + (longlong)puVar2);
    *puVar7 = 0;
    puVar7[1] = 0;
    local_70 = param_1;
    local_68 = puVar2;
    local_60 = uVar4;
    local_58 = puVar7;
    local_50 = lVar6;
    if (param_2 == param_1[1]) {
      thunk_FUN_18001bde0(*param_1,param_1[1],puVar2);
    }
    else {
      thunk_FUN_18001bde0(*param_1,param_2,puVar2);
      local_58 = puVar2;
      thunk_FUN_18001bde0(param_2,param_1[1],lVar6);
    }
    local_68 = (undefined8 *)0x0;
    FUN_1800b32d0(param_1,puVar2,uVar5,uVar4);
    FUN_180016958(&local_70);
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180001427();
}

