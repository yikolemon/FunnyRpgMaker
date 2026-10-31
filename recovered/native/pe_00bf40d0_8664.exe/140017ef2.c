/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140017ef2 */

void Unwind_140017ef2(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  HANDLE hObject;
  
  puVar1 = *(undefined8 **)(param_2 + 0x30);
  *puVar1 = NamedPipe::vftable;
  hObject = (HANDLE)puVar1[1];
  if (hObject != (HANDLE)0xffffffffffffffff) {
    CloseHandle(hObject);
    *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 8) = 0xffffffffffffffff;
  }
  return;
}

