/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008f042 */

longlong *
FUN_14008f042(longlong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4,
             longlong param_5,undefined8 param_6,longlong param_7)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1401c9640 ^ (ulonglong)auStack_78;
  lVar2 = param_1[2];
  if (0x7ffffffffffffffeU - lVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_14000626f();
  }
  uVar3 = param_1[3];
  uVar6 = param_2 + lVar2 | 7;
  local_50 = 0x7ffffffffffffffe;
  if (((uVar6 < 0x7fffffffffffffff) && (uVar3 <= 0x7ffffffffffffffe - (uVar3 >> 1))) &&
     (local_50 = (uVar3 >> 1) + uVar3, local_50 < uVar6)) {
    local_50 = uVar6;
  }
  lVar5 = FUN_140008b48(param_1,&local_50);
  param_1[2] = param_2 + lVar2;
  param_1[3] = local_50;
  if (uVar3 < 8) {
    FUN_140135ff0(lVar5,param_1,param_4 * 2);
    lVar1 = lVar5 + param_4 * 2;
    FUN_140135ff0(lVar1,param_6,param_7 * 2);
    FUN_140135ff0(lVar1 + param_7 * 2,(longlong)param_1 + param_5 * 2 + param_4 * 2,
                  ((lVar2 - param_5) - param_4) * 2 + 2);
  }
  else {
    lVar4 = *param_1;
    FUN_140135ff0(lVar5,lVar4,param_4 * 2);
    lVar1 = lVar5 + param_4 * 2;
    FUN_140135ff0(lVar1,param_6,param_7 * 2);
    FUN_140135ff0(param_7 * 2 + lVar1,lVar4 + param_4 * 2 + param_5 * 2,
                  ((lVar2 - param_5) - param_4) * 2 + 2);
    FUN_140008b72(param_1,lVar4,uVar3);
  }
  *param_1 = lVar5;
  if (DAT_1401c9640 != (local_48 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_48 ^ (ulonglong)auStack_78);
  }
  return param_1;
}

