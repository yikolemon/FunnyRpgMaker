/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001d1e2 */

void __fastcall FUN_1001d1e2(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = FUN_1001d5ac();
  cVar1 = FUN_1001d5b0();
  if (cVar1 == '\0') {
    if (*(int *)(param_1 + 0x48) != 0x7c) {
      return;
    }
    uVar3 = FUN_1001d7e4();
    FUN_1001d25a(uVar3);
  }
  if (*(int *)(param_1 + 0x48) == 0x7c) {
    uVar3 = FUN_1001d7ec(uVar2);
    do {
      FUN_1001d8ea();
      cVar1 = FUN_1001d5b0();
      if (cVar1 == '\0') {
        uVar4 = FUN_1001d7e4();
        FUN_1001d25a(uVar4);
      }
      FUN_1001d912(uVar2,uVar3);
    } while (*(int *)(param_1 + 0x48) == 0x7c);
  }
  return;
}

