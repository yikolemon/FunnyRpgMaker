/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18002a900 */

longlong *
FUN_18002a900(longlong *param_1,longlong param_2,uint *param_3,longlong param_4,ulonglong param_5,
             undefined8 param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_68;
  uVar1 = 0;
  if (param_5 <= param_3[2]) {
    uVar1 = param_3[2] - param_5;
  }
  uVar3 = uVar1 >> ((&DAT_180385fae)[*param_3 >> 3 & 7] & 0x3f);
  uVar2 = param_4 + *(longlong *)(param_2 + 8) + (*param_3 >> 0xf & 7) * uVar1;
  if (*(ulonglong *)(param_2 + 0x10) < uVar2) {
    (**(code **)(param_2 + 0x18))(param_2,uVar2);
  }
  if (uVar3 != 0) {
    FUN_180027adf(&local_48,param_2,uVar3,param_3);
    param_2 = local_48;
  }
  FUN_18002aa0a(param_6,&local_48,param_2);
  if (uVar1 != uVar3) {
    FUN_180027adf(&local_48,local_48,uVar1 - uVar3,param_3);
  }
  *param_1 = local_48;
  if (DAT_180402640 == (local_40 ^ (ulonglong)auStack_68)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_40 ^ (ulonglong)auStack_68);
}

