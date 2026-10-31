/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801971be */

void FUN_1801971be(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  longlong param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined8 local_100;
  undefined1 local_f0 [52];
  undefined1 local_bc;
  ulonglong local_50;
  
  local_50 = DAT_180402640 ^ (ulonglong)auStack_128;
  uVar1 = FUN_1801974c8(param_2);
  uVar2 = FUN_1800fe7f8(uVar1);
  FUN_1801974ce(uVar2,param_2);
  if (param_5 == 0) {
    FUN_180195a16(local_f0);
  }
  else {
    FUN_1802a82f0(local_f0,param_5,0xa0);
  }
  local_108 = local_f0;
  local_bc = 1;
  local_100 = param_6;
  FUN_1801973f0(param_1,uVar2,uVar1,param_4);
  if (DAT_180402640 == (local_50 ^ (ulonglong)auStack_128)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_50 ^ (ulonglong)auStack_128);
}

