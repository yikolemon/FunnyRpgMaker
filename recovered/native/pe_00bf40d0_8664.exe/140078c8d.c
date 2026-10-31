/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140078c8d */

ulonglong FUN_140078c8d(longlong param_1,uint param_2,char *param_3,uint param_4)

{
  ulonglong uVar1;
  undefined1 auStack_48 [32];
  char *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  uVar1 = FUN_140071cf0(param_1,param_2,&local_28);
  if ((int)uVar1 == 0) {
    FUN_140021e80(param_3,local_28,param_4);
  }
  if (DAT_14012ea80 == (local_20 ^ (ulonglong)auStack_48)) {
    return uVar1 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_20 ^ (ulonglong)auStack_48);
}

