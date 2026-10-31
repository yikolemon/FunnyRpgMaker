/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14004e504 */

void FUN_14004e504(longlong *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 3) < 0xb) && ((0x47eU >> (*(byte *)(param_1 + 3) & 0x1f) & 1) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_140049b0a("Precision not allowed for this argument type.");
  }
  FUN_14004e36a(param_1,local_30);
  uVar1 = FUN_14004e582(local_30);
  *(undefined4 *)(*param_1 + 4) = uVar1;
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_58);
}

