/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400cf9e0 */

void Unwind_1400cf9e0(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x345);
  uVar2 = *(undefined8 *)(param_2 + 0x310);
  *(undefined8 *)(param_2 + 0x328) = uVar2;
  *(undefined1 *)(param_2 + 0x34b) = 0;
  *(undefined1 *)(param_2 + 0x34a) = uVar1;
  FUN_14007bf0e(param_2 + 0x220);
  *(undefined8 *)(param_2 + 0x328) = uVar2;
  *(undefined1 *)(param_2 + 0x34b) = 0;
  *(undefined1 *)(param_2 + 0x34a) = uVar1;
  return;
}

