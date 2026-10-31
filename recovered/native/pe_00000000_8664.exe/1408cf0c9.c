/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408cf0c9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1408cf0c9(void)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  int *piVar7;
  
  uVar1 = *(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
  piVar6 = (int *)(ulonglong)uVar1;
  cVar2 = FUN_1408cf174();
  if (cVar2 != '\0') {
    uVar3 = FUN_1408b664b(piVar6);
    if (uVar1 == uVar3) {
      piVar7 = (int *)&DAT_103a5474;
    }
    else {
      uVar3 = FUN_1408b664b(1);
      if (uVar1 != uVar3) {
        return 0;
      }
      piVar7 = (int *)&DAT_103a5478;
    }
    _DAT_150c73e5f = _DAT_150c73e5f + 1;
    puVar5 = (uint *)(ulonglong)(uVar1 + 0xc);
    if ((*puVar5 & 0x4c0) == 0) {
      LOCK();
      *puVar5 = *puVar5 | 0x282;
      UNLOCK();
      if (*piVar7 == 0) {
        iVar4 = FUN_1408cc040();
        *piVar7 = iVar4;
        FUN_1408cbff0();
      }
      if (*piVar7 == 0) {
        piVar6[2] = 2;
        piVar6[1] = uVar1 + 0x14;
        *piVar6 = uVar1 + 0x14;
        piVar6[6] = 2;
      }
      else {
        piVar6[1] = *piVar7;
        *piVar6 = *piVar7;
        piVar6[2] = 0x1000;
        piVar6[6] = 0x1000;
      }
      return 1;
    }
  }
  return 0;
}

