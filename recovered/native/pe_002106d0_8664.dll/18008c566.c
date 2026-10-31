/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008c566 */

void FUN_18008c566(longlong param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [43];
  undefined1 local_2d;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_58;
  local_2c = param_2[2] - *param_2;
  FUN_18008ca8a(param_1 + 0x58);
  puVar2 = *(undefined1 **)param_2;
  puVar1 = *(undefined1 **)(param_2 + 2);
  if (puVar2 != puVar1) {
    do {
      local_2d = *puVar2;
      FUN_18007f392(param_1 + 0x58,&local_2d);
      puVar2 = puVar2 + 1;
    } while (puVar2 != puVar1);
  }
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_58);
}

