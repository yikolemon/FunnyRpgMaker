/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000360a */

void Unwind_14000360a(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x899);
  uVar2 = *(undefined1 *)(param_2 + 0x89a);
  *(undefined1 *)(param_2 + 0x8b7) = uVar2;
  *(undefined1 *)(param_2 + 0x8b6) = uVar1;
  *(undefined1 *)(param_2 + 0x8b5) = uVar1;
  if (*(char *)(param_2 + 0x898) == '\x01') {
    FUN_140005690(param_2 + 0x6d0);
  }
  *(undefined1 *)(param_2 + 0x8b7) = uVar2;
  *(undefined1 *)(param_2 + 0x8b6) = uVar1;
  *(undefined1 *)(param_2 + 0x8b5) = uVar1;
  return;
}

