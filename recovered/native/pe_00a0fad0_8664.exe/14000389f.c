/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000389f */

void Unwind_14000389f(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x8b6);
  uVar2 = *(undefined1 *)(param_2 + 0x8b7);
  *(undefined1 *)(param_2 + 0x8ab) = uVar2;
  *(undefined1 *)(param_2 + 0x8aa) = uVar1;
  if (*(char *)(param_2 + 0x8b5) == '\x01') {
    FUN_140005690(param_2 + 0x6f0);
  }
  *(undefined1 *)(param_2 + 0x8ab) = uVar2;
  *(undefined1 *)(param_2 + 0x8aa) = uVar1;
  return;
}

