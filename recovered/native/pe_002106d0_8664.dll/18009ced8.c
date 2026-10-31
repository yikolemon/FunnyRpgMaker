/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18009ced8 */

void FUN_18009ced8(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_58;
  param_2 = param_2 + 0x58;
  FUN_18007f392(param_2,param_1);
  local_2c = CONCAT31(local_2c._1_3_,
                      (char)((uint)(*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8)) >> 2));
  FUN_18007f392(param_2);
  puVar2 = *(undefined4 **)(param_1 + 8);
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  if (puVar2 != puVar1) {
    do {
      local_2c = *puVar2;
      FUN_18008ca8a(param_2,&local_2c);
      puVar2 = puVar2 + 1;
    } while (puVar2 != puVar1);
  }
  local_2c = 0xffffffff;
  FUN_18008cdc4(param_2,&DAT_180417b98);
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_58);
}

