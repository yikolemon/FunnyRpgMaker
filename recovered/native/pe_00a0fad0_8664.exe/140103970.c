/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140103970 */

longlong FUN_140103970(ulonglong param_1,longlong param_2,int *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  code *pcVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  uint uVar14;
  byte bVar15;
  ulonglong uVar16;
  
  uVar7 = param_1;
  if (((longlong)*param_3 & 4U) != 0) {
    uVar7 = (longlong)param_3[1] + param_1 & (longlong)-param_3[2];
  }
  pbVar11 = (byte *)(*(longlong *)(param_2 + 8) +
                    (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8));
  bVar1 = pbVar11[3];
  if ((*pbVar11 & 7) < 3) {
    if ((bVar1 & 0xf) != 0) {
LAB_140103ae1:
      uVar16 = (ulonglong)bVar1 & 0xfffffffffffffff0;
      goto LAB_140103ae5;
    }
  }
  else {
    uVar14 = bVar1 & 0x1f;
    if ((bVar1 & 0x1f) != 0) {
      if ((*pbVar11 & 0x40) == 0) {
        lVar8 = (ulonglong)uVar14 + 4;
      }
      else {
        lVar8 = (ulonglong)uVar14 * 2 + 5;
      }
      pbVar11 = pbVar11 + lVar8;
      uVar16 = 0;
      uVar9 = uVar16;
      pbVar12 = pbVar11;
      if (bVar1 >> 5 != 0) {
        do {
          pbVar11 = pbVar12 + 3;
          uVar4 = (uint)(*pbVar12 >> 3);
          if (uVar4 != 0) {
            if ((*pbVar12 & 2) == 0) {
              pbVar11 = pbVar12 + (ulonglong)uVar4 + 6;
            }
            else {
              pbVar11 = pbVar11 + (ulonglong)uVar4 * 2 + 4;
            }
          }
          uVar4 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar4;
          pbVar12 = pbVar11;
        } while (uVar4 < bVar1 >> 5);
      }
      uVar9 = uVar16;
      if ((bVar1 & 0x1f) != 0) {
        do {
          bVar1 = *pbVar11;
          bVar15 = bVar1;
          if (((bVar1 < 4) || (bVar15 = bVar1 & 0xf, (byte)(bVar15 - 8) < 3)) ||
             (bVar15 = bVar1 & 7, (byte)(bVar15 - 4) < 4)) {
            if (bVar15 == 0) {
              bVar1 = pbVar11[1];
              goto LAB_140103ae1;
            }
            if (0x20 < bVar15) goto switchD_140103aaf_caseD_4;
          }
          else {
            if ((bVar1 & 0x3f) != 0x20) goto switchD_140103aaf_caseD_4;
            bVar15 = 0x20;
          }
          uVar10 = (ulonglong)
                   (&switchD_140103aaf::switchdataD_140103b14)
                   [*(byte *)((longlong)&UINT_140103b28 + (ulonglong)bVar15)];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(*(byte *)((longlong)&UINT_140103b28 + (ulonglong)bVar15)) {
          case 0:
            lVar8 = 2;
            break;
          case 1:
            lVar8 = 5;
            break;
          case 2:
            lVar8 = 3;
            break;
          case 3:
            lVar8 = 1;
            break;
          case 4:
switchD_140103aaf_caseD_4:
            FUN_1400ddcf0();
            pcVar3 = (code *)swi(3);
            lVar8 = (*pcVar3)();
            return lVar8;
          case 5:
            lVar8 = 0;
            for (plVar5 = *(longlong **)
                           ((longlong)
                            &IMAGE_NT_HEADERS64_140000078.OptionalHeader.DataDirectory[7].
                             VirtualAddress + uVar10);
                plVar5 != *(longlong **)
                           ((longlong)
                            &IMAGE_NT_HEADERS64_140000078.OptionalHeader.DataDirectory[8].
                             VirtualAddress + uVar10); plVar5 = plVar5 + 1) {
              lVar8 = lVar8 + (*(longlong *)(*plVar5 + 0x240) - *(longlong *)(*plVar5 + 0x238) >> 5)
              ;
            }
            puVar2 = *(undefined8 **)(&UNK_140000308 + uVar10);
            for (puVar13 = *(undefined8 **)(&UNK_140000300 + uVar10); puVar13 != puVar2;
                puVar13 = puVar13 + 2) {
              lVar6 = FUN_1400200fc(*puVar13);
              lVar8 = lVar8 + lVar6;
            }
            uVar7 = (ulonglong)*(uint *)(&UNK_140000324 + uVar10);
            if (*(longlong *)((longlong)IMAGE_DOS_HEADER_140000000.e_res_4_ + (uVar10 - 4)) == 0) {
              uVar7 = 0;
            }
            return uVar7 + lVar8;
          }
          pbVar11 = pbVar11 + lVar8;
          uVar4 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar4;
        } while (uVar4 < uVar14);
      }
      goto LAB_140103ae5;
    }
  }
  uVar16 = 0;
LAB_140103ae5:
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(uVar16 + param_1 ^
                *(ulonglong *)(((longlong)*param_3 & 0xfffffffffffffff8U) + uVar7));
}

