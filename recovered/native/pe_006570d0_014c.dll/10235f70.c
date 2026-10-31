/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10235f70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10235f70(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  LOCK();
  _DAT_1038a774 = _DAT_1038a774 + 1;
  UNLOCK();
  *param_1 = &DAT_1038a77c;
  param_1[1] = &PTR_vftable_1038a770;
  return;
}

