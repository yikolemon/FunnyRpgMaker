/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fb0b4 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1800fb0b4(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined1 auStack_4058 [32];
  undefined4 local_4038;
  undefined4 local_4030;
  undefined1 local_4028 [16416];
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_4058;
  local_4030 = param_5;
  local_4038 = param_4;
  FUN_1800f97bc(local_4028,param_1,param_2,param_3);
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_4058)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_4058);
}

