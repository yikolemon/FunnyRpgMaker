/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ae172 */

undefined4 __thiscall FUN_100ae172(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_14;
  piVar1 = param_1 + 4;
  if (7 < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  iVar2 = (int)param_1 + *piVar1 * 2;
  local_14 = FUN_100020d5(param_1,iVar2);
  local_10 = iVar2 - local_14 >> 1;
  FUN_10002056(&local_14,0);
  if (DAT_10388d00 == (local_c ^ (uint)&local_14)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

