/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400940b4 */

void FUN_1400940b4(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  
  uVar1 = *(int *)(param_2 + 8) - 8;
  uVar3 = 0xe;
  if (uVar1 < 4) {
    uVar3 = *(undefined4 *)(&DAT_140163140 + (ulonglong)uVar1 * 4);
  }
  puVar2 = (undefined8 *)FUN_1400d3680(0x28);
  *(undefined4 *)(puVar2 + 1) = uVar3;
  *(undefined8 *)((longlong)puVar2 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x14) = 0;
  *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
  *puVar2 = std::_Node_end_group::vftable;
  puVar2[4] = param_2;
  FUN_14009434a(param_1,puVar2);
  return;
}

