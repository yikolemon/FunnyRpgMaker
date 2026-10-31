/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140031bc7 */

void Unwind_140031bc7(undefined8 param_1,longlong param_2)

{
  if (*(HLOCAL *)(param_2 + 0xd8) != (HLOCAL)0x0) {
    LocalFree(*(HLOCAL *)(param_2 + 0xd8));
  }
  return;
}

