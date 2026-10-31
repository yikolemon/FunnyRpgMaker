/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801989d7 */

void FUN_1801989d7(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  longlong lVar2;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  float local_48;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined8 local_34;
  undefined8 uStack_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_78;
  pbVar1 = (byte *)FUN_18019abe2(param_2,0x20);
  if (pbVar1 == (byte *)0x0) {
    if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_78)) {
      FUN_18019abe2(param_2,9);
      return;
    }
  }
  else {
    *pbVar1 = *pbVar1 & 0xfd;
    lVar2 = FUN_18019abe2(param_2,9);
    if (lVar2 == 0) {
      local_34 = 0;
      uStack_2c = 0;
      local_44 = 0;
      uStack_3c = 0;
      local_24 = 0xffffffff;
      local_4c = 0x240;
      local_48 = *(float *)(pbVar1 + 4) * DAT_1802dbb50;
      FUN_180197c73(param_1,param_2,0);
    }
    if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_78)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_78);
}

