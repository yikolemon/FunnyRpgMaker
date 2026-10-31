/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102210a7 */

int __fastcall FUN_102210a7(int *param_1)

{
  undefined1 auVar1 [16];
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined1 (*pauVar11) [16];
  uint uVar12;
  int *local_48;
  int local_44;
  undefined1 (*local_40) [16];
  int local_3c;
  undefined1 (*local_38) [16];
  undefined8 local_34;
  undefined1 local_2c [16];
  undefined8 local_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_48;
  iVar6 = 6;
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    iVar10 = 0;
    local_48 = param_1;
    if (param_1[1] != 0) {
      iVar10 = 0;
      iVar9 = param_1[1];
      do {
        pauVar11 = *(undefined1 (**) [16])(iVar9 + 8);
        local_38 = (undefined1 (*) [16])0x0;
        local_44 = iVar10;
        for (; pauVar11 != (undefined1 (*) [16])0x0;
            pauVar11 = *(undefined1 (**) [16])(pauVar11[2] + 4)) {
          iVar6 = *(int *)pauVar11[2];
          if (iVar6 == 3) {
            local_34 = *(undefined8 *)*pauVar11;
            local_2c = pauVar11[1];
            local_1c = *(undefined8 *)(*pauVar11 + 8);
            iVar6 = FUN_102217b4(0x20,&local_38);
LAB_102211f3:
            if (iVar6 != 0) goto LAB_10221256;
          }
          else {
            if (iVar6 == 2) {
              local_34 = *(undefined8 *)*pauVar11;
              auVar1 = *(undefined1 (*) [16])(*pauVar11 + 8);
              uVar7 = *(int *)*pauVar11 + *(int *)(*pauVar11 + 8) + *(int *)pauVar11[1] * -2;
              uVar12 = -uVar7;
              if ((int)uVar12 < 0) {
                uVar12 = uVar7;
              }
              uVar8 = *(int *)(*pauVar11 + 4) + *(int *)(*pauVar11 + 0xc) +
                      *(int *)(pauVar11[1] + 4) * -2;
              uVar7 = -uVar8;
              if ((int)uVar7 < 0) {
                uVar7 = uVar8;
              }
              if (uVar7 < uVar12) {
                uVar7 = uVar12;
              }
              local_2c._0_8_ = auVar1._8_8_;
              local_2c._8_4_ = auVar1._0_4_;
              local_2c._12_4_ = auVar1._4_4_;
              iVar6 = 1;
              if (8 < uVar7) {
                iVar6 = 1;
                do {
                  iVar6 = iVar6 * 2;
                  bVar2 = 0x23 < uVar7;
                  uVar7 = uVar7 >> 2;
                } while (bVar2);
              }
              iVar6 = FUN_102216ce(iVar6,&local_38);
              goto LAB_102211f3;
            }
            if (iVar6 != 1) {
              iVar6 = 6;
              goto LAB_10221256;
            }
            iVar6 = FUN_10220f38();
            if (iVar6 != 0) goto LAB_10221256;
            *(undefined4 *)local_40[2] = *(undefined4 *)pauVar11[2];
            auVar1 = *pauVar11;
            uVar3 = *(undefined4 *)(pauVar11[1] + 4);
            uVar4 = *(undefined4 *)(pauVar11[1] + 8);
            uVar5 = *(undefined4 *)(pauVar11[1] + 0xc);
            *(undefined4 *)local_40[1] = *(undefined4 *)pauVar11[1];
            *(undefined4 *)(local_40[1] + 4) = uVar3;
            *(undefined4 *)(local_40[1] + 8) = uVar4;
            *(undefined4 *)(local_40[1] + 0xc) = uVar5;
            *local_40 = auVar1;
            *(undefined1 (**) [16])(local_40[2] + 4) = local_38;
            local_38 = local_40;
          }
        }
        iVar6 = FUN_10220ed3();
        iVar10 = local_3c;
        if (iVar6 != 0) goto LAB_10221256;
        *(int *)(local_3c + 0xc) = local_44;
        *(undefined1 (**) [16])(local_3c + 8) = local_38;
        local_38 = (undefined1 (*) [16])0x0;
        iVar6 = *(int *)(iVar9 + 0xc);
        local_3c = iVar9;
        FUN_10221934();
        iVar9 = iVar6;
      } while (iVar6 != 0);
    }
    local_48[1] = iVar10;
    iVar6 = 0;
  }
LAB_10221256:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_48)) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

