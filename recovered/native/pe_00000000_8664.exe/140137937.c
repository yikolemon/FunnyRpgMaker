/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140137937 */

longlong FUN_140137937(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = FUN_140137927();
  bVar1 = *(byte *)(param_1 + 2);
  if (iVar4 == 1) {
    bVar2 = *(byte *)(param_1 + 3);
    lVar5 = FUN_140137932(param_1);
    lVar5 = (ulonglong)bVar1 * 0x200 + lVar5 + (ulonglong)bVar2 * 2;
  }
  else {
    uVar3 = *(undefined1 *)(param_1 + 3);
    lVar5 = FUN_140137932(param_1);
    lVar5 = lVar5 + (ulonglong)CONCAT11(bVar1,uVar3) * 6;
  }
  return lVar5;
}

