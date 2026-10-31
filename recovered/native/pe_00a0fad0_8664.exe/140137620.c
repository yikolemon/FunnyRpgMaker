/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140137620 */

void FUN_140137620(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 8) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffff7;
    FUN_140005242(param_2 + 0x108);
  }
  return;
}

