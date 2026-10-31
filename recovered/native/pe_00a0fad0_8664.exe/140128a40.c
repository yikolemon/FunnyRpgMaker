/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140128a40 */

void FUN_140128a40(undefined8 param_1)

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
  
  local_28 = DAT_1401c9640 ^ (ulonglong)auStack_138;
  lVar4 = FUN_140121578();
  plVar1 = (longlong *)(lVar4 + 0x98);
  lVar5 = FUN_140121578();
  puVar2 = *(uint **)(lVar5 + 0x3a0);
  Locale = FUN_14012907c(param_1);
  iVar3 = GetLocaleInfoW(Locale,(-(uint)(*(int *)(lVar4 + 0xb4) != 0) & 0xfffff005) + 0x1002,
                         local_118,0x78);
  if (iVar3 != 0) {
    iVar3 = FUN_1401156b0(*(undefined8 *)(lVar4 + 0xa0),local_118);
    lVar5 = -1;
    if (iVar3 == 0) {
      iVar3 = GetLocaleInfoW(Locale,(-(uint)(*(int *)(lVar4 + 0xb0) != 0) & 0xfffff002) + 0x1001,
                             local_118,0x78);
      if (iVar3 == 0) goto LAB_140128c53;
      iVar3 = FUN_1401156b0(*plVar1,local_118);
      if (iVar3 == 0) {
        puVar2[1] = Locale;
        *puVar2 = *puVar2 | 0x304;
LAB_140128b85:
        puVar2[2] = Locale;
      }
      else if ((*puVar2 & 2) == 0) {
        if ((*(int *)(lVar4 + 0xac) == 0) ||
           (iVar3 = FUN_140132620(*plVar1,local_118,(longlong)*(int *)(lVar4 + 0xac)), iVar3 != 0))
        {
          if ((*puVar2 & 1) == 0) {
            uVar8 = 0;
            psVar7 = &DAT_140168fa8;
            do {
              if ((short)Locale == *psVar7) goto LAB_140128b88;
              uVar8 = uVar8 + 1;
              psVar7 = psVar7 + 1;
            } while (uVar8 < 10);
            *puVar2 = *puVar2 | 1;
            goto LAB_140128b85;
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
LAB_140128b88:
    if ((*puVar2 & 0x300) == 0x300) goto LAB_140128c5b;
    iVar3 = GetLocaleInfoW(Locale,(-(uint)(*(int *)(lVar4 + 0xb0) != 0) & 0xfffff002) + 0x1001,
                           local_118,0x78);
    if (iVar3 != 0) {
      iVar3 = FUN_1401156b0(*plVar1,local_118);
      if (iVar3 == 0) {
        uVar8 = *puVar2;
        *puVar2 = uVar8 | 0x200;
        if ((*(int *)(lVar4 + 0xb0) == 0) && (*(int *)(lVar4 + 0xac) != 0)) {
          do {
            lVar5 = lVar5 + 1;
          } while (*(short *)(*plVar1 + lVar5 * 2) != 0);
          if ((int)lVar5 == *(int *)(lVar4 + 0xac)) {
            uVar9 = 1;
            goto LAB_140128c2c;
          }
        }
        *puVar2 = uVar8 | 0x300;
      }
      else {
        if (((*(int *)(lVar4 + 0xb0) != 0) || (*(int *)(lVar4 + 0xac) == 0)) ||
           (iVar3 = FUN_1401156b0(*plVar1,local_118), iVar3 != 0)) goto LAB_140128c5b;
        uVar9 = 0;
LAB_140128c2c:
        iVar3 = FUN_140128fc0(Locale,uVar9,puVar2);
        if (iVar3 == 0) goto LAB_140128c5b;
        *puVar2 = *puVar2 | 0x100;
      }
      if (puVar2[1] == 0) {
        puVar2[1] = Locale;
      }
      goto LAB_140128c5b;
    }
  }
LAB_140128c53:
  *puVar2 = 0;
LAB_140128c5b:
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_28 ^ (ulonglong)auStack_138);
}

