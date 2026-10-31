/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14009c238 */

undefined4 * FUN_14009c238(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong *local_78;
  undefined4 *local_70;
  ulonglong local_68;
  undefined4 *local_60;
  longlong local_58;
  undefined4 *local_50;
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
  local_50 = param_3;
  if (uVar4 >> 0x3e == 0) {
    puVar2 = (undefined4 *)FUN_140006280(uVar4 * 4);
    lVar6 = (longlong)puVar2 + (param_2 - lVar1) + 4;
    puVar7 = (undefined4 *)((param_2 - lVar1) + (longlong)puVar2);
    *puVar7 = *local_50;
    local_78 = param_1;
    local_70 = puVar2;
    local_68 = uVar4;
    local_60 = puVar7;
    local_58 = lVar6;
    if (param_2 == param_1[1]) {
      thunk_FUN_140069c44(*param_1,param_1[1],puVar2);
    }
    else {
      thunk_FUN_140069c44(*param_1,param_2,puVar2);
      local_60 = puVar2;
      thunk_FUN_140069c44(param_2,param_1[1],lVar6);
    }
    local_70 = (undefined4 *)0x0;
    FUN_140069b94(param_1,puVar2,uVar5,uVar4);
    FUN_140069bfe(&local_78);
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400062c7();
}

