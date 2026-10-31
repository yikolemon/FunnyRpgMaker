/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022b140 */

void FUN_1022b140(undefined1 (*param_1) [32],int param_2,undefined1 (*param_3) [32],uint param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 (*pauVar5) [32];
  undefined1 (*pauVar6) [32];
  undefined1 (*pauVar7) [32];
  uint uVar8;
  uint uVar9;
  undefined2 uVar10;
  undefined1 auVar11 [32];
  undefined1 auVar12 [64];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  uint local_24;
  
  local_24 = DAT_10388d00 ^ (uint)&stack0xffffffe0;
  uVar8 = param_2 - (int)param_1;
  if (param_4 < 0x21) {
    FUN_1025b2d0(local_60,param_3,param_4);
    auVar12 = ZEXT3264(CONCAT230(local_60._0_2_,
                                 CONCAT228(local_60._0_2_,
                                           CONCAT226(local_60._0_2_,
                                                     CONCAT224(local_60._0_2_,
                                                               CONCAT222(local_60._0_2_,
                                                                         CONCAT220(local_60._0_2_,
                                                                                   CONCAT218(
                                                  local_60._0_2_,
                                                  CONCAT216(local_60._0_2_,
                                                            CONCAT214(local_60._0_2_,
                                                                      CONCAT212(local_60._0_2_,
                                                                                CONCAT210(local_60.
                                                  _0_2_,CONCAT28(local_60._0_2_,
                                                                 CONCAT26(local_60._0_2_,
                                                                          CONCAT24(local_60._0_2_,
                                                                                   CONCAT22(local_60
                                                  ._0_2_,local_60._0_2_))))))))))))))));
    puVar2 = *param_1;
    do {
      auVar11 = vpcmpeqw_avx2(auVar12._0_32_,*param_1);
      uVar9 = (uint)(SUB321(auVar11 >> 7,0) & 1) | (uint)(SUB321(auVar11 >> 0x17,0) & 1) << 2 |
              (uint)(SUB321(auVar11 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar11 >> 0x37,0) & 1) << 6 |
              (uint)(SUB321(auVar11 >> 0x47,0) & 1) << 8 |
              (uint)(SUB321(auVar11 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar11 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar11 >> 0x77,0) & 1) << 0xe |
              (uint)(SUB321(auVar11 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar11 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar11 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar11 >> 0xb7,0) & 1) << 0x16 |
              (uint)(SUB321(auVar11 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auVar11 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar11 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar11 >> 0xf7,0) & 1) << 0x1e;
      if (uVar9 != 0) {
        auVar12 = ZEXT3264(local_60);
        do {
          uVar1 = 0;
          for (uVar4 = uVar9; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar1 = uVar1 + 1;
          }
          pauVar7 = (undefined1 (*) [32])(*param_1 + uVar1);
          uVar4 = param_2 - (int)pauVar7;
          if (uVar4 < 0x20) {
            if (uVar4 < param_4) {
              auVar12 = ZEXT3264(CONCAT230(local_60._0_2_,
                                           CONCAT228(local_60._0_2_,
                                                     CONCAT226(local_60._0_2_,
                                                               CONCAT224(local_60._0_2_,
                                                                         CONCAT222(local_60._0_2_,
                                                                                   CONCAT220(
                                                  local_60._0_2_,
                                                  CONCAT218(local_60._0_2_,
                                                            CONCAT216(local_60._0_2_,
                                                                      CONCAT214(local_60._0_2_,
                                                                                CONCAT212(local_60.
                                                  _0_2_,CONCAT210(local_60._0_2_,
                                                                  CONCAT28(local_60._0_2_,
                                                                           CONCAT26(local_60._0_2_,
                                                                                    CONCAT24(
                                                  local_60._0_2_,
                                                  CONCAT22(local_60._0_2_,local_60._0_2_))))))))))))
                                                  ))));
              goto LAB_1022b262;
            }
            FUN_1025b2d0(local_80,pauVar7,uVar4);
            auVar12 = ZEXT3264(local_60);
            auVar11 = local_80;
          }
          else {
            auVar11 = *pauVar7;
          }
          if ((*(undefined1 (*) [32])(&DAT_10299870 + -param_4) & (auVar12._0_32_ ^ auVar11)) ==
              (undefined1  [32])0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_102283e0();
          }
          uVar9 = uVar9 ^ 1 << (uVar1 & 0x1f);
        } while (uVar9 != 0);
        auVar12 = ZEXT3264(CONCAT230(local_60._0_2_,
                                     CONCAT228(local_60._0_2_,
                                               CONCAT226(local_60._0_2_,
                                                         CONCAT224(local_60._0_2_,
                                                                   CONCAT222(local_60._0_2_,
                                                                             CONCAT220(local_60.
                                                  _0_2_,CONCAT218(local_60._0_2_,
                                                                  CONCAT216(local_60._0_2_,
                                                                            CONCAT214(local_60._0_2_
                                                                                      ,CONCAT212(
                                                  local_60._0_2_,
                                                  CONCAT210(local_60._0_2_,
                                                            CONCAT28(local_60._0_2_,
                                                                     CONCAT26(local_60._0_2_,
                                                                              CONCAT24(local_60.
                                                  _0_2_,CONCAT22(local_60._0_2_,local_60._0_2_))))))
                                                  ))))))))));
      }
LAB_1022b262:
      param_1 = param_1 + 1;
    } while (param_1 != (undefined1 (*) [32])(puVar2 + (uVar8 & 0xffffffe0)));
    uVar8 = param_2 - (int)param_1;
    if (param_4 <= uVar8) {
      FUN_1025b2d0(local_a0,param_1,uVar8);
      auVar11._2_2_ = local_60._0_2_;
      auVar11._0_2_ = local_60._0_2_;
      auVar11._4_2_ = local_60._0_2_;
      auVar11._6_2_ = local_60._0_2_;
      auVar11._8_2_ = local_60._0_2_;
      auVar11._10_2_ = local_60._0_2_;
      auVar11._12_2_ = local_60._0_2_;
      auVar11._14_2_ = local_60._0_2_;
      auVar11._16_2_ = local_60._0_2_;
      auVar11._18_2_ = local_60._0_2_;
      auVar11._20_2_ = local_60._0_2_;
      auVar11._22_2_ = local_60._0_2_;
      auVar11._24_2_ = local_60._0_2_;
      auVar11._26_2_ = local_60._0_2_;
      auVar11._28_2_ = local_60._0_2_;
      auVar11._30_2_ = local_60._0_2_;
      auVar11 = vpcmpeqw_avx2(auVar11,local_a0);
      uVar9 = (uint)(SUB321(auVar11 >> 7,0) & 1) | (uint)(SUB321(auVar11 >> 0x17,0) & 1) << 2 |
              (uint)(SUB321(auVar11 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar11 >> 0x37,0) & 1) << 6 |
              (uint)(SUB321(auVar11 >> 0x47,0) & 1) << 8 |
              (uint)(SUB321(auVar11 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar11 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar11 >> 0x77,0) & 1) << 0xe |
              (uint)(SUB321(auVar11 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar11 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar11 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar11 >> 0xb7,0) & 1) << 0x16 |
              (uint)(SUB321(auVar11 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auVar11 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar11 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar11 >> 0xf7,0) & 1) << 0x1e;
      if (uVar9 != 0) {
        do {
          uVar1 = 0;
          for (uVar4 = uVar9; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar1 = uVar1 + 1;
          }
          if (uVar8 - param_4 < uVar1) break;
          FUN_1025b2d0(local_c0,*param_1 + uVar1,param_2 - (int)(*param_1 + uVar1));
          if ((*(undefined1 (*) [32])(&DAT_10299870 + -param_4) & (local_c0 ^ local_60)) ==
              (undefined1  [32])0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_102283e0();
          }
          uVar9 = uVar9 ^ 1 << (uVar1 & 0x1f);
        } while (uVar9 != 0);
      }
    }
  }
  else {
    local_60 = *param_3;
    pauVar7 = (undefined1 (*) [32])((int)param_1 + (uVar8 - param_4));
    uVar10 = local_60._0_2_;
    local_80._2_2_ = uVar10;
    local_80._0_2_ = uVar10;
    local_80._4_2_ = uVar10;
    local_80._6_2_ = uVar10;
    local_80._8_2_ = uVar10;
    local_80._10_2_ = uVar10;
    local_80._12_2_ = uVar10;
    local_80._14_2_ = uVar10;
    local_80._16_2_ = uVar10;
    local_80._18_2_ = uVar10;
    local_80._20_2_ = uVar10;
    local_80._22_2_ = uVar10;
    local_80._24_2_ = uVar10;
    local_80._26_2_ = uVar10;
    local_80._28_2_ = uVar10;
    local_80._30_2_ = uVar10;
    do {
      auVar11 = vpcmpeqw_avx2(local_80,*param_1);
      for (uVar8 = (uint)(SUB321(auVar11 >> 7,0) & 1) | (uint)(SUB321(auVar11 >> 0x17,0) & 1) << 2 |
                   (uint)(SUB321(auVar11 >> 0x27,0) & 1) << 4 |
                   (uint)(SUB321(auVar11 >> 0x37,0) & 1) << 6 |
                   (uint)(SUB321(auVar11 >> 0x47,0) & 1) << 8 |
                   (uint)(SUB321(auVar11 >> 0x57,0) & 1) << 10 |
                   (uint)(SUB321(auVar11 >> 0x67,0) & 1) << 0xc |
                   (uint)(SUB321(auVar11 >> 0x77,0) & 1) << 0xe |
                   (uint)(SUB321(auVar11 >> 0x87,0) & 1) << 0x10 |
                   (uint)(SUB321(auVar11 >> 0x97,0) & 1) << 0x12 |
                   (uint)(SUB321(auVar11 >> 0xa7,0) & 1) << 0x14 |
                   (uint)(SUB321(auVar11 >> 0xb7,0) & 1) << 0x16 |
                   (uint)(SUB321(auVar11 >> 199,0) & 1) << 0x18 |
                   (uint)(SUB321(auVar11 >> 0xd7,0) & 1) << 0x1a |
                   (uint)(SUB321(auVar11 >> 0xe7,0) & 1) << 0x1c |
                   (uint)(SUB321(auVar11 >> 0xf7,0) & 1) << 0x1e; uVar8 != 0;
          uVar8 = uVar8 ^ 1 << (uVar9 & 0x1f)) {
        uVar9 = 0;
        for (uVar1 = uVar8; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1 | 0x80000000) {
          uVar9 = uVar9 + 1;
        }
        pauVar5 = (undefined1 (*) [32])(*param_1 + uVar9);
        if (pauVar7 < pauVar5) break;
        if (local_60 == *pauVar5) {
          pauVar5 = pauVar5 + 1;
          pauVar6 = param_3 + 1;
          uVar4 = param_4 - 0x24;
          uVar1 = param_4 - 0x20;
          while (uVar3 = uVar4, 3 < uVar1) {
            if (*(int *)*pauVar5 != *(int *)*pauVar6) goto LAB_1022b410;
            pauVar5 = (undefined1 (*) [32])(*pauVar5 + 4);
            pauVar6 = (undefined1 (*) [32])(*pauVar6 + 4);
            uVar4 = uVar3 - 4;
            uVar1 = uVar3;
          }
          if (uVar3 == 0xfffffffc) {
LAB_1022b47d:
                    /* WARNING: Subroutine does not return */
            FUN_102283e0();
          }
LAB_1022b410:
          if (((*pauVar5)[0] == (*pauVar6)[0]) &&
             ((uVar3 == 0xfffffffd ||
              (((*pauVar5)[1] == (*pauVar6)[1] &&
               ((uVar3 == 0xfffffffe ||
                (((*pauVar5)[2] == (*pauVar6)[2] &&
                 ((uVar3 == 0xffffffff || ((*pauVar5)[3] == (*pauVar6)[3]))))))))))))
          goto LAB_1022b47d;
        }
      }
      param_1 = param_1 + 1;
    } while (param_1 <= pauVar7);
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

