/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102206e6 */

void __fastcall FUN_102206e6(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int local_1c;
  int iStack_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_1c;
  if (0x8000 < *param_1) {
    param_4 = param_4 * param_3;
    if (param_1[param_4 * 4 + param_2 * 4] + -0x10000 < *param_1) {
      local_1c = param_2 * 0x10000 + param_1[param_4 * 4 + param_2 * 4 + 1];
      iStack_18 = param_3 * 0x10000 + param_1[param_4 * 4 + param_2 * 4 + 2];
      iVar1 = FUN_101c5201(&local_1c);
      if (iVar1 < *param_1) {
        *param_1 = iVar1;
        *(ulonglong *)(param_1 + 1) = CONCAT44(iStack_18,local_1c);
      }
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_1c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

