/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140106d41 */

void FUN_140106d41(undefined4 param_1)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_140f17b40 ^ (ulonglong)auStack_38;
  local_14 = param_1;
  thunk_FUN_1400af8bf("_IsEnabled",&local_14,0x1000000);
  thunk_FUN_1400af8bf("_IsVisible",&local_14,0x2000000);
  thunk_FUN_1400af8bf("_IsSorted",&local_14,0x4000000);
  thunk_FUN_1400af8bf("_IsHovered",&local_14,0x8000000);
  if (DAT_140f17b40 == (local_10 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_10 ^ (ulonglong)auStack_38);
}

