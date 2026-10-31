/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017ad39 */

int FUN_14017ad39(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  iVar1 = FUN_140173d9c(param_1,param_2,&local_28);
  if (iVar1 == 0) {
    FUN_14012ea51(param_3,local_28,param_4);
  }
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_48)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_48);
}

