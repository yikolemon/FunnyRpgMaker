/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140169cf5 */

void FUN_140169cf5(longlong param_1)

{
  char cVar1;
  
  if ((*(ulonglong *)(param_1 + 0x18) < 0x11) &&
     (cVar1 = FUN_14016b25b(param_1,0x11), cVar1 == '\0')) {
    return;
  }
  *(undefined8 *)(param_1 + 0x20) = 0x11;
  return;
}

