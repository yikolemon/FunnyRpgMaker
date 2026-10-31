/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d7ad7 */

int FUN_101d7ad7(undefined4 param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = FUN_101d9445();
  if (iVar3 == 0) {
    uVar4 = *(uint *)(param_2 + 0xabc);
    if ((uVar4 & 1) == 0) {
      iVar3 = FUN_101da9c7();
      if (iVar3 != 0) {
        return iVar3;
      }
      FUN_101da9ed(0);
      uVar4 = *(uint *)(param_2 + 0xabc);
    }
    if ((uVar4 & 2) == 0) {
      iVar3 = FUN_101da9c7();
      if (iVar3 != 0) {
        return iVar3;
      }
      FUN_101da9ed(1);
    }
    bVar2 = true;
    do {
      bVar1 = bVar2;
      if (bVar1) {
        if ((*(uint *)(param_2 + 0xabc) & 1) == 0) goto LAB_101d7b61;
      }
      else {
        if ((*(uint *)(param_2 + 0xabc) & 2) != 0) break;
LAB_101d7b61:
        FUN_101dab73();
        FUN_101daf05();
        FUN_101dafbe();
        FUN_101db1aa();
      }
      bVar2 = false;
    } while (bVar1);
    FUN_101db34f();
    iVar3 = 0;
  }
  return iVar3;
}

