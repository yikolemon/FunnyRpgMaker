/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140137680 */

void FUN_140137680(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 0x20) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xffffffdf;
    FUN_140005242(param_2 + 0x188);
  }
  return;
}

