/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c103d */

void FUN_1801c103d(undefined4 param_1)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_38;
  local_14 = param_1;
  thunk_FUN_18013698f("_IsEnabled",&local_14,0x1000000);
  thunk_FUN_18013698f("_IsVisible",&local_14,0x2000000);
  thunk_FUN_18013698f("_IsSorted",&local_14,0x4000000);
  thunk_FUN_18013698f("_IsHovered",&local_14,0x8000000);
  if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_38);
}

