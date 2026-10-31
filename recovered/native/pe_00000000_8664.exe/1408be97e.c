/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408be97e */

uint FUN_1408be97e(uint param_1)

{
  uint uVar1;
  char cVar2;
  uint *puVar3;
  ulonglong *puVar4;
  uint unaff_EDI;
  uint uVar5;
  undefined8 uStack_20;
  ulonglong uStack_18;
  
  uStack_18 = (ulonglong)unaff_EDI;
  puVar3 = (uint *)(ulonglong)param_1;
  uStack_20 = 0x1408be98f;
  cVar2 = FUN_1408be8e3(param_1 + 8);
  if (cVar2 != '\0') {
    uStack_20 = 0x1408be99d;
    cVar2 = FUN_1408be230(param_1 + 0x18);
    if (cVar2 != '\0') {
      do {
        uStack_20 = 0x1408be9ba;
        cVar2 = FUN_1408be24c(param_1 + 0x18);
        if (cVar2 == '\0') break;
        uStack_20 = 0x1408be9af;
        cVar2 = FUN_1408bea03(puVar3);
      } while (cVar2 != '\0');
      uVar5 = puVar3[0x1c];
      puVar4 = &uStack_18;
      if ((uVar5 == 0) && (puVar4 = &uStack_18, puVar3[10] != 1)) {
        uStack_20 = 0x1408be9d2;
        uStack_20 = FUN_1408be905();
        puVar4 = &uStack_20;
        if ((int)uStack_20 == -1) {
          uVar5 = 0xffffffff;
        }
        FUN_1408be91b(param_1 + 8);
      }
      if ((*puVar3 & 1) == 0) {
        return uVar5;
      }
      uVar1 = puVar3[9];
      if (uVar1 == 0) {
        return uVar5;
      }
      *(undefined8 *)((longlong)puVar4 + -8) = 0x1408be9f8;
      puVar3 = (uint *)FUN_1408c0ecd();
      *puVar3 = uVar1;
      *(undefined8 *)((longlong)puVar4 + -8) = 0x1408be9ff;
      FUN_1408cbd78();
      return uVar5;
    }
  }
  return 0xffffffff;
}

