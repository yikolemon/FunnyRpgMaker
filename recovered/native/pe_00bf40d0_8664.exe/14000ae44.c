/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000ae44 */

undefined8 * FUN_14000ae44(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStack_68;
  lVar1 = param_1[2];
  if (0x7ffffffffffffffeU - lVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_14000263f();
  }
  uVar2 = param_1[3];
  uVar5 = param_2 + lVar1 | 7;
  local_40 = 0x7ffffffffffffffe;
  if (((uVar5 < 0x7fffffffffffffff) && (uVar2 <= 0x7ffffffffffffffe - (uVar2 >> 1))) &&
     (local_40 = (uVar2 >> 1) + uVar2, local_40 < uVar5)) {
    local_40 = uVar5;
  }
  puVar4 = (undefined8 *)FUN_140002c64(param_1,(longlong *)&local_40);
  param_1[2] = param_2 + lVar1;
  param_1[3] = local_40;
  if (uVar2 < 8) {
    FUN_1400b3550(puVar4,param_1,lVar1 * 2 + 2);
  }
  else {
    puVar3 = (undefined8 *)*param_1;
    FUN_1400b3550(puVar4,puVar3,lVar1 * 2 + 2);
    FUN_140002c8e(param_1,(longlong)puVar3,uVar2);
  }
  *param_1 = puVar4;
  if (DAT_14012ea80 != (local_38 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_38 ^ (ulonglong)auStack_68);
  }
  return param_1;
}

