/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400adb42 */

void Unwind_1400adb42(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x36a);
  uVar2 = *(undefined8 *)(param_2 + 0x338);
  *(undefined8 *)(param_2 + 0x318) = uVar2;
  *(undefined1 *)(param_2 + 0x364) = uVar1;
  if (*(char *)(param_2 + 0x36b) == '\x01') {
    FUN_1400017de(param_2 + 0x1b8);
  }
  *(undefined8 *)(param_2 + 0x318) = uVar2;
  *(undefined1 *)(param_2 + 0x364) = uVar1;
  return;
}

