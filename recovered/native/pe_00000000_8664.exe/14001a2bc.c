/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001a2bc */

undefined8
FUN_14001a2bc(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4)

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
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  uVar1 = FUN_140015326(*param_2);
  local_48 = *param_4;
  uStack_40 = param_4[1];
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  FUN_14001a34e(uVar1,&local_58,&local_48,0);
  FUN_14001a559(param_1,uVar1,*param_2);
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_78)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_78);
}

