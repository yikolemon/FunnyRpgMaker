/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022a270 */

void FUN_1022a270(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                 uint param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  undefined1 (*pauVar6) [16];
  short sVar7;
  uint uVar8;
  int iVar9;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  bool bVar12;
  uint uVar13;
  uint uVar14;
  undefined1 (*pauStack_6c) [16];
  undefined1 (*pauStack_68) [16];
  uint uStack_64;
  undefined1 local_30 [16];
  uint local_14;
  undefined1 auStack_10 [12];
  
  local_14 = DAT_10388d00 ^ (uint)auStack_10;
  if (param_4 != 0) {
    if (param_4 == 1) {
      uStack_64 = (uint)*(ushort *)*param_3;
      pauStack_68 = param_2;
      pauStack_6c = param_1;
      FUN_102299b0();
    }
    else {
      uVar4 = param_4 * 2;
      uVar8 = (int)param_2 - (int)param_1;
      if (uVar4 <= uVar8) {
        if (((DAT_10389df8 & 0x20) == 0) || (uVar8 < 0x20)) {
          if (((DAT_10389df8 & 4) == 0) || (uVar8 < 0x10)) {
            pauVar6 = (undefined1 (*) [16])((int)param_1 + uVar8 + param_4 * -2 + 2);
            if (param_1 != pauVar6) {
              sVar7 = *(short *)*param_3;
              do {
                if (*(short *)*param_1 == sVar7) {
                  uVar4 = 1;
                  while (*(short *)(*param_1 + uVar4 * 2) == *(short *)(*param_3 + uVar4 * 2)) {
                    uVar4 = uVar4 + 1;
                    if (uVar4 == param_4) goto LAB_1022a46b;
                  }
                  sVar7 = *(short *)*param_3;
                }
                param_1 = (undefined1 (*) [16])(*param_1 + 2);
              } while (param_1 != pauVar6);
            }
          }
          else if (uVar4 < 0x11) {
            param_4 = param_4 & 0x7fffffff;
            pauStack_6c = &local_30;
            pauStack_68 = param_3;
            uStack_64 = uVar4;
            FUN_1025b2d0();
            auVar1 = local_30;
            bVar12 = (undefined1 *)0xfffffff3 < &pauStack_6c;
            do {
              iVar9 = pcmpestri(local_30,*param_1,0xd,param_4,8);
              if (bVar12) {
                param_1 = (undefined1 (*) [16])(*param_1 + iVar9 * 2);
                if (iVar9 <= (int)(8 - param_4)) goto LAB_1022a46b;
              }
              else {
                param_1 = param_1 + 1;
              }
              bVar12 = param_1 < param_2 + -1;
            } while (param_1 <= param_2 + -1);
            uVar4 = (int)param_2 - (int)param_1;
            if (uVar4 != 0) {
              pauStack_6c = &local_30;
              pauStack_68 = param_1;
              uStack_64 = uVar4;
              FUN_1025b2d0();
              pcmpestri(auVar1,local_30,0xd,param_4,uVar4 >> 1);
            }
          }
          else {
            auVar1 = *param_3;
            uVar5 = (int)param_1 + param_4 * -2;
            bVar12 = CARRY4(uVar5,uVar8);
            pauVar6 = (undefined1 (*) [16])(uVar5 + uVar8);
            do {
              iVar9 = pcmpestri(auVar1,*param_1,0xd,8,8);
              if (bVar12) {
                if (iVar9 == 0) {
LAB_1022a400:
                  pauVar10 = param_1 + 1;
                  pauVar11 = param_3 + 1;
                  uVar8 = uVar4 - 0x14;
                  uVar5 = uVar4 - 0x10;
                  while (uVar13 = uVar8, 3 < uVar5) {
                    if (*(int *)*pauVar10 != *(int *)*pauVar11) goto LAB_1022a42b;
                    pauVar10 = (undefined1 (*) [16])(*pauVar10 + 4);
                    pauVar11 = (undefined1 (*) [16])(*pauVar11 + 4);
                    uVar8 = uVar13 - 4;
                    uVar5 = uVar13;
                  }
                  if (uVar13 == 0xfffffffc) break;
LAB_1022a42b:
                  if (((*pauVar10)[0] == (*pauVar11)[0]) &&
                     ((uVar13 == 0xfffffffd ||
                      (((*pauVar10)[1] == (*pauVar11)[1] &&
                       ((uVar13 == 0xfffffffe ||
                        (((*pauVar10)[2] == (*pauVar11)[2] &&
                         ((uVar13 == 0xffffffff || ((*pauVar10)[3] == (*pauVar11)[3]))))))))))))
                  break;
                }
                else {
                  param_1 = (undefined1 (*) [16])(*param_1 + iVar9 * 2);
                  if (pauVar6 < param_1) break;
                  uVar8 = *(uint *)*param_1 ^ auVar1._0_4_;
                  uVar5 = *(uint *)(*param_1 + 4) ^ auVar1._4_4_;
                  uVar13 = *(uint *)(*param_1 + 8) ^ auVar1._8_4_;
                  uVar14 = *(uint *)(*param_1 + 0xc) ^ auVar1._12_4_;
                  auVar2._4_4_ = uVar5;
                  auVar2._0_4_ = uVar8;
                  auVar2._8_4_ = uVar13;
                  auVar2._12_4_ = uVar14;
                  auVar3._4_4_ = uVar5;
                  auVar3._0_4_ = uVar8;
                  auVar3._8_4_ = uVar13;
                  auVar3._12_4_ = uVar14;
                  if ((auVar2 & auVar3) == (undefined1  [16])0x0) goto LAB_1022a400;
                }
                param_1 = (undefined1 (*) [16])(*param_1 + 2);
              }
              else {
                param_1 = param_1 + 1;
              }
              bVar12 = param_1 < pauVar6;
            } while (param_1 <= pauVar6);
          }
        }
        else {
          pauStack_68 = param_3;
          pauStack_6c = param_2;
          uStack_64 = uVar4;
          FUN_1022b140(param_1);
        }
      }
    }
  }
LAB_1022a46b:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

