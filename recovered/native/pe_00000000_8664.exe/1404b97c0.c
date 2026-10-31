/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404b97c0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014056f251) overlaps instruction at (ram,0x00014056f250)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404b97c0(undefined1 (*param_1) [32],undefined1 (*param_2) [32],char *param_3)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  char cVar5;
  code *pcVar6;
  undefined7 uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  char cVar23;
  char cVar24;
  byte bVar25;
  byte bVar26;
  uint uVar27;
  char *pcVar28;
  undefined6 uVar30;
  undefined1 (*pauVar31) [32];
  undefined1 (*pauVar32) [32];
  undefined8 *puVar33;
  char *pcVar34;
  char *pcVar35;
  char cVar37;
  undefined8 *puVar36;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char *unaff_RSI;
  undefined8 unaff_RDI;
  char cVar38;
  char *pcVar39;
  longlong lVar40;
  ulonglong uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  byte *pbVar29;
  
  cVar23 = (char)param_1;
  uVar30 = (undefined6)((ulonglong)param_1 >> 0x10);
  uVar27 = (uint)param_1;
  switch(param_3) {
  case (char *)0x0:
    uVar27 = uVar27 ^ 0x35dd8000;
    pcVar28 = (char *)((longlong)(ulonglong)uVar27 + 2);
    *pcVar28 = *pcVar28 + (char)(uVar27 >> 8);
    cVar23 = DAT_2b02e0002b02;
    pcVar28 = (char *)(ulonglong)
                      CONCAT31((int3)(uVar27 - *(int *)(ulonglong)uVar27 >> 8),DAT_2b02e0002b02);
    *pcVar28 = *pcVar28 + DAT_2b02e0002b02;
    *pcVar28 = *pcVar28 + cVar23;
    *pcVar28 = *pcVar28 + cVar23;
    *pcVar28 = *pcVar28 + cVar23;
    *pcVar28 = *pcVar28 + cVar23;
    *pcVar28 = *pcVar28 + cVar23;
    *pcVar28 = *pcVar28 + cVar23;
    *pcVar28 = *pcVar28 + cVar23;
    *pcVar28 = *pcVar28 + cVar23;
    *pcVar28 = *pcVar28 + cVar23;
    *pcVar28 = *pcVar28 + cVar23;
    *pcVar28 = *pcVar28 + cVar23;
    *pcVar28 = *pcVar28 + cVar23;
    pcVar28[0x4004171] = pcVar28[0x4004171] + (char)param_2;
    *pcVar28 = *pcVar28 + cVar23;
    *pcVar28 = *pcVar28 + cVar23;
    *pcVar28 = *pcVar28 + cVar23;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (char *)0x1:
  case (char *)0x2:
  case (char *)0x3:
  case (char *)0x4:
  case (char *)0x8:
  case (char *)0x9:
  case (char *)0xe:
  case (char *)0xf:
code_r0x0001402114d0:
    (*param_1)[0] = (*param_1)[0] + cVar23;
    LOCK();
    *param_3 = *param_3 + cVar23;
    UNLOCK();
    break;
  case (char *)0x5:
switchD_1404b97eb_caseD_5:
    cVar23 = cVar23 + (char)((ulonglong)param_2 >> 8);
    param_1 = (undefined1 (*) [32])CONCAT71((int7)((ulonglong)param_1 >> 8),cVar23);
    *param_3 = *param_3 + cVar23;
    break;
  case (char *)0x6:
    (*param_1)[0] = (*param_1)[0] + cVar23;
    break;
  case (char *)0x7:
    (*param_1)[0] = (*param_1)[0] + cVar23;
    (*param_1)[0] = (*param_1)[0] + cVar23;
    *(uint *)*param_1 = *(int *)*param_1 + uVar27;
    (*param_1)[0] = (*param_1)[0] + cVar23;
    while (cVar38 = (*param_1)[0], (*param_1)[0] = (*param_1)[0] + cVar23, SCARRY1(cVar38,cVar23)) {
      (*param_1)[0] = (*param_1)[0] + cVar23;
      (*param_1)[0] = (*param_1)[0] + cVar23;
      (*param_1)[0] = (*param_1)[0] + cVar23;
      (*param_1)[0] = (*param_1)[0] + cVar23;
      (*param_1)[0] = (*param_1)[0] + cVar23;
      (*param_1)[0] = (*param_1)[0] + cVar23;
      (*param_1)[0] = (*param_1)[0] + cVar23;
      (*param_1)[0] = (*param_1)[0] + cVar23;
      *(char *)((longlong)param_1 * 2) = *(char *)((longlong)param_1 * 2) + cVar23;
    }
    pcVar28 = (char *)((ulonglong)param_1 & 0xffffffff);
    cVar24 = (char)pcVar28;
    *pcVar28 = *pcVar28 + cVar24;
    *pcVar28 = *pcVar28 + cVar24;
    pcVar28[0x600035e9] = pcVar28[0x600035e9] + unaff_BL;
    cVar38 = *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
    pcVar28[-0x1fffd4fe] = pcVar28[-0x1fffd4fe] + (char)((ulonglong)pcVar28 >> 8);
    cVar5 = *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
    *pcVar28 = *pcVar28 + cVar24;
    *pcVar28 = *pcVar28 + cVar24;
    *pcVar28 = *pcVar28 + cVar24;
    *pcVar28 = *pcVar28 + cVar24;
    *pcVar28 = *pcVar28 + cVar24;
    *pcVar28 = *pcVar28 + cVar24;
    *pcVar28 = *pcVar28 + cVar24;
    *pcVar28 = *pcVar28 + cVar24;
    *pcVar28 = *pcVar28 + cVar24;
    *pcVar28 = *pcVar28 + cVar24;
    *pcVar28 = *pcVar28 + cVar24;
    *pcVar28 = *pcVar28 + cVar24;
    cVar37 = (char)((ulonglong)param_2 >> 8);
    bVar25 = cVar24 + cVar37;
    pbVar29 = (byte *)CONCAT71((int7)((ulonglong)pcVar28 >> 8),bVar25);
    if (SCARRY1(cVar24,cVar37)) {
      *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
           *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + bVar25;
      *pbVar29 = *pbVar29 + bVar25;
      *pbVar29 = *pbVar29 + bVar25;
      *pbVar29 = *pbVar29 + bVar25;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pbVar29 = *pbVar29 + bVar25;
    *pbVar29 = *pbVar29 + bVar25;
    *pbVar29 = *pbVar29 + bVar25;
    *pbVar29 = *pbVar29 + bVar25;
    *pbVar29 = *pbVar29 + bVar25;
    *pbVar29 = *pbVar29 + bVar25;
    *(int *)pbVar29 = *(int *)pbVar29 + (int)pbVar29;
    *pbVar29 = *pbVar29 + bVar25;
    *pbVar29 = *pbVar29 + bVar25;
    *pbVar29 = *pbVar29 + bVar25;
    *pbVar29 = *pbVar29 + bVar25;
    bVar26 = *pbVar29;
    *pbVar29 = *pbVar29 + bVar25;
    if (!CARRY1(bVar26,bVar25)) {
      *pbVar29 = *pbVar29 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (CONCAT62(uVar30,CONCAT11((char)((ulonglong)param_1 >> 8) + cVar38 + cVar5,cVar23)) == 1 ||
        *pbVar29 == 0) {
      pbVar29 = (byte *)(ulonglong)(uint)((int)pbVar29 - *(int *)pbVar29);
    }
    bVar26 = (byte)pbVar29;
    *pbVar29 = *pbVar29 + bVar26;
    *pbVar29 = *pbVar29 + bVar26;
    *pbVar29 = *pbVar29 + bVar26;
    *pbVar29 = *pbVar29 + bVar26;
    *pbVar29 = *pbVar29 + bVar26;
    *pbVar29 = *pbVar29 + bVar26;
    *pbVar29 = *pbVar29 + bVar26;
    *pbVar29 = *pbVar29 + bVar26;
    *pbVar29 = *pbVar29 + bVar26;
    *pbVar29 = *pbVar29 + bVar26;
    *pbVar29 = *pbVar29 + bVar26;
    *pbVar29 = *pbVar29 + bVar26;
    *pbVar29 = *pbVar29 + bVar26;
    bVar25 = *pbVar29;
    *pbVar29 = *pbVar29 + bVar26;
    if (!CARRY1(bVar25,bVar26)) {
      *(char *)((longlong)pbVar29 * 2) = *(char *)((longlong)pbVar29 * 2) + bVar26;
      *pbVar29 = *pbVar29 + bVar26;
      *pbVar29 = *pbVar29 + bVar26;
      *pbVar29 = *pbVar29 + bVar26;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pbVar29 = *pbVar29 + bVar26;
    *pbVar29 = *pbVar29 + bVar26;
    *pbVar29 = *pbVar29 + bVar26;
    *pbVar29 = *pbVar29 + bVar26;
    *pbVar29 = *pbVar29 + bVar26;
    *pbVar29 = *pbVar29 + bVar26;
    *pbVar29 = *pbVar29 + bVar26;
    *pbVar29 = *pbVar29 + bVar26;
    *(int *)pbVar29 = *(int *)pbVar29 + (int)pbVar29;
    *pbVar29 = *pbVar29 + bVar26;
    *pbVar29 = *pbVar29 + bVar26;
    *pbVar29 = *pbVar29 + bVar26;
    *pbVar29 = *pbVar29 + bVar26;
    *pbVar29 = *pbVar29 + bVar26;
    *pbVar29 = *pbVar29 + bVar26;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (char *)0xa:
    (*param_1)[0] = (*param_1)[0] + cVar23;
    (*param_1)[0] = (*param_1)[0] + cVar23;
    (*param_1)[0] = (*param_1)[0] + cVar23;
    (*param_1)[0] = (*param_1)[0] + cVar23;
    (*param_1)[0] = (*param_1)[0] + cVar23;
    (*param_1)[0] = (*param_1)[0] + cVar23;
    (*param_1)[0] = (*param_1)[0] + cVar23;
    (*param_1)[0] = (*param_1)[0] + cVar23;
    (*param_1)[0] = (*param_1)[0] + cVar23;
    (*param_1)[0] = (*param_1)[0] + cVar23;
    (*param_1)[0] = (*param_1)[0] + cVar23;
    (*param_1)[0] = (*param_1)[0] + cVar23;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (char *)0xb:
    (*param_1)[0] = (*param_1)[0] + cVar23;
    (*param_1)[0] = (*param_1)[0] + cVar23;
    (*param_1)[0] = (*param_1)[0] + cVar23;
    (*param_1)[0] = (*param_1)[0] + cVar23;
    *(uint *)*param_1 = *(int *)*param_1 + uVar27;
    cVar38 = (*param_1)[0];
    (*param_1)[0] = (*param_1)[0] + cVar23;
    if (!SCARRY1(cVar38,cVar23)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(uint *)*param_1 = *(int *)*param_1 + uVar27;
    (*param_1)[0] = (*param_1)[0] + cVar23;
    (*param_1)[0] = (*param_1)[0];
    (*param_1)[0] = (*param_1)[0] + cVar23;
    (*param_1)[0] = (*param_1)[0] + cVar23;
    (*param_1)[0] = (*param_1)[0] + cVar23;
    (*param_1)[0] = (*param_1)[0] + cVar23;
    (*param_1)[0] = (*param_1)[0] + cVar23;
    *(uint *)*param_1 = *(int *)*param_1 + uVar27;
    (*param_1)[0] = (*param_1)[0] + cVar23;
    (*param_1)[0] = (*param_1)[0] + cVar23;
    (*param_1)[0] = (*param_1)[0] + cVar23;
    (*param_1)[0] = (*param_1)[0] + cVar23;
    (*param_1)[0] = (*param_1)[0] + cVar23;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (char *)0xc:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (char *)0xd:
    func_0x0001104c42c3();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    if (param_3 < (char *)0x21) {
      uVar9 = *(undefined8 *)(*param_2 + 8);
      uVar10 = *(undefined8 *)(param_2[-1] + 0x10 + (longlong)param_3);
      uVar11 = *(undefined8 *)(param_2[-1] + 0x10 + (longlong)param_3 + 8);
      *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
      *(undefined8 *)(*param_1 + 8) = uVar9;
      *(undefined8 *)(param_1[-1] + 0x10 + (longlong)param_3) = uVar10;
      *(undefined8 *)(param_1[-1] + 0x10 + (longlong)param_3 + 8) = uVar11;
      return;
    }
    pauVar31 = (undefined1 (*) [32])(param_3 + (longlong)*param_2);
    if (param_1 <= param_2) {
      pauVar31 = param_1;
    }
    if (param_1 < pauVar31) {
      uVar9 = *(undefined8 *)*param_2;
      uVar10 = *(undefined8 *)(*param_2 + 8);
      lVar40 = (longlong)param_2 - (longlong)param_1;
      pcVar28 = *param_1;
      uVar11 = *(undefined8 *)(param_3 + (longlong)(pcVar28 + lVar40 + -0x10));
      uVar12 = *(undefined8 *)(param_3 + (longlong)(pcVar28 + lVar40 + -0x10) + 8);
      pcVar34 = param_3 + (longlong)(pcVar28 + -0x10);
      pcVar39 = param_3 + -0x10;
      pcVar35 = pcVar34;
      uVar42 = uVar11;
      uVar43 = uVar12;
      if (((ulonglong)pcVar34 & 0xf) != 0) {
        pcVar35 = (char *)((ulonglong)pcVar34 & 0xfffffffffffffff0);
        uVar42 = *(undefined8 *)(pcVar35 + lVar40);
        uVar43 = *(undefined8 *)(pcVar35 + lVar40 + 8);
        *(undefined8 *)pcVar34 = uVar11;
        *(undefined8 *)(param_3 + (longlong)(pcVar28 + -8)) = uVar12;
        pcVar39 = pcVar35 + -(longlong)param_1;
      }
      uVar41 = (ulonglong)pcVar39 >> 7;
      if (uVar41 != 0) {
        *(undefined8 *)pcVar35 = uVar42;
        *(undefined8 *)(pcVar35 + 8) = uVar43;
        pcVar28 = pcVar35;
        while( true ) {
          uVar11 = *(undefined8 *)(pcVar28 + lVar40 + -0x10 + 8);
          uVar12 = *(undefined8 *)(pcVar28 + lVar40 + -0x20);
          uVar42 = *(undefined8 *)(pcVar28 + lVar40 + -0x20 + 8);
          pcVar35 = pcVar28 + -0x80;
          *(undefined8 *)(pcVar28 + -0x10) = *(undefined8 *)(pcVar28 + lVar40 + -0x10);
          *(undefined8 *)(pcVar28 + -8) = uVar11;
          *(undefined8 *)(pcVar28 + -0x20) = uVar12;
          *(undefined8 *)(pcVar28 + -0x18) = uVar42;
          uVar11 = *(undefined8 *)(pcVar28 + lVar40 + -0x30 + 8);
          uVar12 = *(undefined8 *)(pcVar28 + lVar40 + -0x40);
          uVar42 = *(undefined8 *)(pcVar28 + lVar40 + -0x40 + 8);
          uVar41 = uVar41 - 1;
          *(undefined8 *)(pcVar28 + -0x30) = *(undefined8 *)(pcVar28 + lVar40 + -0x30);
          *(undefined8 *)(pcVar28 + -0x28) = uVar11;
          *(undefined8 *)(pcVar28 + -0x40) = uVar12;
          *(undefined8 *)(pcVar28 + -0x38) = uVar42;
          uVar11 = *(undefined8 *)(pcVar28 + lVar40 + -0x50 + 8);
          uVar12 = *(undefined8 *)(pcVar28 + lVar40 + -0x60);
          uVar42 = *(undefined8 *)(pcVar28 + lVar40 + -0x60 + 8);
          *(undefined8 *)(pcVar28 + -0x50) = *(undefined8 *)(pcVar28 + lVar40 + -0x50);
          *(undefined8 *)(pcVar28 + -0x48) = uVar11;
          *(undefined8 *)(pcVar28 + -0x60) = uVar12;
          *(undefined8 *)(pcVar28 + -0x58) = uVar42;
          uVar11 = *(undefined8 *)(pcVar28 + lVar40 + -0x70);
          uVar12 = *(undefined8 *)(pcVar28 + lVar40 + -0x70 + 8);
          uVar42 = *(undefined8 *)(pcVar35 + lVar40);
          uVar43 = *(undefined8 *)(pcVar35 + lVar40 + 8);
          if (uVar41 == 0) break;
          *(undefined8 *)(pcVar28 + -0x70) = uVar11;
          *(undefined8 *)(pcVar28 + -0x68) = uVar12;
          *(undefined8 *)pcVar35 = uVar42;
          *(undefined8 *)(pcVar28 + -0x78) = uVar43;
          pcVar28 = pcVar35;
        }
        *(undefined8 *)(pcVar28 + -0x70) = uVar11;
        *(undefined8 *)(pcVar28 + -0x68) = uVar12;
        pcVar39 = (char *)((ulonglong)pcVar39 & 0x7f);
      }
      for (uVar41 = (ulonglong)pcVar39 >> 4; uVar41 != 0; uVar41 = uVar41 - 1) {
        *(undefined8 *)pcVar35 = uVar42;
        *(undefined8 *)(pcVar35 + 8) = uVar43;
        pcVar35 = pcVar35 + -0x10;
        uVar42 = *(undefined8 *)(pcVar35 + lVar40);
        uVar43 = *(undefined8 *)(pcVar35 + lVar40 + 8);
      }
      if (((ulonglong)pcVar39 & 0xf) != 0) {
        *(undefined8 *)*param_1 = uVar9;
        *(undefined8 *)(*param_1 + 8) = uVar10;
      }
      *(undefined8 *)pcVar35 = uVar42;
      *(undefined8 *)(pcVar35 + 8) = uVar43;
      return;
    }
    if (DAT_140614ea8 < 3) {
      if ((param_3 < (char *)0x801) || ((DAT_14062a6b4 & 2) == 0)) {
        if ((char *)0x80 < param_3) {
          lVar40 = ((ulonglong)param_1 & 0xf) - 0x10;
          puVar33 = (undefined8 *)((longlong)param_1 - lVar40);
          puVar36 = (undefined8 *)((longlong)param_2 - lVar40);
          param_3 = param_3 + lVar40;
          if ((char *)0x80 < param_3) {
            do {
              uVar9 = puVar36[1];
              uVar10 = puVar36[2];
              uVar11 = puVar36[3];
              uVar12 = puVar36[4];
              uVar42 = puVar36[5];
              uVar43 = puVar36[6];
              uVar13 = puVar36[7];
              *puVar33 = *puVar36;
              puVar33[1] = uVar9;
              puVar33[2] = uVar10;
              puVar33[3] = uVar11;
              puVar33[4] = uVar12;
              puVar33[5] = uVar42;
              puVar33[6] = uVar43;
              puVar33[7] = uVar13;
              uVar9 = puVar36[9];
              uVar10 = puVar36[10];
              uVar11 = puVar36[0xb];
              uVar12 = puVar36[0xc];
              uVar42 = puVar36[0xd];
              uVar43 = puVar36[0xe];
              uVar13 = puVar36[0xf];
              puVar33[8] = puVar36[8];
              puVar33[9] = uVar9;
              puVar33[10] = uVar10;
              puVar33[0xb] = uVar11;
              puVar33[0xc] = uVar12;
              puVar33[0xd] = uVar42;
              puVar33[0xe] = uVar43;
              puVar33[0xf] = uVar13;
              puVar33 = puVar33 + 0x10;
              puVar36 = puVar36 + 0x10;
              param_3 = param_3 + -0x80;
            } while ((char *)0x7f < param_3);
          }
        }
                    /* WARNING: Could not recover jumptable at 0x0001404b9ce6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(switchD_1404b97eb::caseD_1 +
          *(uint *)(&DAT_14056e688 + ((ulonglong)(param_3 + 0xf) >> 4) * 4)))();
        return;
      }
code_r0x0001404b97bb:
      for (; param_3 != (char *)0x0; param_3 = param_3 + -1) {
        (*param_1)[0] = (*param_2)[0];
        param_2 = (undefined1 (*) [32])(*param_2 + 1);
        param_1 = (undefined1 (*) [32])(*param_1 + 1);
      }
      return;
    }
    if (((char *)0x2000 < param_3) && (param_3 < (char *)0x180001)) {
      pauVar31 = param_1 + 2;
      if (param_2 < param_1) {
        pauVar31 = param_2;
      }
      if ((pauVar31 <= param_2) && ((DAT_14062a6b4 & 2) != 0)) goto code_r0x0001404b97bb;
    }
    uVar9 = *(undefined8 *)*param_2;
    if (param_3 < (char *)0x101) {
LAB_1404b9a28:
                    /* WARNING: Could not recover jumptable at 0x0001404b9a42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(switchD_1404b97eb::caseD_1 +
        *(uint *)(&DAT_14056e640 + ((ulonglong)(param_3 + 0x1f) >> 5) * 4)))(uVar9);
      return;
    }
    lVar40 = ((ulonglong)param_1 & 0x1f) - 0x20;
    pauVar31 = (undefined1 (*) [32])((longlong)param_1 - lVar40);
    param_2 = (undefined1 (*) [32])((longlong)param_2 - lVar40);
    param_3 = param_3 + lVar40;
    if (param_3 < (char *)0x101) goto LAB_1404b9a28;
    if (param_3 < (char *)0x180001) {
      do {
        uVar10 = *(undefined8 *)(*param_2 + 8);
        uVar11 = *(undefined8 *)(*param_2 + 0x10);
        uVar12 = *(undefined8 *)(*param_2 + 0x18);
        uVar42 = *(undefined8 *)param_2[1];
        uVar43 = *(undefined8 *)(param_2[1] + 8);
        uVar13 = *(undefined8 *)(param_2[1] + 0x10);
        uVar14 = *(undefined8 *)(param_2[1] + 0x18);
        uVar15 = *(undefined8 *)param_2[2];
        uVar16 = *(undefined8 *)(param_2[2] + 8);
        uVar17 = *(undefined8 *)(param_2[2] + 0x10);
        uVar18 = *(undefined8 *)(param_2[2] + 0x18);
        uVar19 = *(undefined8 *)param_2[3];
        uVar20 = *(undefined8 *)(param_2[3] + 8);
        uVar21 = *(undefined8 *)(param_2[3] + 0x10);
        uVar22 = *(undefined8 *)(param_2[3] + 0x18);
        *(undefined8 *)*pauVar31 = *(undefined8 *)*param_2;
        *(undefined8 *)(*pauVar31 + 8) = uVar10;
        *(undefined8 *)(*pauVar31 + 0x10) = uVar11;
        *(undefined8 *)(*pauVar31 + 0x18) = uVar12;
        *(undefined8 *)pauVar31[1] = uVar42;
        *(undefined8 *)(pauVar31[1] + 8) = uVar43;
        *(undefined8 *)(pauVar31[1] + 0x10) = uVar13;
        *(undefined8 *)(pauVar31[1] + 0x18) = uVar14;
        *(undefined8 *)pauVar31[2] = uVar15;
        *(undefined8 *)(pauVar31[2] + 8) = uVar16;
        *(undefined8 *)(pauVar31[2] + 0x10) = uVar17;
        *(undefined8 *)(pauVar31[2] + 0x18) = uVar18;
        *(undefined8 *)pauVar31[3] = uVar19;
        *(undefined8 *)(pauVar31[3] + 8) = uVar20;
        *(undefined8 *)(pauVar31[3] + 0x10) = uVar21;
        *(undefined8 *)(pauVar31[3] + 0x18) = uVar22;
        uVar10 = *(undefined8 *)(param_2[4] + 8);
        uVar11 = *(undefined8 *)(param_2[4] + 0x10);
        uVar12 = *(undefined8 *)(param_2[4] + 0x18);
        uVar42 = *(undefined8 *)param_2[5];
        uVar43 = *(undefined8 *)(param_2[5] + 8);
        uVar13 = *(undefined8 *)(param_2[5] + 0x10);
        uVar14 = *(undefined8 *)(param_2[5] + 0x18);
        uVar15 = *(undefined8 *)param_2[6];
        uVar16 = *(undefined8 *)(param_2[6] + 8);
        uVar17 = *(undefined8 *)(param_2[6] + 0x10);
        uVar18 = *(undefined8 *)(param_2[6] + 0x18);
        uVar19 = *(undefined8 *)param_2[7];
        uVar20 = *(undefined8 *)(param_2[7] + 8);
        uVar21 = *(undefined8 *)(param_2[7] + 0x10);
        uVar22 = *(undefined8 *)(param_2[7] + 0x18);
        *(undefined8 *)pauVar31[4] = *(undefined8 *)param_2[4];
        *(undefined8 *)(pauVar31[4] + 8) = uVar10;
        *(undefined8 *)(pauVar31[4] + 0x10) = uVar11;
        *(undefined8 *)(pauVar31[4] + 0x18) = uVar12;
        *(undefined8 *)pauVar31[5] = uVar42;
        *(undefined8 *)(pauVar31[5] + 8) = uVar43;
        *(undefined8 *)(pauVar31[5] + 0x10) = uVar13;
        *(undefined8 *)(pauVar31[5] + 0x18) = uVar14;
        *(undefined8 *)pauVar31[6] = uVar15;
        *(undefined8 *)(pauVar31[6] + 8) = uVar16;
        *(undefined8 *)(pauVar31[6] + 0x10) = uVar17;
        *(undefined8 *)(pauVar31[6] + 0x18) = uVar18;
        *(undefined8 *)pauVar31[7] = uVar19;
        *(undefined8 *)(pauVar31[7] + 8) = uVar20;
        *(undefined8 *)(pauVar31[7] + 0x10) = uVar21;
        *(undefined8 *)(pauVar31[7] + 0x18) = uVar22;
        pauVar31 = pauVar31 + 8;
        param_2 = param_2 + 8;
        param_3 = param_3 + -0x100;
      } while ((char *)0xff < param_3);
      goto LAB_1404b9a28;
    }
switchD_1404b9b72_default:
    pcVar28 = param_3;
    pauVar32 = pauVar31;
    auVar1 = param_2[1];
    auVar2 = param_2[2];
    auVar3 = param_2[3];
    auVar4 = vmovntdq_avx(*param_2);
    *pauVar32 = auVar4;
    auVar1 = vmovntdq_avx(auVar1);
    pauVar32[1] = auVar1;
    auVar1 = vmovntdq_avx(auVar2);
    pauVar32[2] = auVar1;
    auVar1 = vmovntdq_avx(auVar3);
    pauVar32[3] = auVar1;
    auVar1 = param_2[5];
    auVar2 = param_2[6];
    auVar3 = param_2[7];
    auVar4 = vmovntdq_avx(param_2[4]);
    pauVar32[4] = auVar4;
    auVar1 = vmovntdq_avx(auVar1);
    pauVar32[5] = auVar1;
    auVar1 = vmovntdq_avx(auVar2);
    pauVar32[6] = auVar1;
    auVar1 = vmovntdq_avx(auVar3);
    pauVar32[7] = auVar1;
    pauVar31 = pauVar32 + 8;
    param_2 = param_2 + 8;
    param_3 = pcVar28 + -0x100;
    switch(pcVar28) {
    case (char *)0x100:
      (*param_1)[0] = (*param_1)[0] + cVar23;
      pauVar32[0xb][6] = pauVar32[0xb][6] + 'f';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (char *)0x101:
    case (char *)0x102:
    case (char *)0x103:
    case (char *)0x104:
    case (char *)0x105:
    case (char *)0x106:
    case (char *)0x107:
    case (char *)0x108:
    case (char *)0x109:
    case (char *)0x10a:
    case (char *)0x10b:
    case (char *)0x10c:
    case (char *)0x10d:
    case (char *)0x10e:
    case (char *)0x10f:
    case (char *)0x110:
    case (char *)0x111:
    case (char *)0x112:
    case (char *)0x113:
    case (char *)0x114:
    case (char *)0x115:
    case (char *)0x116:
    case (char *)0x117:
    case (char *)0x118:
    case (char *)0x119:
    case (char *)0x11a:
    case (char *)0x11b:
    case (char *)0x11c:
    case (char *)0x11d:
    case (char *)0x11e:
    case (char *)0x11f:
    case (char *)0x120:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (char *)0x121:
    case (char *)0x122:
    case (char *)0x123:
    case (char *)0x124:
    case (char *)0x125:
    case (char *)0x126:
    case (char *)0x127:
    case (char *)0x128:
    case (char *)0x129:
    case (char *)0x12a:
    case (char *)0x12b:
    case (char *)0x12c:
    case (char *)0x12d:
    case (char *)0x12e:
    case (char *)0x12f:
    case (char *)0x130:
    case (char *)0x131:
    case (char *)0x132:
    case (char *)0x133:
    case (char *)0x134:
    case (char *)0x135:
    case (char *)0x136:
    case (char *)0x137:
    case (char *)0x138:
    case (char *)0x139:
    case (char *)0x13a:
    case (char *)0x13b:
    case (char *)0x13c:
    case (char *)0x13d:
    case (char *)0x13e:
    case (char *)0x13f:
    case (char *)0x140:
    case (char *)0x141:
    case (char *)0x142:
    case (char *)0x143:
    case (char *)0x144:
    case (char *)0x145:
    case (char *)0x146:
    case (char *)0x147:
    case (char *)0x148:
    case (char *)0x149:
    case (char *)0x14a:
    case (char *)0x14b:
    case (char *)0x14c:
    case (char *)0x14d:
    case (char *)0x14e:
    case (char *)0x14f:
    case (char *)0x150:
    case (char *)0x151:
    case (char *)0x152:
    case (char *)0x153:
    case (char *)0x154:
    case (char *)0x155:
    case (char *)0x156:
    case (char *)0x157:
    case (char *)0x158:
    case (char *)0x159:
    case (char *)0x15a:
    case (char *)0x15b:
    case (char *)0x15c:
    case (char *)0x15d:
    case (char *)0x15e:
    case (char *)0x15f:
    case (char *)0x160:
    case (char *)0x161:
    case (char *)0x162:
    case (char *)0x163:
    case (char *)0x164:
    case (char *)0x165:
    case (char *)0x166:
    case (char *)0x167:
    case (char *)0x168:
    case (char *)0x169:
    case (char *)0x16a:
    case (char *)0x16b:
    case (char *)0x16c:
    case (char *)0x16d:
    case (char *)0x16e:
    case (char *)0x16f:
    case (char *)0x170:
    case (char *)0x171:
    case (char *)0x172:
    case (char *)0x173:
    case (char *)0x174:
    case (char *)0x175:
    case (char *)0x176:
    case (char *)0x177:
    case (char *)0x178:
    case (char *)0x179:
    case (char *)0x17a:
    case (char *)0x17b:
    case (char *)0x17c:
    case (char *)0x17d:
    case (char *)0x17e:
    case (char *)0x17f:
    case (char *)0x180:
    case (char *)0x1a1:
    case (char *)0x1a2:
    case (char *)0x1a3:
    case (char *)0x1a4:
    case (char *)0x1a5:
    case (char *)0x1a6:
    case (char *)0x1a7:
    case (char *)0x1a8:
    case (char *)0x1a9:
    case (char *)0x1aa:
    case (char *)0x1ab:
    case (char *)0x1ac:
    case (char *)0x1ad:
    case (char *)0x1ae:
    case (char *)0x1af:
    case (char *)0x1b0:
    case (char *)0x1b1:
    case (char *)0x1b2:
    case (char *)0x1b3:
    case (char *)0x1b4:
    case (char *)0x1b5:
    case (char *)0x1b6:
    case (char *)0x1b7:
    case (char *)0x1b8:
    case (char *)0x1b9:
    case (char *)0x1ba:
    case (char *)0x1bb:
    case (char *)0x1bc:
    case (char *)0x1bd:
    case (char *)0x1be:
    case (char *)0x1bf:
    case (char *)0x1c0:
    case (char *)0x1c1:
    case (char *)0x1c2:
    case (char *)0x1c3:
    case (char *)0x1c4:
    case (char *)0x1c5:
    case (char *)0x1c6:
    case (char *)0x1c7:
    case (char *)0x1c8:
    case (char *)0x1c9:
    case (char *)0x1ca:
    case (char *)0x1cb:
    case (char *)0x1cc:
    case (char *)0x1cd:
    case (char *)0x1ce:
    case (char *)0x1cf:
    case (char *)0x1d0:
    case (char *)0x1d1:
    case (char *)0x1d2:
    case (char *)0x1d3:
    case (char *)0x1d4:
    case (char *)0x1d5:
    case (char *)0x1d6:
    case (char *)0x1d7:
    case (char *)0x1d8:
    case (char *)0x1d9:
    case (char *)0x1da:
    case (char *)0x1db:
    case (char *)0x1dc:
    case (char *)0x1dd:
    case (char *)0x1de:
    case (char *)0x1df:
    case (char *)0x1e0:
      goto code_r0x0001402114d0;
    case (char *)0x181:
    case (char *)0x182:
    case (char *)0x183:
    case (char *)0x184:
    case (char *)0x185:
    case (char *)0x186:
    case (char *)0x187:
    case (char *)0x188:
    case (char *)0x189:
    case (char *)0x18a:
    case (char *)0x18b:
    case (char *)0x18c:
    case (char *)0x18d:
    case (char *)0x18e:
    case (char *)0x18f:
    case (char *)0x190:
    case (char *)0x191:
    case (char *)0x192:
    case (char *)0x193:
    case (char *)0x194:
    case (char *)0x195:
    case (char *)0x196:
    case (char *)0x197:
    case (char *)0x198:
    case (char *)0x199:
    case (char *)0x19a:
    case (char *)0x19b:
    case (char *)0x19c:
    case (char *)0x19d:
    case (char *)0x19e:
    case (char *)0x19f:
    case (char *)0x1a0:
      goto switchD_1404b97eb_caseD_5;
    case (char *)0x1e1:
    case (char *)0x1e2:
    case (char *)0x1e3:
    case (char *)0x1e4:
    case (char *)0x1e5:
    case (char *)0x1e6:
    case (char *)0x1e7:
    case (char *)0x1e8:
    case (char *)0x1e9:
    case (char *)0x1ea:
    case (char *)0x1eb:
    case (char *)0x1ec:
    case (char *)0x1ed:
    case (char *)0x1ee:
    case (char *)0x1ef:
    case (char *)0x1f0:
    case (char *)0x1f1:
    case (char *)0x1f2:
    case (char *)0x1f3:
    case (char *)0x1f4:
    case (char *)0x1f5:
    case (char *)0x1f6:
    case (char *)0x1f7:
    case (char *)0x1f8:
    case (char *)0x1f9:
    case (char *)0x1fa:
    case (char *)0x1fb:
    case (char *)0x1fc:
    case (char *)0x1fd:
    case (char *)0x1fe:
    case (char *)0x1ff:
      *(char *)((longlong)param_1 * 2) = *(char *)((longlong)param_1 * 2) - unaff_BH;
      (*param_1)[0] = (*param_1)[0] + (char)((ulonglong)pauVar31 >> 8);
      DAT_17dd18142 = DAT_17dd18142 - unaff_BH;
      (*param_1)[0] = (*param_1)[0] + cVar23;
      cVar38 = (char)param_3;
      if (SBORROW1((*param_1)[0],cVar23)) {
        *param_3 = *param_3 + cVar38;
        *param_3 = *param_3 + cVar38;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      (*param_1)[0] = (*param_1)[0] + cVar23;
      (*param_1)[0] = (*param_1)[0] + cVar23;
      pcVar28 = (char *)(CONCAT71((int7)(CONCAT62(uVar30,CONCAT11(0xf8,cVar23)) >> 8),cVar23) ^ 0x3e
                        );
      cVar23 = (char)pcVar28;
      *pcVar28 = *pcVar28 + cVar23;
      *(uint *)*param_2 = *(uint *)*param_2 ^ (uint)pcVar28;
      pcVar28[0x320038fb] = pcVar28[0x320038fb] + -8;
      *pcVar28 = *pcVar28 + cVar23;
      *(char *)((longlong)pcVar28 * 2) = cVar23;
      if (pauVar31 != (undefined1 (*) [32])0x0) {
        *pcVar28 = *pcVar28 + cVar23;
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      *pcVar28 = *pcVar28 + cVar23;
      uVar27 = uRam0000000000000000;
      uVar41 = (ulonglong)uRam0000000000000000;
      pcVar28[0x330038ee] = pcVar28[0x330038ee] + -8;
      *param_3 = *param_3 + cVar23;
      *param_3 = *param_3 + (char)((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff);
      bVar25 = DAT_b4000049940038ee;
      *param_3 = *param_3 + DAT_b4000049940038ee;
      uVar30 = (undefined6)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) >> 0x10);
      pcVar35 = (char *)CONCAT62(uVar30,CONCAT11(0x49,bVar25));
      cVar23 = *pcVar35;
      *pcVar35 = *pcVar35 + bVar25;
      if (*pcVar35 == '\0' || SCARRY1(cVar23,bVar25) != *pcVar35 < '\0') {
        pbVar29 = (byte *)CONCAT62(uVar30,CONCAT11(0x24,bVar25));
        if (bVar25 < *pbVar29) {
          pbVar29[-0x1ffc703] = pbVar29[-0x1ffc703] + unaff_BL;
          *param_3 = *param_3 + cVar38;
          *(code **)(((ulonglong)pcVar28 & 0xffffffff) - 8) = switchD_1404b97eb::caseD_1;
          *pbVar29 = *pbVar29 + bVar25;
          *pbVar29 = *pbVar29 + 1;
          *(char *)(uVar41 + 0x52) = *(char *)(uVar41 + 0x52) + bVar25;
          *pbVar29 = *pbVar29 + bVar25;
          *(undefined8 *)(((ulonglong)pcVar28 & 0xffffffff) - 0x10) = 0x68000052;
          *pbVar29 = *pbVar29 + 1;
          pbVar29[0x52] = pbVar29[0x52] + (char)(uVar27 >> 8);
          *pbVar29 = *pbVar29 + bVar25;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *pbVar29 = *pbVar29 + bVar25;
      }
      else {
        *pcVar35 = *pcVar35 + bVar25;
        cVar23 = *pcVar35;
        while (uVar41 = uVar41 - 1, uVar41 != 0 && cVar23 != '\0') {
          *pcVar35 = *pcVar35 + bVar25;
          cVar23 = *pcVar35;
        }
        if ((char)bVar25 < *pcVar35) {
          *pcVar35 = *pcVar35 + bVar25;
          _DAT_ca0038fbf800004a = (int)pcVar35;
          *pcVar35 = *pcVar35 + bVar25;
          uVar27 = (int)pcVar35 + 0x43ffffb5;
          out(0x38,uVar27);
          *unaff_RSI = *unaff_RSI + (char)(uVar41 >> 8);
          *param_3 = *param_3 + (char)uVar27;
          LOCK();
          *(char *)((ulonglong)uVar27 * 2) = (char)uVar41;
          UNLOCK();
          pcVar28 = (char *)(ulonglong)CONCAT31((int3)(uVar27 >> 8),DAT_e900004c8c0038fb);
          *pcVar28 = *pcVar28 + cVar38;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      uVar7 = (undefined7)((ulonglong)unaff_RDI >> 8);
      *param_3 = *param_3 + cVar38;
      cVar23 = in(0xfc);
      pcVar28 = (char *)(CONCAT71(uVar7,cVar23) & 0xffffffff);
      *pcVar28 = *pcVar28 + cVar23;
      LOCK();
      *pcVar28 = *pcVar28 + cVar38;
      UNLOCK();
      LOCK();
      *pcVar28 = *pcVar28 + cVar38;
      UNLOCK();
      pcVar28 = (char *)(CONCAT71(uVar7,cVar23 + -0x4f) & 0xffffffff);
      *pcVar28 = *pcVar28 + cVar23 + -0x4f;
      uVar8 = CONCAT71(uVar7,cVar23 + 'b');
      pcVar28 = (char *)(uVar8 & 0xffffffff);
      *pcVar28 = *pcVar28 + cVar23 + 'b';
      *param_3 = *param_3 + cVar38;
      *param_3 = *param_3 + cVar38;
      cVar23 = *param_3;
      *param_3 = *param_3 + cVar38;
      if (SCARRY1(cVar23,cVar38)) {
        pcVar28[-3] = pcVar28[-3] + ((char)((ulonglong)unaff_RDI >> 0x18) >> 7);
      }
      *param_3 = *param_3 + cVar38;
      pcVar6 = (code *)swi(3);
      (*pcVar6)(CONCAT62((int6)(uVar41 >> 0x10),CONCAT11((char)(uVar41 >> 8) - unaff_BH,0x4d)),
                (int)uVar8 >> 0x1f);
      return;
    default:
      goto switchD_1404b9b72_default;
    }
  }
  LOCK();
  cVar23 = (char)param_1;
  *param_3 = *param_3 + cVar23;
  UNLOCK();
  (*param_1)[0] = (*param_1)[0] + cVar23;
  (*param_1)[0] = (*param_1)[0] + cVar23;
  (*param_1)[0] = (*param_1)[0] + cVar23;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

