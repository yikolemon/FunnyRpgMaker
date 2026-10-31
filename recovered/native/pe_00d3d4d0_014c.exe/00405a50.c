/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00405a50 */

void __fastcall FUN_00405a50(int param_1)

{
  LOCK();
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  UNLOCK();
  return;
}

