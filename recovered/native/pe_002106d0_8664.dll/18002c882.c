/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18002c882 */

longlong FUN_18002c882(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  iVar1 = FUN_18002bc90();
  if (iVar1 < 0) {
    *(undefined4 *)(param_2 + 0x10) = 0;
  }
  else {
    FUN_180024f12(param_1,param_2,iVar1);
  }
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_48)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_48);
}

