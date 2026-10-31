/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400cf983 */

void Unwind_1400cf983(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x34c);
  uVar2 = *(undefined8 *)(param_2 + 0x330);
  *(undefined8 *)(param_2 + 0x310) = uVar2;
  *(undefined1 *)(param_2 + 0x345) = uVar1;
  if (*(char *)(param_2 + 0x34d) == '\x01') {
    FUN_1400017de(param_2 + 600);
  }
  *(undefined8 *)(param_2 + 0x310) = uVar2;
  *(undefined1 *)(param_2 + 0x345) = uVar1;
  return;
}

