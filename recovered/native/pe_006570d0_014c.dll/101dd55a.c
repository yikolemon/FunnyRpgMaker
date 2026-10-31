/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101dd55a */

int __fastcall FUN_101dd55a(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  
  iVar4 = FUN_101dd54f();
  bVar1 = *(byte *)(param_1 + 2);
  if (iVar4 == 1) {
    bVar2 = *(byte *)(param_1 + 3);
    iVar4 = FUN_1005885c();
    iVar4 = (uint)bVar1 * 0x200 + iVar4 + (uint)bVar2 * 2;
  }
  else {
    uVar3 = *(undefined1 *)(param_1 + 3);
    iVar4 = FUN_1005885c();
    iVar4 = iVar4 + (uint)CONCAT11(bVar1,uVar3) * 6;
  }
  return iVar4;
}

