/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003bc17 */

void Unwind_14003bc17(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x24e);
  *(undefined1 *)(param_2 + 0x259) = 0;
  *(undefined1 *)(param_2 + 600) = uVar1;
  *(undefined1 *)(param_2 + 599) = uVar1;
  if (*(char *)(param_2 + 0x24d) == '\x01') {
    FUN_140001056(param_2 + 0x100);
  }
  *(undefined1 *)(param_2 + 0x259) = 0;
  *(undefined1 *)(param_2 + 600) = uVar1;
  *(undefined1 *)(param_2 + 599) = uVar1;
  return;
}

