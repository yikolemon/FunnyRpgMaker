/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00478827 */

int __fastcall FUN_00478827(int *param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined1 (*pauVar12) [16];
  uint uVar13;
  int *local_48;
  int local_44;
  undefined1 (*local_40) [16];
  int local_3c;
  undefined1 (*local_38) [16];
  undefined8 local_34;
  undefined1 local_2c [16];
  undefined8 local_1c;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_48;
  iVar7 = 6;
  if ((param_1 != (int *)0x0) && (iVar2 = *param_1, iVar2 != 0)) {
    iVar11 = 0;
    local_48 = param_1;
    if (param_1[1] != 0) {
      iVar11 = 0;
      iVar10 = param_1[1];
      do {
        pauVar12 = *(undefined1 (**) [16])(iVar10 + 8);
        local_38 = (undefined1 (*) [16])0x0;
        local_44 = iVar11;
        for (; pauVar12 != (undefined1 (*) [16])0x0;
            pauVar12 = *(undefined1 (**) [16])(pauVar12[2] + 4)) {
          iVar7 = *(int *)pauVar12[2];
          if (iVar7 == 3) {
            local_34 = *(undefined8 *)*pauVar12;
            local_2c = pauVar12[1];
            local_1c = *(undefined8 *)(*pauVar12 + 8);
            iVar7 = FUN_00478f34(iVar2,(int *)&local_34,0x20,(int *)&local_38);
LAB_00478973:
            if (iVar7 != 0) goto LAB_004789d6;
          }
          else {
            if (iVar7 == 2) {
              local_34 = *(undefined8 *)*pauVar12;
              auVar1 = *(undefined1 (*) [16])(*pauVar12 + 8);
              uVar8 = *(int *)*pauVar12 + *(int *)(*pauVar12 + 8) + *(int *)pauVar12[1] * -2;
              uVar13 = -uVar8;
              if ((int)uVar13 < 0) {
                uVar13 = uVar8;
              }
              uVar9 = *(int *)(*pauVar12 + 4) + *(int *)(*pauVar12 + 0xc) +
                      *(int *)(pauVar12[1] + 4) * -2;
              uVar8 = -uVar9;
              if ((int)uVar8 < 0) {
                uVar8 = uVar9;
              }
              if (uVar8 < uVar13) {
                uVar8 = uVar13;
              }
              local_2c._0_8_ = auVar1._8_8_;
              local_2c._8_4_ = auVar1._0_4_;
              local_2c._12_4_ = auVar1._4_4_;
              uVar13 = 1;
              if (8 < uVar8) {
                uVar13 = 1;
                do {
                  uVar13 = uVar13 * 2;
                  bVar3 = 0x23 < uVar8;
                  uVar8 = uVar8 >> 2;
                } while (bVar3);
              }
              iVar7 = FUN_00478e4e(iVar2,(undefined4 *)&local_34,uVar13,&local_38);
              goto LAB_00478973;
            }
            if (iVar7 != 1) {
              iVar7 = 6;
              goto LAB_004789d6;
            }
            iVar7 = FUN_004786b8(iVar2,&local_40);
            if (iVar7 != 0) goto LAB_004789d6;
            *(undefined4 *)local_40[2] = *(undefined4 *)pauVar12[2];
            auVar1 = *pauVar12;
            uVar4 = *(undefined4 *)(pauVar12[1] + 4);
            uVar5 = *(undefined4 *)(pauVar12[1] + 8);
            uVar6 = *(undefined4 *)(pauVar12[1] + 0xc);
            *(undefined4 *)local_40[1] = *(undefined4 *)pauVar12[1];
            *(undefined4 *)(local_40[1] + 4) = uVar4;
            *(undefined4 *)(local_40[1] + 8) = uVar5;
            *(undefined4 *)(local_40[1] + 0xc) = uVar6;
            *local_40 = auVar1;
            *(undefined1 (**) [16])(local_40[2] + 4) = local_38;
            local_38 = local_40;
          }
        }
        iVar7 = FUN_00478653(iVar2,&local_3c);
        iVar11 = local_3c;
        if (iVar7 != 0) goto LAB_004789d6;
        *(int *)(local_3c + 0xc) = local_44;
        *(undefined1 (**) [16])(local_3c + 8) = local_38;
        local_38 = (undefined1 (*) [16])0x0;
        iVar7 = *(int *)(iVar10 + 0xc);
        local_3c = iVar10;
        FUN_004790b4(iVar2,&local_3c);
        iVar10 = iVar7;
      } while (iVar7 != 0);
    }
    local_48[1] = iVar11;
    iVar7 = 0;
  }
LAB_004789d6:
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_48)) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_48);
}

