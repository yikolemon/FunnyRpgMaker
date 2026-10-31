/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403a7fdf */

void FUN_1403a7fdf(longlong param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  if (*(longlong *)(param_1 + 0x2b8) == 0) {
    uVar3 = FUN_1403af89a();
    thunk_FUN_1403a73e7(param_1,uVar3);
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
    FUN_1403aa4b7(param_1,((int)uVar2 >> 0x10 | uVar2) + 1,((int)uVar4 >> 0x10 | uVar4) + 1);
  }
  uVar3 = FUN_14030fcc8(0xf8);
  FUN_1403ab3ec(uVar3);
  *(undefined8 *)(param_1 + 0x2b0) = uVar3;
  pcVar1 = *(code **)(*(longlong *)(param_1 + 0x2b8) + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1);
  }
  FUN_1403a95a2(param_1);
  FUN_1403aab5e(param_1);
  FUN_1403aad30(param_1);
  FUN_1403ab020(param_1);
  FUN_1403a822f(param_1);
  FUN_1403aa477(param_1);
  FUN_1403ab590();
  return;
}

