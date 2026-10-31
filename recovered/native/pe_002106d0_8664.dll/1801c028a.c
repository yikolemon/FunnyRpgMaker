/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c028a */

void FUN_1801c028a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0x208c0;
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar5 = 0x20bc0;
  }
  bVar3 = FUN_18014f686(&DAT_1804200e8,*(undefined4 *)(param_1 + 0x1c));
  FUN_18014f370(param_1);
  FUN_18014d8f1(*(undefined4 *)(param_1 + 0x1c));
  cVar4 = FUN_18014cfb6(param_1,bVar3 | uVar5);
  if (cVar4 != '\0') {
    iVar1 = *(int *)(param_1 + 0x28);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x30);
      lVar6 = 0;
      do {
        FUN_1801c028a(*(undefined8 *)(lVar2 + lVar6));
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar1 * 8 != lVar6);
    }
    FUN_18014d7a9();
    return;
  }
  cVar4 = FUN_180110c1e();
  if (cVar4 != '\0') {
    FUN_1801c08ea(param_1,0);
    return;
  }
  return;
}

