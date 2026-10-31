/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400cfa41 */

void Unwind_1400cfa41(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x34a);
  uVar2 = *(undefined8 *)(param_2 + 0x328);
  *(undefined8 *)(param_2 + 0x308) = uVar2;
  *(undefined1 *)(param_2 + 0x344) = uVar1;
  if (*(char *)(param_2 + 0x34b) == '\x01') {
    FUN_1400017de(param_2 + 0x220);
  }
  *(undefined8 *)(param_2 + 0x308) = uVar2;
  *(undefined1 *)(param_2 + 0x344) = uVar1;
  return;
}

