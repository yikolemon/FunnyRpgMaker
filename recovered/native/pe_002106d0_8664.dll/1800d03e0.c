/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d03e0 */

void Unwind_1800d03e0(undefined8 param_1,longlong param_2)

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

