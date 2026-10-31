/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140007ef0 */

undefined8 *
FUN_140007ef0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,longlong param_4,
             longlong param_5,undefined2 param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_78;
  lVar1 = param_1[2];
  if (0x7ffffffffffffffeU - lVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_14000263f();
  }
  uVar2 = param_1[3];
  uVar6 = param_2 + lVar1 | 7;
  local_50 = 0x7ffffffffffffffe;
  if (((uVar6 < 0x7fffffffffffffff) && (uVar2 <= 0x7ffffffffffffffe - (uVar2 >> 1))) &&
     (local_50 = (uVar2 >> 1) + uVar2, local_50 < uVar6)) {
    local_50 = uVar6;
  }
  local_58 = param_4;
  puVar5 = (undefined8 *)FUN_140002c64(param_1,(longlong *)&local_50);
  lVar4 = local_58;
  param_1[2] = param_2 + lVar1;
  param_1[3] = local_50;
  if (uVar2 < 8) {
    FUN_1400b3550(puVar5,param_1,local_58 * 2);
    if (param_5 != 0) {
      lVar7 = 0;
      do {
        *(undefined2 *)((longlong)puVar5 + lVar7 * 2 + lVar4 * 2) = param_6;
        lVar7 = lVar7 + 1;
      } while (param_5 != lVar7);
    }
    FUN_1400b3550((undefined8 *)((longlong)puVar5 + param_5 * 2 + lVar4 * 2),
                  (undefined8 *)((longlong)param_1 + lVar4 * 2),(lVar1 - lVar4) * 2 + 2);
  }
  else {
    puVar3 = (undefined8 *)*param_1;
    FUN_1400b3550(puVar5,puVar3,local_58 * 2);
    if (param_5 != 0) {
      lVar7 = 0;
      do {
        *(undefined2 *)((longlong)puVar5 + lVar7 * 2 + lVar4 * 2) = param_6;
        lVar7 = lVar7 + 1;
      } while (param_5 != lVar7);
    }
    FUN_1400b3550((undefined8 *)((longlong)puVar5 + param_5 * 2 + lVar4 * 2),
                  (undefined8 *)((longlong)puVar3 + lVar4 * 2),(lVar1 - lVar4) * 2 + 2);
    FUN_140002c8e(param_1,(longlong)puVar3,uVar2);
  }
  *param_1 = puVar5;
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStack_78);
  }
  return param_1;
}

