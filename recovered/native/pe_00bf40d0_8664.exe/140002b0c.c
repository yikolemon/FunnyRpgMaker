/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140002b0c */

undefined8 *
FUN_140002b0c(undefined8 *param_1,ulonglong param_2,undefined8 param_3,longlong param_4,
             undefined2 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_78;
  lVar1 = param_1[2];
  if (0x7ffffffffffffffeU - lVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_14000263f();
  }
  uVar2 = param_1[3];
  uVar5 = param_2 + lVar1 | 7;
  local_50 = 0x7ffffffffffffffe;
  if (((uVar5 < 0x7fffffffffffffff) && (uVar2 <= 0x7ffffffffffffffe - (uVar2 >> 1))) &&
     (local_50 = (uVar2 >> 1) + uVar2, local_50 < uVar5)) {
    local_50 = uVar5;
  }
  puVar4 = (undefined8 *)FUN_140002c64(param_1,(longlong *)&local_50);
  param_1[2] = param_2 + lVar1;
  param_1[3] = local_50;
  if (uVar2 < 8) {
    FUN_1400b3550(puVar4,param_1,lVar1 * 2);
    if (param_4 != 0) {
      lVar6 = 0;
      do {
        *(undefined2 *)((longlong)puVar4 + lVar6 * 2 + lVar1 * 2) = param_5;
        lVar6 = lVar6 + 1;
      } while (param_4 != lVar6);
    }
    *(undefined2 *)((longlong)puVar4 + param_4 * 2 + lVar1 * 2) = 0;
  }
  else {
    puVar3 = (undefined8 *)*param_1;
    FUN_1400b3550(puVar4,puVar3,lVar1 * 2);
    if (param_4 != 0) {
      lVar6 = 0;
      do {
        *(undefined2 *)((longlong)puVar4 + lVar6 * 2 + lVar1 * 2) = param_5;
        lVar6 = lVar6 + 1;
      } while (param_4 != lVar6);
    }
    *(undefined2 *)((longlong)puVar4 + param_4 * 2 + lVar1 * 2) = 0;
    FUN_140002c8e(param_1,(longlong)puVar3,uVar2);
  }
  *param_1 = puVar4;
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStack_78);
  }
  return param_1;
}

