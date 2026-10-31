/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140009072 */

longlong * FUN_140009072(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined2 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_1401c9640 ^ (ulonglong)auStack_68;
  lVar1 = param_1[2];
  if (0x7ffffffffffffffeU - lVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_14000626f();
  }
  uVar2 = param_1[3];
  uVar5 = param_2 + lVar1 | 7;
  local_48 = 0x7ffffffffffffffe;
  if (((uVar5 < 0x7fffffffffffffff) && (uVar2 <= 0x7ffffffffffffffe - (uVar2 >> 1))) &&
     (local_48 = (uVar2 >> 1) + uVar2, local_48 < uVar5)) {
    local_48 = uVar5;
  }
  lVar4 = FUN_140008b48(param_1,&local_48);
  param_1[2] = param_2 + lVar1;
  param_1[3] = local_48;
  if (uVar2 < 8) {
    FUN_140135ff0(lVar4,param_1,lVar1 * 2);
    *(undefined2 *)(lVar4 + lVar1 * 2) = param_4;
    *(undefined2 *)(lVar4 + 2 + lVar1 * 2) = 0;
  }
  else {
    lVar3 = *param_1;
    FUN_140135ff0(lVar4,lVar3,lVar1 * 2);
    *(undefined2 *)(lVar4 + lVar1 * 2) = param_4;
    *(undefined2 *)(lVar4 + 2 + lVar1 * 2) = 0;
    FUN_140008b72(param_1,lVar3,uVar2);
  }
  *param_1 = lVar4;
  if (DAT_1401c9640 != (local_40 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_40 ^ (ulonglong)auStack_68);
  }
  return param_1;
}

