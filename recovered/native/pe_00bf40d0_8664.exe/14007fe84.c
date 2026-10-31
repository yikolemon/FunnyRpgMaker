/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007fe84 */

int FUN_14007fe84(longlong param_1,undefined8 *param_2,uint param_3,longlong *param_4)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38 [2];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14012ea80 ^ (ulonglong)auStack_78;
  local_48 = *param_2;
  uStack_40 = param_2[1];
  local_38[0] = param_2[2];
  FUN_1400801a6(&local_48);
  if (param_3 < 3) {
    iVar1 = FUN_14007f619(param_1,&local_50);
    if (iVar1 == 0) {
      iVar1 = FUN_14007f619(param_1,&local_58);
      if (iVar1 == 0) {
        *local_50 = local_48;
        local_50[1] = local_38[0];
        *(undefined4 *)(local_50 + 4) = 1;
        *local_58 = local_38[0];
        local_58[1] = local_28;
        *(undefined4 *)(local_58 + 4) = 1;
        local_50[5] = local_58;
        local_58[5] = *param_4;
        *param_4 = (longlong)local_50;
        iVar1 = 0;
      }
    }
  }
  else {
    iVar1 = FUN_14007fe84(param_1,&local_48,param_3 >> 1,param_4);
    if (iVar1 == 0) {
      iVar1 = FUN_14007fe84(param_1,local_38,param_3 >> 1,param_4);
    }
  }
  if (DAT_14012ea80 == (local_20 ^ (ulonglong)auStack_78)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_20 ^ (ulonglong)auStack_78);
}

