/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10206d76 */

undefined4 __fastcall FUN_10206d76(undefined4 *param_1,char *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 uVar3;
  char *local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  pcVar2 = (char *)*param_1;
  local_18 = pcVar2;
  uVar1 = FUN_10206df2(10);
  uVar3 = 0;
  if (local_18 != pcVar2) {
    if ((local_18 < param_2) && (*local_18 == '#')) {
      pcVar2 = local_18 + 1;
      local_18 = pcVar2;
      uVar1 = FUN_10206df2(uVar1);
      if (local_18 == pcVar2) goto LAB_10206dcd;
    }
    *param_1 = local_18;
    uVar3 = uVar1;
  }
LAB_10206dcd:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_18)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

