/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18010129b */

void FUN_18010129b(int param_1,float param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  float fStack_c;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_38;
  puVar1 = (undefined4 *)(DAT_180419160 + 0xee8 + (longlong)param_1 * 0x10);
  local_18 = *puVar1;
  uStack_14 = puVar1[1];
  uStack_10 = puVar1[2];
  fStack_c = param_2 * *(float *)(DAT_180419160 + 0xdb4) * (float)puVar1[3];
  FUN_1800ff3d6();
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_38);
}

