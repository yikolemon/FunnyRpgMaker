/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019b936 */

void FUN_18019b936(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_38;
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
  uVar2 = 0xc;
  if (DAT_180327400 <= fVar1) {
    uVar2 = 0;
  }
  local_18 = 8;
  if (DAT_180327404 <= fVar1) {
    local_18 = uVar2;
  }
  local_10 = param_2;
  FUN_180193670(DAT_180327404,&local_10,fVar1 * DAT_1802de790,param_3);
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_38);
}

