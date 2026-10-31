/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14002173a */

void FUN_14002173a(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  iVar1 = FUN_1400217c6(param_1 + 0x20);
  if (iVar1 < 0) {
    local_29 = 1;
    FUN_14001b296(&local_28,"argument not found");
                    /* WARNING: Subroutine does not return */
    FUN_14018f0a0(&local_28,&DAT_140ee3c60);
  }
  if (DAT_140f17b40 != (local_10 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_10 ^ (ulonglong)auStack_58);
  }
  return;
}

