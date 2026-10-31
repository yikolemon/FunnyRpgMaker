/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b6a90 */

void FUN_1401b6a90(undefined8 param_1)

{
  longlong *plVar1;
  uint *puVar2;
  LCID Locale;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  short *psVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 auStack_138 [32];
  WCHAR local_118 [120];
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_138;
  lVar4 = FUN_1401aecc8();
  plVar1 = (longlong *)(lVar4 + 0x98);
  lVar5 = FUN_1401aecc8();
  puVar2 = *(uint **)(lVar5 + 0x3a0);
  Locale = FUN_1401b70cc(param_1);
  iVar3 = GetLocaleInfoW(Locale,(-(uint)(*(int *)(lVar4 + 0xb4) != 0) & 0xfffff005) + 0x1002,
                         local_118,0x78);
  if (iVar3 != 0) {
    iVar3 = FUN_1401a0500(*(undefined8 *)(lVar4 + 0xa0),local_118);
    lVar5 = -1;
    if (iVar3 == 0) {
      iVar3 = GetLocaleInfoW(Locale,(-(uint)(*(int *)(lVar4 + 0xb0) != 0) & 0xfffff002) + 0x1001,
                             local_118,0x78);
      if (iVar3 == 0) goto LAB_1401b6ca3;
      iVar3 = FUN_1401a0500(*plVar1,local_118);
      if (iVar3 == 0) {
        puVar2[1] = Locale;
        *puVar2 = *puVar2 | 0x304;
LAB_1401b6bd5:
        puVar2[2] = Locale;
      }
      else if ((*puVar2 & 2) == 0) {
        if ((*(int *)(lVar4 + 0xac) == 0) ||
           (iVar3 = FUN_1401c2430(*plVar1,local_118,(longlong)*(int *)(lVar4 + 0xac)), iVar3 != 0))
        {
          if ((*puVar2 & 1) == 0) {
            uVar8 = 0;
            psVar7 = &DAT_140eb8058;
            do {
              if ((short)Locale == *psVar7) goto LAB_1401b6bd8;
              uVar8 = uVar8 + 1;
              psVar7 = psVar7 + 1;
            } while (uVar8 < 10);
            *puVar2 = *puVar2 | 1;
            goto LAB_1401b6bd5;
          }
        }
        else {
          *puVar2 = *puVar2 | 2;
          lVar6 = -1;
          puVar2[2] = Locale;
          do {
            lVar6 = lVar6 + 1;
          } while (*(short *)(*plVar1 + lVar6 * 2) != 0);
          if ((int)lVar6 == *(int *)(lVar4 + 0xac)) {
            puVar2[1] = Locale;
          }
        }
      }
    }
LAB_1401b6bd8:
    if ((*puVar2 & 0x300) == 0x300) goto LAB_1401b6cab;
    iVar3 = GetLocaleInfoW(Locale,(-(uint)(*(int *)(lVar4 + 0xb0) != 0) & 0xfffff002) + 0x1001,
                           local_118,0x78);
    if (iVar3 != 0) {
      iVar3 = FUN_1401a0500(*plVar1,local_118);
      if (iVar3 == 0) {
        uVar8 = *puVar2;
        *puVar2 = uVar8 | 0x200;
        if ((*(int *)(lVar4 + 0xb0) == 0) && (*(int *)(lVar4 + 0xac) != 0)) {
          do {
            lVar5 = lVar5 + 1;
          } while (*(short *)(*plVar1 + lVar5 * 2) != 0);
          if ((int)lVar5 == *(int *)(lVar4 + 0xac)) {
            uVar9 = 1;
            goto LAB_1401b6c7c;
          }
        }
        *puVar2 = uVar8 | 0x300;
      }
      else {
        if (((*(int *)(lVar4 + 0xb0) != 0) || (*(int *)(lVar4 + 0xac) == 0)) ||
           (iVar3 = FUN_1401a0500(*plVar1,local_118), iVar3 != 0)) goto LAB_1401b6cab;
        uVar9 = 0;
LAB_1401b6c7c:
        iVar3 = FUN_1401b7010(Locale,uVar9,puVar2);
        if (iVar3 == 0) goto LAB_1401b6cab;
        *puVar2 = *puVar2 | 0x100;
      }
      if (puVar2[1] == 0) {
        puVar2[1] = Locale;
      }
      goto LAB_1401b6cab;
    }
  }
LAB_1401b6ca3:
  *puVar2 = 0;
LAB_1401b6cab:
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_28 ^ (ulonglong)auStack_138);
}

