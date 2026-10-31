/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005d67a */

void FUN_14005d67a(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  
  lVar1 = param_1 + 0x38;
  uVar2 = FUN_14005da44(lVar1);
  cVar5 = FUN_14005da4a(param_1);
  if (cVar5 == '\0') {
    if (*(int *)(param_1 + 0x70) != 0x7c) {
      return;
    }
    uVar3 = FUN_14005dca0(lVar1);
    FUN_14005d714(lVar1,uVar3);
  }
  if (*(int *)(param_1 + 0x70) == 0x7c) {
    uVar3 = FUN_14005dcaa(lVar1,uVar2);
    do {
      FUN_14005ddac(param_1);
      cVar5 = FUN_14005da4a(param_1);
      if (cVar5 == '\0') {
        uVar4 = FUN_14005dca0(lVar1);
        FUN_14005d714(lVar1,uVar4);
      }
      FUN_14005dde8(lVar1,uVar2,uVar3);
    } while (*(int *)(param_1 + 0x70) == 0x7c);
  }
  return;
}

