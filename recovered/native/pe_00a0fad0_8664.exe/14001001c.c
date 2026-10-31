/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14001001c */

longlong * FUN_14001001c(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1401c9640 ^ (ulonglong)auStack_68;
  if (0x7ffffffffffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_14000626f();
  }
  uVar1 = param_1[3];
  uVar3 = param_2 | 7;
  local_40 = 0x7ffffffffffffffe;
  if (((uVar3 < 0x7fffffffffffffff) && (uVar1 <= 0x7ffffffffffffffe - (uVar1 >> 1))) &&
     (local_40 = (uVar1 >> 1) + uVar1, local_40 < uVar3)) {
    local_40 = uVar3;
  }
  lVar2 = FUN_140008b48(param_1,&local_40);
  param_1[2] = param_2;
  param_1[3] = local_40;
  FUN_140135ff0(lVar2,param_4,param_2 * 2);
  *(undefined2 *)(lVar2 + param_2 * 2) = 0;
  if (7 < uVar1) {
    FUN_140008b72(param_1,*param_1,uVar1);
  }
  *param_1 = lVar2;
  if (DAT_1401c9640 != (local_38 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_38 ^ (ulonglong)auStack_68);
  }
  return param_1;
}

