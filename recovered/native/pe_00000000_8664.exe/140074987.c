/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140074987 */

void FUN_140074987(undefined1 *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  
  puVar2 = &LAB_1400756a8;
  if (param_1 != (undefined1 *)0x0) {
    puVar2 = param_1;
  }
  FUN_1400744c6(1);
  cVar1 = FUN_14006de10(2,puVar2);
  if (cVar1 != '\0') {
    return;
  }
  FUN_14006de10(1,puVar2);
  return;
}

