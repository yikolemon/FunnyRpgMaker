/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e6eaa */

void FUN_1400e6eaa(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_140f17b40 ^ (ulonglong)auStack_38;
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
  uVar2 = 0xc;
  if (DAT_140e8c7d0 <= fVar1) {
    uVar2 = 0;
  }
  local_18 = 8;
  if (DAT_140e8c7d4 <= fVar1) {
    local_18 = uVar2;
  }
  local_10 = param_2;
  FUN_1400debe4(DAT_140e8c7d4,&local_10,fVar1 * DAT_14021001c,param_3);
  if (DAT_140f17b40 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_8 ^ (ulonglong)auStack_38);
}

