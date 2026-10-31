/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005c278 */

undefined8 FUN_14005c278(longlong *param_1,undefined8 *param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 (*pauVar9) [32];
  longlong lVar10;
  int iVar11;
  uint uVar12;
  short sVar13;
  undefined1 auStack_68 [44];
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStack_68;
  lVar2 = param_2[0x13];
  iVar4 = FUN_14005c6c4(param_1,(longlong)param_2);
  if (iVar4 == 0) {
    *param_2 = 1;
    if (param_3 < 0) {
LAB_14005c6af:
      uVar6 = 0;
      goto LAB_14005c2b1;
    }
    iVar4 = FUN_14005c94b(param_1,(longlong)param_2);
    if (iVar4 == 0) {
      uVar6 = FUN_14005ccc3(param_2[0x28],*(uint *)((longlong)param_2 + 0x13c));
      if (((((char)uVar6 != '\0') ||
           (iVar4 = FUN_14005cce7(param_1,(longlong)param_2,2), iVar4 == 0)) &&
          (uVar7 = FUN_14005cebe(param_1,(longlong)param_2), (int)uVar7 == 0)) &&
         (((uVar7 = FUN_14005d0b6(param_1,(longlong)param_2), (int)uVar7 == 0 &&
           (uVar7 = FUN_14005d253(param_1,(longlong)param_2), (int)uVar7 == 0)) &&
          (((char)uVar6 == '\0' ||
           (iVar4 = FUN_14005cce7(param_1,(longlong)param_2,0x100), iVar4 == 0)))))) {
        uVar12 = *(uint *)(param_2 + 1);
        *(uint *)(param_2 + 1) = uVar12 | 0x12;
        if (*(char *)((longlong)param_2 + 0x14b) != '\0') {
          *(uint *)(param_2 + 1) = uVar12 | 0x16;
        }
        local_3c = FUN_14005d53f((longlong)param_2);
        if (local_3c == 0) {
          lVar8 = FUN_14005c21a((longlong)param_2,"FAMILY_NAME");
          if ((lVar8 == 0) || (*(char *)(lVar8 + 8) == '\0')) {
            param_2[3] = 0;
          }
          else {
            uVar6 = FUN_140021e43(lVar2,*(char **)(lVar8 + 0x10),&local_3c);
            param_2[3] = uVar6;
            if (local_3c != 0) goto LAB_14005c2ac;
          }
          *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_2 + 0x35);
          *(undefined4 *)(param_2 + 5) = 1;
          pauVar9 = FUN_14001c423(lVar2,0x10,&local_3c);
          param_2[6] = pauVar9;
          if (local_3c == 0) {
            uVar5 = *(int *)((longlong)param_2 + 0x154) + *(int *)(param_2 + 0x2a);
            uVar12 = -uVar5;
            if ((int)-uVar5 < 0) {
              uVar12 = uVar5;
            }
            iVar4 = 0x7fff;
            if (uVar12 < 0x8000) {
              iVar4 = -(int)(short)uVar5;
              if (iVar4 < 0) {
                iVar4 = (int)(short)uVar5;
              }
            }
            *(short *)*pauVar9 = (short)iVar4;
            lVar8 = FUN_14005c21a((longlong)param_2,"AVERAGE_WIDTH");
            if (lVar8 == 0) {
              uVar3 = (undefined2)(((short)iVar4 * 2 + 1) / 3);
            }
            else {
              uVar12 = *(uint *)(lVar8 + 0x10);
              uVar5 = -uVar12;
              if ((int)-uVar12 < 0) {
                uVar5 = uVar12;
              }
              uVar3 = 0x7fff;
              if (uVar5 < 0x4fff2) {
                iVar11 = (int)(short)((short)(uint)((ulonglong)
                                                    ((longlong)(int)(uVar12 + 5) * 0x66666667) >>
                                                   0x22) - (short)((int)(uVar12 + 5) >> 0x1f));
                iVar4 = -iVar11;
                if (iVar4 < 0) {
                  iVar4 = iVar11;
                }
                uVar3 = (undefined2)iVar4;
              }
            }
            *(undefined2 *)(*pauVar9 + 2) = uVar3;
            lVar8 = FUN_14005c21a((longlong)param_2,"POINT_SIZE");
            if (lVar8 != 0) {
              uVar12 = -*(uint *)(lVar8 + 0x10);
              if ((int)uVar12 < 0) {
                uVar12 = *(uint *)(lVar8 + 0x10);
              }
              iVar4 = 0x7fff;
              if (uVar12 < 0x504c3) {
                iVar4 = FUN_14001de7c(uVar12,0x70800,0x11a4e);
              }
              *(int *)(*pauVar9 + 4) = iVar4;
            }
            lVar8 = FUN_14005c21a((longlong)param_2,"PIXEL_SIZE");
            if (lVar8 != 0) {
              uVar12 = *(uint *)(lVar8 + 0x10);
              uVar5 = -uVar12;
              if ((int)-uVar12 < 0) {
                uVar5 = uVar12;
              }
              iVar4 = 0x1fffc0;
              if (uVar5 < 0x8000) {
                iVar4 = -(int)(short)uVar12;
                if (iVar4 < 0) {
                  iVar4 = (int)(short)uVar12;
                }
                iVar4 = iVar4 << 6;
              }
              *(int *)(*pauVar9 + 0xc) = iVar4;
            }
            lVar8 = FUN_14005c21a((longlong)param_2,"RESOLUTION_X");
            if (lVar8 == 0) {
              uVar12 = 0;
            }
            else {
              uVar5 = *(uint *)(lVar8 + 0x10);
              uVar1 = -uVar5;
              if ((int)-uVar5 < 0) {
                uVar1 = uVar5;
              }
              uVar12 = 0x7fff;
              if (uVar1 < 0x8000) {
                iVar4 = uVar5 * -0x10000;
                if (-1 < (int)(uVar5 << 0x10)) {
                  iVar4 = uVar5 * 0x10000;
                }
                uVar12 = iVar4 >> 0x10;
              }
            }
            lVar8 = FUN_14005c21a((longlong)param_2,"RESOLUTION_Y");
            if (lVar8 == 0) {
              uVar5 = *(uint *)(*pauVar9 + 0xc);
              if (uVar5 == 0) {
                uVar5 = *(uint *)(*pauVar9 + 4);
                *(uint *)(*pauVar9 + 0xc) = uVar5;
              }
            }
            else {
              uVar1 = *(uint *)(lVar8 + 0x10);
              uVar5 = -uVar1;
              if ((int)-uVar1 < 0) {
                uVar5 = uVar1;
              }
              if (uVar5 < 0x8000) {
                iVar4 = -(int)(short)uVar1;
                if (iVar4 < 0) {
                  iVar4 = (int)(short)uVar1;
                }
                sVar13 = (short)iVar4;
                uVar5 = *(uint *)(*pauVar9 + 0xc);
                if (uVar5 == 0) {
                  uVar5 = *(uint *)(*pauVar9 + 4);
                  *(uint *)(*pauVar9 + 0xc) = uVar5;
                  if ((uVar1 & 0xffff) != 0) goto LAB_14005c5f9;
                  goto LAB_14005c624;
                }
              }
              else {
                uVar5 = *(uint *)(*pauVar9 + 0xc);
                sVar13 = 0x7fff;
                if (uVar5 == 0) {
                  uVar5 = *(uint *)(*pauVar9 + 4);
                  *(uint *)(*pauVar9 + 0xc) = uVar5;
                  sVar13 = 0x7fff;
LAB_14005c5f9:
                  uVar5 = FUN_14001de7c(uVar5,(int)sVar13,0x48);
                  *(uint *)(*pauVar9 + 0xc) = uVar5;
                }
              }
              if ((uVar12 != 0) && (sVar13 != 0)) {
                uVar5 = FUN_14001de7c(uVar5,uVar12,(int)sVar13);
              }
            }
LAB_14005c624:
            *(uint *)(*pauVar9 + 8) = uVar5;
            lVar8 = FUN_14005c21a((longlong)param_2,"CHARSET_REGISTRY");
            lVar10 = FUN_14005c21a((longlong)param_2,"CHARSET_ENCODING");
            if (((lVar8 != 0) && (lVar10 != 0 && *(char *)(lVar8 + 8) != '\0')) &&
               (*(char *)(lVar10 + 8) != '\0')) {
              uVar6 = FUN_140021e43(lVar2,*(char **)(lVar10 + 0x10),&local_3c);
              param_2[0x25] = uVar6;
              if (local_3c != 0) goto LAB_14005c2ac;
              uVar6 = FUN_140021e43(lVar2,*(char **)(lVar8 + 0x10),&local_3c);
              param_2[0x26] = uVar6;
            }
            if (local_3c == 0) goto LAB_14005c6af;
          }
        }
      }
    }
  }
LAB_14005c2ac:
  uVar6 = 3;
LAB_14005c2b1:
  if (DAT_14012ea80 != (local_38 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_38 ^ (ulonglong)auStack_68);
  }
  return uVar6;
}

