/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400180bc */

void Unwind_1400180bc(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x28);
  *puVar1 = NamedPipe::vftable;
  if ((HANDLE)puVar1[1] != (HANDLE)0xffffffffffffffff) {
    CloseHandle((HANDLE)puVar1[1]);
    puVar1[1] = 0xffffffffffffffff;
  }
  return;
}

