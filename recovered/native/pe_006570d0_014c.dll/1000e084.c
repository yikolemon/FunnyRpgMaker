/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000e084 */

void __fastcall FUN_1000e084(int param_1)

{
  LOCK();
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  UNLOCK();
  return;
}

