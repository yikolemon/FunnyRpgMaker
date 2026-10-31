/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001698c */

longlong * FUN_14001698c(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  if (0x7ffffffffffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140002673();
  }
  uVar1 = param_1[3];
  uVar3 = param_2 | 7;
  local_40 = 0x7ffffffffffffffe;
  if (((uVar3 < 0x7fffffffffffffff) && (uVar1 <= 0x7ffffffffffffffe - (uVar1 >> 1))) &&
     (local_40 = (uVar1 >> 1) + uVar1, local_40 < uVar3)) {
    local_40 = uVar3;
  }
  lVar2 = FUN_140002684(param_1,&local_40);
  param_1[2] = param_2;
  param_1[3] = local_40;
  FUN_1401c5180(lVar2,param_4,param_2 * 2);
  *(undefined2 *)(lVar2 + param_2 * 2) = 0;
  if (7 < uVar1) {
    FUN_140016a7a(param_1,*param_1,uVar1);
  }
  *param_1 = lVar2;
  if (DAT_140f17b40 != (local_38 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_38 ^ (ulonglong)auStack_68);
  }
  return param_1;
}

