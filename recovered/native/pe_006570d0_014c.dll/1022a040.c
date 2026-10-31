/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022a040 */

void FUN_1022a040(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                 uint param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 (*pauVar4) [16];
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 (*pauStack_7c) [16];
  undefined1 (*pauStack_78) [16];
  uint uStack_74;
  undefined1 local_30 [16];
  uint local_14;
  undefined1 auStack_10 [12];
  
  local_14 = DAT_10388d00 ^ (uint)auStack_10;
  if (param_4 != 0) {
    if (param_4 == 1) {
      uStack_74 = (uint)(byte)(*param_3)[0];
      pauStack_78 = param_2;
      pauStack_7c = param_1;
      FUN_102298b0();
    }
    else {
      uVar6 = (int)param_2 - (int)param_1;
      if (param_4 <= uVar6) {
        if ((((byte)DAT_10389df8 & 4) == 0) || (uVar6 < 0x10)) {
          pauVar4 = (undefined1 (*) [16])((int)param_1 + uVar6 + (1 - param_4));
          if (param_1 != pauVar4) {
            cVar5 = (*param_3)[0];
            do {
              if ((*param_1)[0] == cVar5) {
                uVar6 = 1;
                while ((*param_1)[uVar6] == (*param_3)[uVar6]) {
                  uVar6 = uVar6 + 1;
                  if (uVar6 == param_4) goto LAB_1022a20b;
                }
                cVar5 = (*param_3)[0];
              }
              param_1 = (undefined1 (*) [16])(*param_1 + 1);
            } while (param_1 != pauVar4);
          }
        }
        else if (param_4 < 0x11) {
          uStack_74 = param_4;
          pauStack_7c = &local_30;
          pauStack_78 = param_3;
          FUN_1025b2d0();
          auVar1 = local_30;
          bVar10 = (undefined1 *)0xfffffff3 < &pauStack_7c;
          do {
            iVar7 = pcmpestri(local_30,*param_1,0xc,param_4,0x10);
            if (bVar10) {
              param_1 = (undefined1 (*) [16])(*param_1 + iVar7);
              if (iVar7 <= (int)(0x10 - param_4)) goto LAB_1022a20b;
            }
            else {
              param_1 = param_1 + 1;
            }
            bVar10 = param_1 < param_2 + -1;
          } while (param_1 <= param_2 + -1);
          uVar6 = (int)param_2 - (int)param_1;
          if (uVar6 != 0) {
            pauStack_7c = &local_30;
            pauStack_78 = param_1;
            uStack_74 = uVar6;
            FUN_1025b2d0();
            pcmpestri(auVar1,local_30,0xc,param_4,uVar6);
          }
        }
        else {
          auVar1 = *param_3;
          bVar10 = CARRY4((int)param_1 - param_4,uVar6);
          pauVar4 = (undefined1 (*) [16])(((int)param_1 - param_4) + uVar6);
          do {
            iVar7 = pcmpestri(auVar1,*param_1,0xc,0x10,0x10);
            if (bVar10) {
              if (iVar7 == 0) {
LAB_1022a19e:
                pauVar8 = param_1 + 1;
                pauVar9 = param_3 + 1;
                uVar6 = param_4 - 0x14;
                uVar11 = param_4 - 0x10;
                while (uVar12 = uVar6, 3 < uVar11) {
                  if (*(int *)*pauVar8 != *(int *)*pauVar9) goto LAB_1022a1ca;
                  pauVar8 = (undefined1 (*) [16])(*pauVar8 + 4);
                  pauVar9 = (undefined1 (*) [16])(*pauVar9 + 4);
                  uVar6 = uVar12 - 4;
                  uVar11 = uVar12;
                }
                if (uVar12 == 0xfffffffc) break;
LAB_1022a1ca:
                if (((*pauVar8)[0] == (*pauVar9)[0]) &&
                   ((uVar12 == 0xfffffffd ||
                    (((*pauVar8)[1] == (*pauVar9)[1] &&
                     ((uVar12 == 0xfffffffe ||
                      (((*pauVar8)[2] == (*pauVar9)[2] &&
                       ((uVar12 == 0xffffffff || ((*pauVar8)[3] == (*pauVar9)[3])))))))))))) break;
              }
              else {
                param_1 = (undefined1 (*) [16])(*param_1 + iVar7);
                if (pauVar4 < param_1) break;
                uVar6 = *(uint *)*param_1 ^ auVar1._0_4_;
                uVar11 = *(uint *)(*param_1 + 4) ^ auVar1._4_4_;
                uVar12 = *(uint *)(*param_1 + 8) ^ auVar1._8_4_;
                uVar13 = *(uint *)(*param_1 + 0xc) ^ auVar1._12_4_;
                auVar2._4_4_ = uVar11;
                auVar2._0_4_ = uVar6;
                auVar2._8_4_ = uVar12;
                auVar2._12_4_ = uVar13;
                auVar3._4_4_ = uVar11;
                auVar3._0_4_ = uVar6;
                auVar3._8_4_ = uVar12;
                auVar3._12_4_ = uVar13;
                if ((auVar2 & auVar3) == (undefined1  [16])0x0) goto LAB_1022a19e;
              }
              param_1 = (undefined1 (*) [16])(*param_1 + 1);
            }
            else {
              param_1 = param_1 + 1;
            }
            bVar10 = param_1 < pauVar4;
          } while (param_1 <= pauVar4);
        }
      }
    }
  }
LAB_1022a20b:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

