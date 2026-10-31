/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a2fdb */

void FUN_1801a2fdb(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_58;
  FUN_1801a3141();
  if ((DAT_180420d28 != 0) && (DAT_180420d30 != (longlong *)0x0)) {
    FUN_1801c7aa5();
    FUN_1801c939b();
    FUN_18019ff7a();
    FUN_1801092ec();
    (*DAT_18041f1a0)();
    FUN_180110262();
    local_30 = (longlong *)0x0;
    (**(code **)(*DAT_180420d30 + 0x2c8))(DAT_180420d30,1,&local_30,0);
    (**(code **)(*DAT_180420d30 + 0x108))(DAT_180420d30,1,&DAT_180420d40,0);
    uVar1 = FUN_180107f0e();
    FUN_1801c7c74(uVar1);
    if (local_30 != (longlong *)0x0) {
      (**(code **)(*DAT_180420d30 + 0x108))(DAT_180420d30,1,&local_30,0);
      (**(code **)(*local_30 + 0x10))();
    }
  }
  (*DAT_18041f1c8)(param_1,param_2,param_3);
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_58);
}

