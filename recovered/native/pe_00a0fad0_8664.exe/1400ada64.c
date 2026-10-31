/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400ada64 */

void Unwind_1400ada64(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x36c);
  uVar2 = *(undefined8 *)(param_2 + 0x340);
  *(undefined8 *)(param_2 + 800) = uVar2;
  *(undefined1 *)(param_2 + 0x365) = uVar1;
  if (*(char *)(param_2 + 0x36d) == '\x01') {
    FUN_1400017de(param_2 + 0x1f0);
  }
  *(undefined8 *)(param_2 + 800) = uVar2;
  *(undefined1 *)(param_2 + 0x365) = uVar1;
  return;
}

