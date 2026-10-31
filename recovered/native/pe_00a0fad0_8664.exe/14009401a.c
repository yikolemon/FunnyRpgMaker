/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14009401a */

void FUN_14009401a(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  
  lVar1 = param_1 + 0x38;
  uVar2 = FUN_1400943e4(lVar1);
  cVar5 = FUN_1400943ea(param_1);
  if (cVar5 == '\0') {
    if (*(int *)(param_1 + 0x70) != 0x7c) {
      return;
    }
    uVar3 = FUN_140094640(lVar1);
    FUN_1400940b4(lVar1,uVar3);
  }
  if (*(int *)(param_1 + 0x70) == 0x7c) {
    uVar3 = FUN_14009464a(lVar1,uVar2);
    do {
      FUN_14009474c(param_1);
      cVar5 = FUN_1400943ea(param_1);
      if (cVar5 == '\0') {
        uVar4 = FUN_140094640(lVar1);
        FUN_1400940b4(lVar1,uVar4);
      }
      FUN_140094788(lVar1,uVar2,uVar3);
    } while (*(int *)(param_1 + 0x70) == 0x7c);
  }
  return;
}

