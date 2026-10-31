/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018545a */

bool __fastcall FUN_1018545a(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_18;
  local_14 = *param_3;
  local_18 = *param_2;
  piVar2 = (int *)FUN_1018315c(&local_18);
  iVar1 = *piVar2;
  piVar2 = (int *)FUN_1018315c(&local_14);
  if (DAT_10388d00 == (local_10 ^ (uint)&local_18)) {
    return iVar1 < *piVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

