/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020e676 */

void __fastcall FUN_1020e676(int *param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint local_70;
  uint local_6c;
  uint local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  uint local_54 [16];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_70;
  if (*param_1 != 0) {
    local_64 = param_1[4];
    local_60 = *(int *)(param_1[6] + 200 + param_2 * 0xcc);
    uVar9 = param_1[2];
    uVar10 = *param_1 * 0x2c + uVar9;
    uVar2 = 0;
    uVar6 = uVar9;
    do {
      uVar2 = uVar2 + ((*(uint *)(uVar6 + 0x10) >> 4 & 1) != 0);
      uVar6 = uVar6 + 0x2c;
    } while (uVar6 < uVar10);
    if (uVar2 != 0) {
      if (uVar2 < 0x11) {
        puVar3 = local_54;
      }
      else {
        puVar3 = (uint *)FUN_101c2a50(local_64,4,0,uVar2,0,&local_58);
        if (local_58 != 0) goto LAB_1020e869;
      }
      iVar8 = 0;
      uVar6 = uVar9;
      do {
        if ((*(byte *)(uVar6 + 0x10) & 0x10) != 0) {
          puVar7 = puVar3 + iVar8;
          if (iVar8 != 0) {
            do {
              if (*(int *)(puVar7[-1] + 0x20) <= *(int *)(uVar6 + 0x20)) break;
              *puVar7 = puVar7[-1];
              puVar7 = puVar7 + -1;
            } while (puVar3 < puVar7);
          }
          *puVar7 = uVar6;
          iVar8 = iVar8 + 1;
        }
        uVar6 = uVar6 + 0x2c;
        local_6c = uVar10;
      } while (uVar6 < uVar10);
      do {
        uVar6 = *(uint *)(uVar9 + 0x10);
        if ((uVar6 & 0x10) == 0) {
          if ((*(uint *)(uVar9 + 0xc) & 2) != 0) {
            if (((*(int *)(uVar9 + 0x14) == 0) || ((uVar6 & 0x40) == 0)) ||
               (*(int *)(uVar9 + 0x14) != *(int *)(uVar9 + 0x18))) goto LAB_1020e849;
            *(uint *)(uVar9 + 0xc) = *(uint *)(uVar9 + 0xc) & 0xfffffffd;
          }
          if (iVar8 == 0) {
LAB_1020e7b3:
            local_70 = *puVar3;
LAB_1020e7b5:
            lVar1 = (longlong)(*(int *)(uVar9 + 0x20) - *(int *)(local_70 + 0x20)) *
                    (longlong)local_60;
            iVar4 = (int)(lVar1 >> 0x3f);
            lVar1 = lVar1 + CONCAT44(iVar4,iVar4) + 0x8000;
            *(uint *)(uVar9 + 0x28) =
                 ((int)((ulonglong)lVar1 >> 0x20) << 0x10 | (uint)lVar1 >> 0x10) +
                 *(int *)(local_70 + 0x28);
          }
          else {
            iVar4 = 0;
            do {
              if (*(int *)(uVar9 + 0x20) < *(int *)(puVar3[iVar4] + 0x20)) {
                iVar5 = iVar4;
                if (iVar4 == 0) goto LAB_1020e7b3;
                break;
              }
              iVar4 = iVar4 + 1;
              iVar5 = iVar8;
            } while (iVar8 != iVar4);
            local_70 = puVar3[iVar5 + -1];
            iVar4 = iVar8;
            do {
              if (*(int *)(puVar3[iVar4 + -1] + 0x20) < *(int *)(uVar9 + 0x20)) goto LAB_1020e7a6;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
            iVar4 = 0;
LAB_1020e7a6:
            if (iVar4 == iVar8) {
              local_70 = puVar3[iVar8 + -1];
              goto LAB_1020e7b5;
            }
            uVar10 = *(uint *)(uVar9 + 0x20);
            local_5c = *(int *)(local_70 + 0x20);
            local_68 = local_70;
            if (uVar10 - local_5c == 0) {
LAB_1020e809:
              *(undefined4 *)(uVar9 + 0x28) = *(undefined4 *)(local_68 + 0x28);
              local_68 = uVar10;
            }
            else {
              local_68 = puVar3[iVar4];
              if (uVar10 == *(uint *)(local_68 + 0x20)) goto LAB_1020e809;
              local_70 = *(uint *)(local_70 + 0x28);
              iVar4 = FUN_101c16ea(uVar10 - local_5c,*(int *)(local_68 + 0x28) - local_70,
                                   *(uint *)(local_68 + 0x20) - local_5c);
              *(uint *)(uVar9 + 0x28) = iVar4 + local_70;
              uVar6 = *(uint *)(uVar9 + 0x10);
            }
          }
          *(uint *)(uVar9 + 0x10) = uVar6 | 0x20;
          uVar10 = local_6c;
        }
LAB_1020e849:
        uVar9 = uVar9 + 0x2c;
      } while (uVar9 < uVar10);
      if (puVar3 != local_54) {
        FUN_101c0017(local_64,puVar3);
      }
    }
  }
LAB_1020e869:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_70)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

