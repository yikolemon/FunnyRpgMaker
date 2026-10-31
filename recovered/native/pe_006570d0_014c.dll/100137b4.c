/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100137b4 */

void Unwind_100137b4(void)

{
  undefined4 *puVar1;
  HANDLE hObject;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
  *puVar1 = NamedPipe::vftable;
  hObject = (HANDLE)puVar1[1];
  if (hObject != (HANDLE)0xffffffff) {
    CloseHandle(hObject);
    *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 4) = 0xffffffff;
  }
  return;
}

