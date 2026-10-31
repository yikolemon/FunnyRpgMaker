/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001cf46 */

void FUN_18001cf46(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  
  lVar1 = param_1 + 0x38;
  uVar2 = FUN_18001d310(lVar1);
  cVar5 = FUN_18001d316(param_1);
  if (cVar5 == '\0') {
    if (*(int *)(param_1 + 0x70) != 0x7c) {
      return;
    }
    uVar3 = FUN_18001d568(lVar1);
    FUN_18001cfe0(lVar1,uVar3);
  }
  if (*(int *)(param_1 + 0x70) == 0x7c) {
    uVar3 = FUN_18001d572(lVar1,uVar2);
    do {
      FUN_18001d674(param_1);
      cVar5 = FUN_18001d316(param_1);
      if (cVar5 == '\0') {
        uVar4 = FUN_18001d568(lVar1);
        FUN_18001cfe0(lVar1,uVar4);
      }
      FUN_18001d6ac(lVar1,uVar2,uVar3);
    } while (*(int *)(param_1 + 0x70) == 0x7c);
  }
  return;
}

