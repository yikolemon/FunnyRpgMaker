/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180094222 */

void FUN_180094222(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  
  uVar1 = *(int *)(param_2 + 8) - 8;
  uVar3 = 0xe;
  if (uVar1 < 4) {
    uVar3 = *(undefined4 *)(&DAT_1802b7bb8 + (ulonglong)uVar1 * 4);
  }
  puVar2 = (undefined8 *)FUN_180239630(0x28);
  *(undefined4 *)(puVar2 + 1) = uVar3;
  *(undefined8 *)((longlong)puVar2 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x14) = 0;
  *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
  *puVar2 = std::_Node_end_group::vftable;
  puVar2[4] = param_2;
  FUN_18001d276(param_1,puVar2);
  return;
}

