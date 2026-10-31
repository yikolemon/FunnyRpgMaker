/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003bb7a */

void Unwind_14003bb7a(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x22a);
  uVar2 = *(undefined1 *)(param_2 + 0x22b);
  *(undefined1 *)(param_2 + 0x228) = uVar2;
  *(undefined1 *)(param_2 + 0x227) = uVar1;
  if (*(char *)(param_2 + 0x229) == '\x01') {
    FUN_140001056(param_2 + 0x60);
  }
  *(undefined1 *)(param_2 + 0x228) = uVar2;
  *(undefined1 *)(param_2 + 0x227) = uVar1;
  return;
}

