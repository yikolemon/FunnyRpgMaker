/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400a39f8 */

undefined8 *
FUN_1400a39f8(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *local_80;
  undefined8 *local_78;
  ulonglong local_70;
  undefined8 *local_68;
  longlong local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  uVar6 = (param_1[1] - lVar1 >> 4) + 1;
  uVar4 = param_1[2] - lVar1 >> 4;
  uVar5 = (uVar4 >> 1) + uVar4;
  if (uVar5 <= uVar6) {
    uVar5 = uVar6;
  }
  if (0xfffffffffffffff - (uVar4 >> 1) < uVar4) {
    uVar5 = 0xfffffffffffffff;
  }
  local_58 = param_3;
  local_50 = param_4;
  if (uVar5 >> 0x3c == 0) {
    puVar3 = (undefined8 *)FUN_140006280(uVar5 << 4);
    lVar7 = (longlong)puVar3 + (param_2 - lVar1) + 0x10;
    puVar8 = (undefined8 *)((param_2 - lVar1) + (longlong)puVar3);
    uVar2 = *local_50;
    *puVar8 = *local_58;
    puVar8[1] = uVar2;
    local_80 = param_1;
    local_78 = puVar3;
    local_70 = uVar5;
    local_68 = puVar8;
    local_60 = lVar7;
    if (param_2 == param_1[1]) {
      thunk_FUN_140092f5e(*param_1,param_1[1],puVar3);
    }
    else {
      thunk_FUN_140092f5e(*param_1,param_2,puVar3);
      local_68 = puVar3;
      thunk_FUN_140092f5e(param_2,param_1[1],lVar7);
    }
    local_78 = (undefined8 *)0x0;
    FUN_1400a37fc(param_1,puVar3,uVar6,uVar5);
    FUN_14005a4f4(&local_80);
    return puVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400062c7();
}

