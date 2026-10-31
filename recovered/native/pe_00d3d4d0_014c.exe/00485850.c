/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00485850 */

undefined4 __cdecl FUN_00485850(char param_1)

{
  undefined4 in_EAX;
  
  if (param_1 == '\0') {
    FUN_00494560();
    in_EAX = FUN_004957a0();
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

