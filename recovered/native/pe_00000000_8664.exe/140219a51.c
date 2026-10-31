/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140219a51 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001402114d3) overlaps instruction at (ram,0x0001402114d2)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] thunk_FUN_1404b9e70(undefined1 (*param_1) [16],byte param_2,byte *param_3)

{
  undefined1 auVar1 [32];
  code *pcVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  ushort uVar6;
  uint uVar8;
  undefined1 (*pauVar9) [16];
  char *pcVar10;
  undefined7 uVar13;
  ulonglong uVar12;
  undefined6 uVar14;
  char cVar15;
  undefined1 (*pauVar16) [32];
  ulonglong uVar17;
  uint *puVar18;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *puVar19;
  char *unaff_RSI;
  char *unaff_RDI;
  byte bVar20;
  longlong lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [32];
  int iVar7;
  byte *pbVar11;
  
  puVar18 = (uint *)(ulonglong)param_2;
  bVar3 = (byte)param_1;
  iVar7 = (int)param_1;
  uVar14 = (undefined6)((ulonglong)param_1 >> 0x10);
  if (param_3 < (byte *)0x10) {
    pbVar11 = param_3 + (longlong)*param_1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(param_3) {
    default:
      goto code_r0x0001402114d0;
    case (byte *)0x2:
      (*param_1)[0] = (*param_1)[0] + bVar3;
      (*param_1)[0] = (*param_1)[0] + bVar3;
      *(int *)*param_1 = *(int *)*param_1 + iVar7;
      (*param_1)[0] = (*param_1)[0] + bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x3:
      (*param_1)[0] = (*param_1)[0] + bVar3;
      (*param_1)[0] = (*param_1)[0] + bVar3;
      (*param_1)[0] = (*param_1)[0] + bVar3;
      (*param_1)[0] = (*param_1)[0] + bVar3;
      *(int *)*param_1 = *(int *)*param_1 + iVar7;
      cVar15 = (*param_1)[0];
      (*param_1)[0] = (*param_1)[0] + bVar3;
      if (!SCARRY1(cVar15,bVar3)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(int *)*param_1 = *(int *)*param_1 + iVar7;
      (*param_1)[0] = (*param_1)[0] + bVar3;
      *pbVar11 = *pbVar11;
      (*param_1)[0] = (*param_1)[0] + bVar3;
      (*param_1)[0] = (*param_1)[0] + bVar3;
      (*param_1)[0] = (*param_1)[0] + bVar3;
      (*param_1)[0] = (*param_1)[0] + bVar3;
      (*param_1)[0] = (*param_1)[0] + bVar3;
      *(int *)*param_1 = *(int *)*param_1 + iVar7;
      (*param_1)[0] = (*param_1)[0] + bVar3;
      (*param_1)[0] = (*param_1)[0] + bVar3;
      (*param_1)[0] = (*param_1)[0] + bVar3;
      (*param_1)[0] = (*param_1)[0] + bVar3;
      (*param_1)[0] = (*param_1)[0] + bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x4:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x5:
      func_0x0001104c42c3();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0xc:
      *(char *)((longlong)param_1 * 2) = *(char *)((longlong)param_1 * 2) - unaff_BH;
      (*param_1)[0] = (*param_1)[0] + (char)((ulonglong)pbVar11 >> 8);
      DAT_17dd18142 = DAT_17dd18142 - unaff_BH;
      (*param_1)[0] = (*param_1)[0] + bVar3;
      if (SBORROW1((*param_1)[0],bVar3)) {
        *param_3 = *param_3 + (char)param_3;
        *param_3 = *param_3 + (char)param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      (*param_1)[0] = (*param_1)[0] + bVar3;
      (*param_1)[0] = (*param_1)[0] + bVar3;
      pcVar10 = (char *)(CONCAT71((int7)(CONCAT62(uVar14,CONCAT11(0xf8,bVar3)) >> 8),bVar3) ^ 0x3e);
      cVar15 = (char)pcVar10;
      *pcVar10 = *pcVar10 + cVar15;
      *puVar18 = *puVar18 ^ (uint)pcVar10;
      pcVar10[0x320038fb] = pcVar10[0x320038fb] + -8;
      *pcVar10 = *pcVar10 + cVar15;
      *(char *)((longlong)pcVar10 * 2) = cVar15;
      if (pbVar11 != (byte *)0x0) {
        *pcVar10 = *pcVar10 + cVar15;
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      *pcVar10 = *pcVar10 + cVar15;
      uVar17 = (ulonglong)uRam0000000000000000;
      pcVar10[0x330038ee] = pcVar10[0x330038ee] + -8;
      *param_3 = *param_3 + cVar15;
      uVar12 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
      puVar19 = (undefined1 *)((ulonglong)pcVar10 & 0xffffffff);
      break;
    case (byte *)0xd:
switchD_1404b9eae_caseD_d:
      *param_3 = *param_3 + (char)param_1;
      goto code_r0x0001402114d0;
    }
  }
  else {
    auVar22._8_8_ = (longlong)puVar18 * 0x101010101010101;
    auVar22._0_8_ = (longlong)puVar18 * 0x101010101010101;
    if (param_3 < (byte *)0x21) {
      *param_1 = auVar22;
      *(undefined1 (*) [16])(param_3 + (longlong)param_1[-1]) = auVar22;
      return param_1;
    }
    pauVar9 = param_1;
    if (DAT_140614ea8 < 3) {
      if ((param_3 <= DAT_140614eb0) || ((DAT_14062a6b4 & 2) == 0)) {
        lVar21 = ((ulonglong)param_1 & 0xf) - 0x10;
        param_1 = (undefined1 (*) [16])((longlong)param_1 - lVar21);
        param_3 = param_3 + lVar21;
        if ((byte *)0x80 < param_3) {
          do {
            *param_1 = auVar22;
            param_1[1] = auVar22;
            param_1[2] = auVar22;
            param_1[3] = auVar22;
            param_1[4] = auVar22;
            param_1[5] = auVar22;
            param_1[6] = auVar22;
            param_1[7] = auVar22;
            param_1 = param_1 + 8;
            param_3 = param_3 + -0x80;
          } while ((byte *)0x7f < param_3);
        }
                    /* WARNING: Could not recover jumptable at 0x0001404ba1b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pauVar9 = (undefined1 (*) [16])
                  (*(switchD_1404b97eb::caseD_1 +
                    *(uint *)(&DAT_14056e738 + ((ulonglong)(param_3 + 0xf) >> 4) * 4)))
                            (param_1,(longlong)puVar18 - lVar21);
        return pauVar9;
      }
code_r0x0001404b9e69:
      for (; param_3 != (byte *)0x0; param_3 = param_3 + -1) {
        (*pauVar9)[0] = param_2;
        pauVar9 = (undefined1 (*) [16])(*pauVar9 + 1);
      }
      return param_1;
    }
    if (((DAT_140614eb0 < param_3) && (param_3 <= DAT_140614eb8)) && ((DAT_14062a6b4 & 2) != 0))
    goto code_r0x0001404b9e69;
    auVar23._16_16_ = auVar22;
    auVar23._0_16_ = auVar22;
    lVar21 = ((ulonglong)param_1 & 0x1f) - 0x20;
    pauVar16 = (undefined1 (*) [32])((longlong)param_1 - lVar21);
    param_3 = param_3 + lVar21;
    if (param_3 < (byte *)0x101) {
LAB_1404b9fea:
                    /* WARNING: Could not recover jumptable at 0x0001404ba004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pauVar9 = (undefined1 (*) [16])
                (*(switchD_1404b97eb::caseD_1 +
                  *(uint *)(&DAT_14056e6f0 + ((ulonglong)(param_3 + 0x1f) >> 5) * 4)))();
      return pauVar9;
    }
    if (param_3 <= DAT_140614eb8) {
      do {
        *pauVar16 = auVar23;
        pauVar16[1] = auVar23;
        pauVar16[2] = auVar23;
        pauVar16[3] = auVar23;
        pauVar16[4] = auVar23;
        pauVar16[5] = auVar23;
        pauVar16[6] = auVar23;
        pauVar16[7] = auVar23;
        pauVar16 = pauVar16 + 8;
        param_3 = param_3 + -0x100;
      } while ((byte *)0xff < param_3);
      goto LAB_1404b9fea;
    }
    do {
      pbVar11 = param_3;
      auVar1 = vmovntdq_avx(auVar23);
      *pauVar16 = auVar1;
      auVar1 = vmovntdq_avx(auVar23);
      pauVar16[1] = auVar1;
      auVar1 = vmovntdq_avx(auVar23);
      pauVar16[2] = auVar1;
      auVar1 = vmovntdq_avx(auVar23);
      pauVar16[3] = auVar1;
      auVar1 = vmovntdq_avx(auVar23);
      pauVar16[4] = auVar1;
      auVar1 = vmovntdq_avx(auVar23);
      pauVar16[5] = auVar1;
      auVar1 = vmovntdq_avx(auVar23);
      pauVar16[6] = auVar1;
      auVar1 = vmovntdq_avx(auVar23);
      pauVar16[7] = auVar1;
      pauVar16 = pauVar16 + 8;
      param_3 = pbVar11 + -0x100;
    } while ((byte *)0xff < param_3);
    switch(pbVar11) {
    case (byte *)0x100:
      cVar15 = (char)pauVar16 + (char)((ulonglong)pauVar16 >> 8);
      uVar17 = CONCAT71((int7)((ulonglong)pauVar16 >> 8),cVar15);
      bVar20 = (byte)param_3;
      *param_3 = *param_3 + bVar20;
      puVar19 = (undefined1 *)0xea0038e7;
      bVar4 = *param_3;
      *param_3 = *param_3 + bVar20;
      *unaff_RDI = (*unaff_RDI - bVar3) - CARRY1(bVar4,bVar20);
      uVar6 = CONCAT11((char)((ulonglong)param_1 >> 8) + cVar15,bVar3);
      pbVar11 = (byte *)CONCAT62(uVar14,uVar6);
      *unaff_RDI = (*unaff_RDI - bVar3) - (*pbVar11 < bVar3);
      unaff_RSI[0x47] = unaff_RSI[0x47] + unaff_BH;
      *pbVar11 = *pbVar11 + bVar3;
      if ((char)*pbVar11 <= (char)bVar3) goto LAB_3d00004c;
      *pbVar11 = *pbVar11 + bVar3;
      uVar13 = (undefined7)((ulonglong)pbVar11 >> 8);
      cVar15 = *(char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) +
                        ((ulonglong)uVar6 & 0xff));
      pcVar10 = (char *)CONCAT71(uVar13,cVar15);
      *pcVar10 = *pcVar10 + cVar15;
      *param_3 = *param_3 + cRam33000048d70038fb;
      uVar12 = CONCAT71(uVar13,uRam94000049330038ee);
      break;
    case (byte *)0x121:
    case (byte *)0x122:
    case (byte *)0x123:
    case (byte *)0x124:
    case (byte *)0x125:
    case (byte *)0x126:
    case (byte *)0x127:
    case (byte *)0x128:
    case (byte *)0x129:
    case (byte *)0x12a:
    case (byte *)0x12b:
    case (byte *)0x12c:
    case (byte *)0x12d:
    case (byte *)0x12e:
    case (byte *)0x12f:
    case (byte *)0x130:
    case (byte *)0x131:
    case (byte *)0x132:
    case (byte *)0x133:
    case (byte *)0x134:
    case (byte *)0x135:
    case (byte *)0x136:
    case (byte *)0x137:
    case (byte *)0x138:
    case (byte *)0x139:
    case (byte *)0x13a:
    case (byte *)0x13b:
    case (byte *)0x13c:
    case (byte *)0x13d:
    case (byte *)0x13e:
    case (byte *)0x13f:
    case (byte *)0x140:
      if (pauVar16 == (undefined1 (*) [32])0x1 ||
          (ulonglong)(&switchD_1404ba0c4::switchdataD_14056e714)[(ulonglong)(pbVar11 + -0xe1) >> 5]
          == 0xfffffffebfdeeb30) {
        param_1 = (undefined1 (*) [16])(ulonglong)(uint)(iVar7 - *(int *)*param_1);
      }
      bVar4 = (byte)param_1;
      (*param_1)[0] = (*param_1)[0] + bVar4;
      (*param_1)[0] = (*param_1)[0] + bVar4;
      (*param_1)[0] = (*param_1)[0] + bVar4;
      (*param_1)[0] = (*param_1)[0] + bVar4;
      (*param_1)[0] = (*param_1)[0] + bVar4;
      (*param_1)[0] = (*param_1)[0] + bVar4;
      (*param_1)[0] = (*param_1)[0] + bVar4;
      (*param_1)[0] = (*param_1)[0] + bVar4;
      (*param_1)[0] = (*param_1)[0] + bVar4;
      (*param_1)[0] = (*param_1)[0] + bVar4;
      (*param_1)[0] = (*param_1)[0] + bVar4;
      (*param_1)[0] = (*param_1)[0] + bVar4;
      (*param_1)[0] = (*param_1)[0] + bVar4;
      bVar3 = (*param_1)[0];
      (*param_1)[0] = (*param_1)[0] + bVar4;
      if (CARRY1(bVar3,bVar4)) {
        (*param_1)[0] = (*param_1)[0] + bVar4;
        (*param_1)[0] = (*param_1)[0] + bVar4;
        (*param_1)[0] = (*param_1)[0] + bVar4;
        (*param_1)[0] = (*param_1)[0] + bVar4;
        (*param_1)[0] = (*param_1)[0] + bVar4;
        (*param_1)[0] = (*param_1)[0] + bVar4;
        (*param_1)[0] = (*param_1)[0] + bVar4;
        (*param_1)[0] = (*param_1)[0] + bVar4;
        *(int *)*param_1 = *(int *)*param_1 + (int)param_1;
        (*param_1)[0] = (*param_1)[0] + bVar4;
        (*param_1)[0] = (*param_1)[0] + bVar4;
        (*param_1)[0] = (*param_1)[0] + bVar4;
        (*param_1)[0] = (*param_1)[0] + bVar4;
        (*param_1)[0] = (*param_1)[0] + bVar4;
        (*param_1)[0] = (*param_1)[0] + bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(char *)((longlong)param_1 * 2) = *(char *)((longlong)param_1 * 2) + bVar4;
      (*param_1)[0] = (*param_1)[0] + bVar4;
    case (byte *)0x101:
    case (byte *)0x102:
    case (byte *)0x103:
    case (byte *)0x104:
    case (byte *)0x105:
    case (byte *)0x106:
    case (byte *)0x107:
    case (byte *)0x108:
    case (byte *)0x109:
    case (byte *)0x10a:
    case (byte *)0x10b:
    case (byte *)0x10c:
    case (byte *)0x10d:
    case (byte *)0x10e:
    case (byte *)0x10f:
    case (byte *)0x110:
    case (byte *)0x111:
    case (byte *)0x112:
    case (byte *)0x113:
    case (byte *)0x114:
    case (byte *)0x115:
    case (byte *)0x116:
    case (byte *)0x117:
    case (byte *)0x118:
    case (byte *)0x119:
    case (byte *)0x11a:
    case (byte *)0x11b:
    case (byte *)0x11c:
    case (byte *)0x11d:
    case (byte *)0x11e:
    case (byte *)0x11f:
    case (byte *)0x120:
      (*param_1)[0] = (*param_1)[0] + (char)param_1;
      (*param_1)[0] = (*param_1)[0] + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
      goto code_r0x0001402114d0;
    case (byte *)0x1e1:
    case (byte *)0x1e2:
    case (byte *)0x1e3:
    case (byte *)0x1e4:
    case (byte *)0x1e5:
    case (byte *)0x1e6:
    case (byte *)0x1e7:
    case (byte *)0x1e8:
    case (byte *)0x1e9:
    case (byte *)0x1ea:
    case (byte *)0x1eb:
    case (byte *)0x1ec:
    case (byte *)0x1ed:
    case (byte *)0x1ee:
    case (byte *)0x1ef:
    case (byte *)0x1f0:
    case (byte *)0x1f1:
    case (byte *)0x1f2:
    case (byte *)0x1f3:
    case (byte *)0x1f4:
    case (byte *)0x1f5:
    case (byte *)0x1f6:
    case (byte *)0x1f7:
    case (byte *)0x1f8:
    case (byte *)0x1f9:
    case (byte *)0x1fa:
    case (byte *)0x1fb:
    case (byte *)0x1fc:
    case (byte *)0x1fd:
    case (byte *)0x1fe:
    case (byte *)0x1ff:
      param_1 = (undefined1 (*) [16])
                CONCAT71((int7)((ulonglong)param_1 >> 8),
                         bVar3 + (char)((ulonglong)((longlong)puVar18 - lVar21) >> 8));
      goto switchD_1404b9eae_caseD_d;
    }
  }
  *param_3 = *param_3 + (char)uVar12;
  bVar4 = DAT_b4000049940038ee;
  *param_3 = *param_3 + DAT_b4000049940038ee;
  uVar14 = (undefined6)(uVar12 >> 0x10);
  pbVar11 = (byte *)CONCAT62(uVar14,CONCAT11(0x49,bVar4));
  bVar3 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar4;
  cVar15 = (char)param_3;
  if (*pbVar11 == 0 || SCARRY1(bVar3,bVar4) != (char)*pbVar11 < '\0') {
    pbVar11 = (byte *)CONCAT62(uVar14,CONCAT11(0x24,bVar4));
    if (bVar4 < *pbVar11) {
      pbVar11[-0x1ffc703] = pbVar11[-0x1ffc703] + unaff_BL;
      *param_3 = *param_3 + cVar15;
      *(code **)(puVar19 + -8) = switchD_1404b97eb::caseD_1;
      *pbVar11 = *pbVar11 + bVar4;
      *pbVar11 = *pbVar11 + 1;
      *(char *)(uVar17 + 0x52) = *(char *)(uVar17 + 0x52) + bVar4;
      *pbVar11 = *pbVar11 + bVar4;
      *(undefined8 *)(puVar19 + -0x10) = 0x68000052;
      *pbVar11 = *pbVar11 + 1;
      pbVar11[0x52] = pbVar11[0x52] + (char)(uVar17 >> 8);
      *pbVar11 = *pbVar11 + bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pbVar11 = *pbVar11 + bVar4;
  }
  else {
    *pbVar11 = *pbVar11 + bVar4;
    bVar3 = *pbVar11;
    while (uVar17 = uVar17 - 1, uVar17 != 0 && bVar3 != 0) {
      *pbVar11 = *pbVar11 + bVar4;
      bVar3 = *pbVar11;
    }
    if ((char)bVar4 < (char)*pbVar11) {
      *pbVar11 = *pbVar11 + bVar4;
      _DAT_ca0038fbf800004a = SUB84(pbVar11,0);
LAB_3d00004c:
      *pbVar11 = *pbVar11 + (char)pbVar11;
      uVar8 = (int)pbVar11 + 0x43ffffb5;
      out(0x38,uVar8);
      *unaff_RSI = *unaff_RSI + (char)(uVar17 >> 8);
      *param_3 = *param_3 + (char)uVar8;
      LOCK();
      *(char *)((ulonglong)uVar8 * 2) = (char)uVar17;
      UNLOCK();
      pcVar10 = (char *)(ulonglong)CONCAT31((int3)(uVar8 >> 8),DAT_e900004c8c0038fb);
      *pcVar10 = *pcVar10 + (char)param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  uVar13 = (undefined7)((ulonglong)unaff_RDI >> 8);
  *param_3 = *param_3 + cVar15;
  cVar5 = in(0xfc);
  pcVar10 = (char *)(CONCAT71(uVar13,cVar5) & 0xffffffff);
  *pcVar10 = *pcVar10 + cVar5;
  LOCK();
  *pcVar10 = *pcVar10 + cVar15;
  UNLOCK();
  LOCK();
  *pcVar10 = *pcVar10 + cVar15;
  UNLOCK();
  pcVar10 = (char *)(CONCAT71(uVar13,cVar5 + -0x4f) & 0xffffffff);
  *pcVar10 = *pcVar10 + cVar5 + -0x4f;
  uVar12 = CONCAT71(uVar13,cVar5 + 'b');
  pcVar10 = (char *)(uVar12 & 0xffffffff);
  *pcVar10 = *pcVar10 + cVar5 + 'b';
  *param_3 = *param_3 + cVar15;
  *param_3 = *param_3 + cVar15;
  bVar3 = *param_3;
  *param_3 = *param_3 + cVar15;
  if (SCARRY1(bVar3,cVar15)) {
    pcVar10[-3] = pcVar10[-3] + ((char)((ulonglong)unaff_RDI >> 0x18) >> 7);
  }
  *param_3 = *param_3 + cVar15;
  pcVar2 = (code *)swi(3);
  pauVar9 = (undefined1 (*) [16])
            (*pcVar2)(CONCAT62((int6)(uVar17 >> 0x10),CONCAT11((char)(uVar17 >> 8) - unaff_BH,0x4d))
                      ,(int)uVar12 >> 0x1f);
  return pauVar9;
code_r0x0001402114d0:
  cVar15 = (char)param_1;
  (*param_1)[0] = (*param_1)[0] + cVar15;
  LOCK();
  *param_3 = *param_3 + cVar15;
  UNLOCK();
  LOCK();
  *param_3 = *param_3 + cVar15;
  UNLOCK();
  (*param_1)[0] = (*param_1)[0] + cVar15;
  (*param_1)[0] = (*param_1)[0] + cVar15;
  (*param_1)[0] = (*param_1)[0] + cVar15;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

