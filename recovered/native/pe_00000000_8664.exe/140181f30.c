/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140181f30 */

undefined8 FUN_140181f30(undefined8 param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38 [2];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_38[0] = *(undefined8 *)(param_2 + 4);
  FUN_140182252();
  if (param_3 < 3) {
    uVar1 = FUN_1401816c5(param_1,&local_50);
    if ((int)uVar1 == 0) {
      uVar1 = FUN_1401816c5(param_1,&local_58);
      if ((int)uVar1 == 0) {
        *local_50 = CONCAT44(uStack_44,local_48);
        local_50[1] = local_38[0];
        *(undefined4 *)(local_50 + 4) = 1;
        *local_58 = local_38[0];
        local_58[1] = local_28;
        *(undefined4 *)(local_58 + 4) = 1;
        local_50[5] = local_58;
        local_58[5] = *param_4;
        *param_4 = local_50;
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = FUN_140181f30(param_1,&local_48,param_3 >> 1,param_4);
    if ((int)uVar1 == 0) {
      uVar1 = FUN_140181f30(param_1,local_38,param_3 >> 1,param_4);
    }
  }
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_78)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_78);
}

