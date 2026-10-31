/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d1690 */

void Unwind_1800d1690(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x58) = NamedPipe::vftable;
  if (*(HANDLE *)(param_2 + 0x60) != (HANDLE)0xffffffffffffffff) {
    CloseHandle(*(HANDLE *)(param_2 + 0x60));
  }
  return;
}

