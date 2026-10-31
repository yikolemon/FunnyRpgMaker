/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10235b30 */

void FUN_10235b30(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  LOCK();
  DAT_1038a7dc = DAT_1038a7dc + 1;
  UNLOCK();
  *param_1 = &DAT_1038a7e4;
  param_1[1] = &PTR_vftable_1038a7d8;
  return;
}

