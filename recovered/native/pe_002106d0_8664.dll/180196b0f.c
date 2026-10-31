/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180196b0f */

void FUN_180196b0f(longlong param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  if (*(longlong *)(param_1 + 0x2b8) == 0) {
    uVar3 = FUN_18019e3ca();
    thunk_FUN_180195f17(param_1,uVar3);
  }
  if ((*(longlong *)(param_1 + 0x38) == 0) ||
     (*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x28) == 0)) {
    uVar4 = *(int *)(param_1 + 0x10) - 1;
    uVar4 = (int)uVar4 >> 1 | uVar4;
    uVar4 = (int)uVar4 >> 2 | uVar4;
    uVar4 = (int)uVar4 >> 4 | uVar4;
    uVar4 = (int)uVar4 >> 8 | uVar4;
    uVar2 = *(int *)(param_1 + 0xc) - 1;
    uVar2 = (int)uVar2 >> 1 | uVar2;
    uVar2 = (int)uVar2 >> 2 | uVar2;
    uVar2 = (int)uVar2 >> 4 | uVar2;
    uVar2 = (int)uVar2 >> 8 | uVar2;
    FUN_180198fe7(param_1,((int)uVar2 >> 0x10 | uVar2) + 1,((int)uVar4 >> 0x10 | uVar4) + 1);
  }
  uVar3 = FUN_1800fe7f8(0xf8);
  FUN_180199f1c(uVar3);
  *(undefined8 *)(param_1 + 0x2b0) = uVar3;
  pcVar1 = *(code **)(*(longlong *)(param_1 + 0x2b8) + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1);
  }
  FUN_1801980d2(param_1);
  FUN_18019968e(param_1);
  FUN_180199860(param_1);
  FUN_180199b50(param_1);
  FUN_180196d5f(param_1);
  FUN_180198fa7(param_1);
  FUN_18019a0c0();
  return;
}

