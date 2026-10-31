/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d14e5 */

int FUN_1801d14e5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_68;
  undefined4 local_60 [6];
  undefined8 local_48;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_98;
  local_60[0] = 4;
  local_48 = param_2;
  iVar1 = FUN_1801ca52e(param_1,local_60,&local_68);
  if (iVar1 == 0) {
    local_78 = param_3;
    iVar1 = FUN_1801d0f5d();
    FUN_1801ca684(local_68,0);
  }
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_98)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_98);
}

