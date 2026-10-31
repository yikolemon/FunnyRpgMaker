/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101902be */

bool __thiscall FUN_101902be(int param_1,ushort param_2)

{
  if ((uint)param_2 < *(uint *)(param_1 + 0x18)) {
    return *(ushort *)(*(int *)(param_1 + 0x20) + (uint)param_2 * 2) < 0xfffe;
  }
  return false;
}

