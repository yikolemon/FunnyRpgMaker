/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400822b1 */

undefined4 FUN_1400822b1(longlong *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar3 = FUN_140020a41((longlong)param_1,(int)param_1[1] - 4);
  uVar4 = 0;
  if ((int)uVar3 == 0) {
    uVar2 = FUN_14002142d(param_1,&local_2c);
    uVar4 = 0;
    if (local_2c == 0) {
      uVar4 = uVar2;
    }
    FUN_140020a41((longlong)param_1,uVar1);
  }
  if (DAT_14012ea80 == (local_28 ^ (ulonglong)auStack_58)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_28 ^ (ulonglong)auStack_58);
}

