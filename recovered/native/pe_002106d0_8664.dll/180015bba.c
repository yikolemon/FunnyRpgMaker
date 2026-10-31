/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180015bba */

void Unwind_180015bba(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  HANDLE hObject;
  
  puVar1 = *(undefined8 **)(param_2 + 0x28);
  *puVar1 = NamedPipe::vftable;
  hObject = (HANDLE)puVar1[1];
  if (hObject != (HANDLE)0xffffffffffffffff) {
    CloseHandle(hObject);
    *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 8) = 0xffffffffffffffff;
  }
  return;
}

