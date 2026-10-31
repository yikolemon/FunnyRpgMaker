/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401133b4 */

void FUN_1401133b4(void)

{
  longlong lVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  float fVar8;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  float local_54;
  ulonglong local_50;
  
  local_50 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(DAT_140f2a910 + 0x24f8);
  if (lVar1 == 0) {
    if (DAT_140f17b40 == (local_50 ^ (ulonglong)auStack_78)) {
      FUN_14007a954("Call should only be done while in BeginTable() scope!");
      return;
    }
  }
  else {
    if (*(char *)(lVar1 + 0x239) == '\0') {
      FUN_14010e60a(lVar1);
    }
    fVar8 = (float)FUN_1401131de();
    FUN_14011264b(1,fVar8);
    FUN_14009311d(local_58);
    fVar2 = local_54;
    if (*(char *)(lVar1 + 0x24c) == '\0') {
      iVar4 = FUN_140112411();
      if (0 < iVar4) {
        iVar6 = 0;
        do {
          cVar3 = FUN_140112930(iVar6);
          if ((cVar3 != '\0') || (iVar6 == *(short *)(lVar1 + 0x218))) {
            uVar5 = FUN_140112492(iVar6);
            puVar7 = &DAT_140edcdbf;
            if ((uVar5 >> 0xc & 1) == 0) {
              puVar7 = (undefined *)FUN_14011242b(iVar6);
            }
            FUN_140091425(iVar6);
            FUN_140113539(puVar7);
            FUN_140091667();
          }
          iVar6 = iVar6 + 1;
        } while (iVar4 != iVar6);
      }
      FUN_140092123(local_58);
      cVar3 = FUN_140092089(1);
      if (cVar3 != '\0') {
        iVar6 = FUN_140112556();
        if (((iVar6 == iVar4) && (fVar2 <= local_54)) && (local_54 < fVar8 + fVar2)) {
          FUN_140111322(iVar4);
        }
      }
    }
    if (DAT_140f17b40 == (local_50 ^ (ulonglong)auStack_78)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_50 ^ (ulonglong)auStack_78);
}

