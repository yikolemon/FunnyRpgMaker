/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006050a */

void Unwind_14006050a(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x85);
  *(undefined1 *)(param_2 + 0x84) = uVar1;
  if (*(char *)(param_2 + 0x86) == '\x01') {
    FUN_140005242(param_2 + 0x60);
  }
  *(undefined1 *)(param_2 + 0x84) = uVar1;
  return;
}

