/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000b2d8 */

undefined8 *
FUN_14000b2d8(undefined8 *param_1,ulonglong param_2,undefined8 param_3,longlong param_4,
             undefined8 *param_5,longlong param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_78;
  lVar2 = param_1[2];
  if (0x7ffffffffffffffeU - lVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_14000263f();
  }
  uVar3 = param_1[3];
  uVar6 = param_2 + lVar2 | 7;
  local_50 = 0x7ffffffffffffffe;
  if (((uVar6 < 0x7fffffffffffffff) && (uVar3 <= 0x7ffffffffffffffe - (uVar3 >> 1))) &&
     (local_50 = (uVar3 >> 1) + uVar3, local_50 < uVar6)) {
    local_50 = uVar6;
  }
  puVar5 = (undefined8 *)FUN_140002c64(param_1,(longlong *)&local_50);
  param_1[2] = param_2 + lVar2;
  param_1[3] = local_50;
  if (uVar3 < 8) {
    FUN_1400b3550(puVar5,param_1,param_4 * 2);
    puVar1 = (undefined8 *)((longlong)puVar5 + param_4 * 2);
    FUN_1400b3550(puVar1,param_5,param_6 * 2);
    FUN_1400b3550((undefined8 *)((longlong)puVar1 + param_6 * 2),
                  (undefined8 *)((longlong)param_1 + param_4 * 2),(lVar2 - param_4) * 2 + 2);
  }
  else {
    puVar4 = (undefined8 *)*param_1;
    FUN_1400b3550(puVar5,puVar4,param_4 * 2);
    puVar1 = (undefined8 *)((longlong)puVar5 + param_4 * 2);
    FUN_1400b3550(puVar1,param_5,param_6 * 2);
    FUN_1400b3550((undefined8 *)(param_6 * 2 + (longlong)puVar1),
                  (undefined8 *)((longlong)puVar4 + param_4 * 2),(lVar2 - param_4) * 2 + 2);
    FUN_140002c8e(param_1,(longlong)puVar4,uVar3);
  }
  *param_1 = puVar5;
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStack_78);
  }
  return param_1;
}

