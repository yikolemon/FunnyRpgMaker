/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400cf922 */

void Unwind_1400cf922(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x34f);
  uVar2 = *(undefined8 *)(param_2 + 0x338);
  *(undefined8 *)(param_2 + 0x330) = uVar2;
  *(undefined1 *)(param_2 + 0x34d) = 0;
  *(undefined1 *)(param_2 + 0x34c) = uVar1;
  FUN_14007bf0e(param_2 + 600);
  *(undefined8 *)(param_2 + 0x330) = uVar2;
  *(undefined1 *)(param_2 + 0x34d) = 0;
  *(undefined1 *)(param_2 + 0x34c) = uVar1;
  return;
}

