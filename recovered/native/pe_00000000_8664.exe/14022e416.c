/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14022e416 */

void FUN_14022e416(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  
  lVar1 = param_1 + 0x38;
  uVar2 = FUN_14022e7e0(lVar1);
  cVar5 = FUN_14022e7e6(param_1);
  if (cVar5 == '\0') {
    if (*(int *)(param_1 + 0x70) != 0x7c) {
      return;
    }
    uVar3 = FUN_14022ea38(lVar1);
    FUN_14022e4b0(lVar1,uVar3);
  }
  if (*(int *)(param_1 + 0x70) == 0x7c) {
    uVar3 = FUN_14022ea42(lVar1,uVar2);
    do {
      FUN_14022eb44(param_1);
      cVar5 = FUN_14022e7e6(param_1);
      if (cVar5 == '\0') {
        uVar4 = FUN_14022ea38(lVar1);
        FUN_14022e4b0(lVar1,uVar4);
      }
      FUN_14022eb7c(lVar1,uVar2,uVar3);
    } while (*(int *)(param_1 + 0x70) == 0x7c);
  }
  return;
}

