/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140008482 */

void FUN_140008482(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x201;
  *(undefined8 *)(param_1 + 0x20) = 6;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  lVar1 = FUN_1400863a0(0x10);
  plVar2 = FUN_140086860('\x01');
  *(longlong **)(lVar1 + 8) = plVar2;
  *(longlong *)(param_1 + 0x40) = lVar1;
  return;
}

