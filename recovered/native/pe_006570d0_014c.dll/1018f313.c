/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018f313 */

void FUN_1018f313(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x294) == 0) {
    uVar2 = FUN_10196a84();
    FUN_1018e77e(uVar2);
  }
  if ((*(int *)(param_1 + 0x30) == 0) || (*(int *)(*(int *)(param_1 + 0x30) + 0x28) == 0)) {
    uVar3 = *(int *)(param_1 + 0x10) - 1;
    uVar3 = (int)uVar3 >> 1 | uVar3;
    uVar3 = (int)uVar3 >> 2 | uVar3;
    uVar3 = (int)uVar3 >> 4 | uVar3;
    uVar3 = (int)uVar3 >> 8 | uVar3;
    uVar4 = *(int *)(param_1 + 0xc) - 1;
    uVar4 = (int)uVar4 >> 1 | uVar4;
    uVar4 = (int)uVar4 >> 2 | uVar4;
    uVar4 = (int)uVar4 >> 4 | uVar4;
    uVar4 = (int)uVar4 >> 8 | uVar4;
    FUN_10191561(param_1,((int)uVar4 >> 0x10 | uVar4) + 1,((int)uVar3 >> 0x10 | uVar3) + 1);
  }
  uVar2 = FUN_100fa1fa(0xd8);
  FUN_1019236a();
  *(undefined4 *)(param_1 + 0x290) = uVar2;
  pcVar1 = *(code **)(*(int *)(param_1 + 0x294) + 4);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1);
  }
  FUN_10190745();
  FUN_10191be7(param_1);
  FUN_10191dae();
  FUN_10191ffc();
  FUN_1018f55d(param_1);
  FUN_1019151f(param_1);
  FUN_10192535();
  return;
}

