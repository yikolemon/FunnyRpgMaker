/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003ba39 */

void Unwind_14003ba39(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x250);
  uVar2 = *(undefined1 *)(param_2 + 0x251);
  *(undefined1 *)(param_2 + 0x25d) = uVar2;
  *(undefined1 *)(param_2 + 0x25c) = 0;
  *(undefined1 *)(param_2 + 0x25b) = uVar1;
  *(undefined1 *)(param_2 + 0x25a) = uVar1;
  if (*(char *)(param_2 + 0x24f) == '\x01') {
    FUN_140001056(param_2 + 0x140);
  }
  *(undefined1 *)(param_2 + 0x25d) = uVar2;
  *(undefined1 *)(param_2 + 0x25c) = 0;
  *(undefined1 *)(param_2 + 0x25b) = uVar1;
  *(undefined1 *)(param_2 + 0x25a) = uVar1;
  return;
}

