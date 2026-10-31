/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180024c6e */

undefined8
FUN_180024c6e(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_78;
  uVar1 = FUN_1800188ac(*param_2);
  local_48 = *param_4;
  uStack_40 = param_4[1];
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  FUN_180024d00(uVar1,&local_58,&local_48,0);
  FUN_180024f0b(param_1,uVar1,*param_2);
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_78)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_78);
}

