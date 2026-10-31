/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14005ab00 */

undefined8 * FUN_14005ab00(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1401c9640 ^ (ulonglong)auStack_68;
  lVar1 = param_1[2];
  if (0x7ffffffffffffffeU - lVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_14000626f();
  }
  uVar2 = param_1[3];
  uVar5 = param_2 + lVar1 | 7;
  local_40 = 0x7ffffffffffffffe;
  if (((uVar5 < 0x7fffffffffffffff) && (uVar2 <= 0x7ffffffffffffffe - (uVar2 >> 1))) &&
     (local_40 = (uVar2 >> 1) + uVar2, local_40 < uVar5)) {
    local_40 = uVar5;
  }
  uVar4 = FUN_140008b48(param_1,&local_40);
  param_1[2] = param_2 + lVar1;
  param_1[3] = local_40;
  if (uVar2 < 8) {
    FUN_140135ff0(uVar4,param_1,lVar1 * 2 + 2);
  }
  else {
    uVar3 = *param_1;
    FUN_140135ff0(uVar4,uVar3,lVar1 * 2 + 2);
    FUN_140008b72(param_1,uVar3,uVar2);
  }
  *param_1 = uVar4;
  if (DAT_1401c9640 != (local_38 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_38 ^ (ulonglong)auStack_68);
  }
  return param_1;
}

