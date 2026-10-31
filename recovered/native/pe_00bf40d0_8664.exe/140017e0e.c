/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140017e0e */

void Unwind_140017e0e(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x40) = NamedPipe::vftable;
  if (*(HANDLE *)(param_2 + 0x48) != (HANDLE)0xffffffffffffffff) {
    CloseHandle(*(HANDLE *)(param_2 + 0x48));
  }
  return;
}

