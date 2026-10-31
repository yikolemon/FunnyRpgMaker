/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14009e59a */

void FUN_14009e59a(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_1401c9640 ^ (ulonglong)auStack_58;
  param_2 = param_2 + 0x58;
  FUN_14008cb80(param_2,param_1);
  local_2c = CONCAT31(local_2c._1_3_,
                      (char)((uint)(*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8)) >> 2));
  FUN_14008cb80(param_2);
  puVar2 = *(undefined4 **)(param_1 + 8);
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  if (puVar2 != puVar1) {
    do {
      local_2c = *puVar2;
      FUN_14009e652(param_2,&local_2c);
      puVar2 = puVar2 + 1;
    } while (puVar2 != puVar1);
  }
  local_2c = 0xffffffff;
  FUN_14009e716(param_2,&DAT_1401cc7a0);
  if (DAT_1401c9640 == (local_28 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_28 ^ (ulonglong)auStack_58);
}

