/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016b3e4 */

void FUN_18016b3e4(void)

{
  longlong lVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  float fVar8;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  float local_54;
  ulonglong local_50;
  
  local_50 = DAT_180402640 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(DAT_180419160 + 0x24f8);
  if (lVar1 == 0) {
    if (DAT_180402640 == (local_50 ^ (ulonglong)auStack_78)) {
      FUN_180101698("Call should only be done while in BeginTable() scope!");
      return;
    }
  }
  else {
    if (*(char *)(lVar1 + 0x239) == '\0') {
      FUN_18016663a(lVar1);
    }
    fVar8 = (float)FUN_18016b20e();
    FUN_18016a67b(1,fVar8);
    FUN_180119e05(local_58);
    fVar2 = local_54;
    if (*(char *)(lVar1 + 0x24c) == '\0') {
      iVar4 = FUN_18016a441();
      if (0 < iVar4) {
        iVar6 = 0;
        do {
          cVar3 = FUN_18016a960(iVar6);
          if ((cVar3 != '\0') || (iVar6 == *(short *)(lVar1 + 0x218))) {
            uVar5 = FUN_18016a4c2(iVar6);
            puVar7 = &DAT_1803861e4;
            if ((uVar5 >> 0xc & 1) == 0) {
              puVar7 = (undefined1 *)FUN_18016a45b(iVar6);
            }
            FUN_18011810d(iVar6);
            FUN_18016b569(puVar7);
            FUN_18011834f();
          }
          iVar6 = iVar6 + 1;
        } while (iVar4 != iVar6);
      }
      FUN_180118e0b(local_58);
      cVar3 = FUN_180118d71(1);
      if (cVar3 != '\0') {
        iVar6 = FUN_18016a586();
        if (((iVar6 == iVar4) && (fVar2 <= local_54)) && (local_54 < fVar8 + fVar2)) {
          FUN_180169352(iVar4);
        }
      }
    }
    if (DAT_180402640 == (local_50 ^ (ulonglong)auStack_78)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_50 ^ (ulonglong)auStack_78);
}

