/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140003a0a */

void Unwind_140003a0a(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x8a8);
  uVar2 = *(undefined1 *)(param_2 + 0x8a9);
  *(undefined1 *)(param_2 + 0x8a6) = uVar2;
  *(undefined1 *)(param_2 + 0x8a5) = uVar1;
  if (*(char *)(param_2 + 0x8a7) == '\x01') {
    FUN_140005690(param_2 + 0x790);
  }
  *(undefined1 *)(param_2 + 0x8a6) = uVar2;
  *(undefined1 *)(param_2 + 0x8a5) = uVar1;
  return;
}

