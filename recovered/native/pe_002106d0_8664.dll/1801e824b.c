/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e824b */

longlong FUN_1801e824b(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = FUN_1801e823b();
  bVar1 = *(byte *)(param_1 + 2);
  if (iVar4 == 1) {
    bVar2 = *(byte *)(param_1 + 3);
    lVar5 = FUN_1801e8246(param_1);
    lVar5 = (ulonglong)bVar1 * 0x200 + lVar5 + (ulonglong)bVar2 * 2;
  }
  else {
    uVar3 = *(undefined1 *)(param_1 + 3);
    lVar5 = FUN_1801e8246(param_1);
    lVar5 = lVar5 + (ulonglong)CONCAT11(bVar1,uVar3) * 6;
  }
  return lVar5;
}

