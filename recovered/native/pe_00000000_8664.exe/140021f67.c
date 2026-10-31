/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140021f67 */

undefined8
FUN_140021f67(longlong param_1,longlong param_2,uint *param_3,undefined8 param_4,undefined8 param_5)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_31;
  undefined8 local_30;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  if (param_1 + 1 == param_2) {
    local_31 = 1;
    FUN_14001b296(&local_30,"invalid precision");
                    /* WARNING: Subroutine does not return */
    FUN_14018f0a0(&local_30,&DAT_140ee3c60);
  }
  local_40 = param_5;
  local_48 = param_4;
  FUN_14002210b(&local_30,param_1 + 1,param_2,param_3 + 3);
  *param_3 = local_28 << 8 | *param_3 & 0xfffffcff;
  if (DAT_140f17b40 != (local_18 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_18 ^ (ulonglong)auStack_68);
  }
  return local_30;
}

