/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e2732 */

void FUN_1400e2732(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
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
  
  local_50 = DAT_140f17b40 ^ (ulonglong)auStack_128;
  uVar1 = FUN_1400e2a3c(param_2);
  uVar2 = FUN_140077ab4(uVar1);
  FUN_1400e2a42(uVar2,param_2);
  if (param_5 == 0) {
    FUN_1400e0f8a(local_f0);
  }
  else {
    FUN_1401c5180(local_f0,param_5,0xa0);
  }
  local_108 = local_f0;
  local_bc = 1;
  local_100 = param_6;
  FUN_1400e2964(param_1,uVar2,uVar1,param_4);
  if (DAT_140f17b40 == (local_50 ^ (ulonglong)auStack_128)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_50 ^ (ulonglong)auStack_128);
}

