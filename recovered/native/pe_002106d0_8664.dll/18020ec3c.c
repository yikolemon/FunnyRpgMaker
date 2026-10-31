/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020ec3c */

undefined8 FUN_18020ec3c(undefined8 param_1,undefined8 *param_2,int param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  short *psVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  undefined1 auStack_68 [44];
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_68;
  uVar6 = param_2[0x13];
  iVar3 = FUN_18020f088();
  if (iVar3 == 0) {
    *param_2 = 1;
    if (param_3 < 0) {
LAB_18020f073:
      uVar6 = 0;
      goto LAB_18020ec75;
    }
    iVar3 = FUN_18020f30f(param_1,param_2);
    if ((((iVar3 == 0) &&
         (((cVar1 = FUN_18020f687(param_2[0x28],*(undefined4 *)((longlong)param_2 + 0x13c)),
           cVar1 != '\0' || (iVar3 = FUN_18020f6ab(param_1,param_2,2), iVar3 == 0)) &&
          (iVar3 = FUN_18020f882(param_1,param_2), iVar3 == 0)))) &&
        ((iVar3 = FUN_18020fa7a(param_1,param_2), iVar3 == 0 &&
         (iVar3 = FUN_18020fc17(param_1,param_2), iVar3 == 0)))) &&
       ((cVar1 == '\0' || (iVar3 = FUN_18020f6ab(param_1,param_2,0x100), iVar3 == 0)))) {
      uVar12 = *(uint *)(param_2 + 1);
      *(uint *)(param_2 + 1) = uVar12 | 0x12;
      if (*(char *)((longlong)param_2 + 0x14b) != '\0') {
        *(uint *)(param_2 + 1) = uVar12 | 0x16;
      }
      local_3c = FUN_18020ff03(param_2);
      if (local_3c == 0) {
        lVar7 = FUN_18020ebde(param_2,"FAMILY_NAME");
        if ((lVar7 == 0) || (*(char *)(lVar7 + 8) == '\0')) {
          param_2[3] = 0;
        }
        else {
          uVar8 = FUN_1801cfa40(uVar6,*(undefined8 *)(lVar7 + 0x10),&local_3c);
          param_2[3] = uVar8;
          if (local_3c != 0) goto LAB_18020ec70;
        }
        *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_2 + 0x35);
        *(undefined4 *)(param_2 + 5) = 1;
        psVar9 = (short *)FUN_1801c9a4b(uVar6,0x10,&local_3c);
        param_2[6] = psVar9;
        if (local_3c == 0) {
          uVar4 = *(int *)((longlong)param_2 + 0x154) + *(int *)(param_2 + 0x2a);
          uVar12 = -uVar4;
          if ((int)-uVar4 < 0) {
            uVar12 = uVar4;
          }
          iVar3 = 0x7fff;
          if (uVar12 < 0x8000) {
            iVar3 = -(int)(short)uVar4;
            if (iVar3 < 0) {
              iVar3 = (int)(short)uVar4;
            }
          }
          *psVar9 = (short)iVar3;
          lVar7 = FUN_18020ebde(param_2,"AVERAGE_WIDTH");
          if (lVar7 == 0) {
            sVar2 = (short)(((short)iVar3 * 2 + 1) / 3);
          }
          else {
            uVar12 = *(uint *)(lVar7 + 0x10);
            uVar4 = -uVar12;
            if ((int)-uVar12 < 0) {
              uVar4 = uVar12;
            }
            sVar2 = 0x7fff;
            if (uVar4 < 0x4fff2) {
              iVar11 = (int)(short)((short)(uint)((ulonglong)
                                                  ((longlong)(int)(uVar12 + 5) * 0x66666667) >> 0x22
                                                 ) - (short)((int)(uVar12 + 5) >> 0x1f));
              iVar3 = -iVar11;
              if (iVar3 < 0) {
                iVar3 = iVar11;
              }
              sVar2 = (short)iVar3;
            }
          }
          psVar9[1] = sVar2;
          lVar7 = FUN_18020ebde(param_2,"POINT_SIZE");
          if (lVar7 != 0) {
            uVar12 = -*(uint *)(lVar7 + 0x10);
            if ((int)uVar12 < 0) {
              uVar12 = *(uint *)(lVar7 + 0x10);
            }
            uVar5 = 0x7fff;
            if (uVar12 < 0x504c3) {
              uVar5 = FUN_1801cb4a4(uVar12,0x70800,0x11a4e);
            }
            *(undefined4 *)(psVar9 + 2) = uVar5;
          }
          lVar7 = FUN_18020ebde(param_2,"PIXEL_SIZE");
          if (lVar7 != 0) {
            uVar12 = *(uint *)(lVar7 + 0x10);
            uVar4 = -uVar12;
            if ((int)-uVar12 < 0) {
              uVar4 = uVar12;
            }
            iVar3 = 0x1fffc0;
            if (uVar4 < 0x8000) {
              iVar3 = -(int)(short)uVar12;
              if (iVar3 < 0) {
                iVar3 = (int)(short)uVar12;
              }
              iVar3 = iVar3 << 6;
            }
            *(int *)(psVar9 + 6) = iVar3;
          }
          lVar7 = FUN_18020ebde(param_2,"RESOLUTION_X");
          if (lVar7 == 0) {
            iVar3 = 0;
          }
          else {
            uVar12 = *(uint *)(lVar7 + 0x10);
            uVar4 = -uVar12;
            if ((int)-uVar12 < 0) {
              uVar4 = uVar12;
            }
            iVar3 = 0x7fff;
            if (uVar4 < 0x8000) {
              iVar3 = uVar12 * -0x10000;
              if (-1 < (int)(uVar12 << 0x10)) {
                iVar3 = uVar12 * 0x10000;
              }
              iVar3 = iVar3 >> 0x10;
            }
          }
          lVar7 = FUN_18020ebde(param_2,"RESOLUTION_Y");
          if (lVar7 == 0) {
            iVar11 = *(int *)(psVar9 + 6);
            if (iVar11 == 0) {
              iVar11 = *(int *)(psVar9 + 2);
              *(int *)(psVar9 + 6) = iVar11;
            }
          }
          else {
            uVar12 = *(uint *)(lVar7 + 0x10);
            uVar4 = -uVar12;
            if ((int)-uVar12 < 0) {
              uVar4 = uVar12;
            }
            if (uVar4 < 0x8000) {
              iVar11 = -(int)(short)uVar12;
              if (iVar11 < 0) {
                iVar11 = (int)(short)uVar12;
              }
              sVar2 = (short)iVar11;
              iVar11 = *(int *)(psVar9 + 6);
              if (iVar11 == 0) {
                iVar11 = *(int *)(psVar9 + 2);
                *(int *)(psVar9 + 6) = iVar11;
                if ((uVar12 & 0xffff) != 0) goto LAB_18020efbd;
                goto LAB_18020efe8;
              }
            }
            else {
              iVar11 = *(int *)(psVar9 + 6);
              sVar2 = 0x7fff;
              if (iVar11 == 0) {
                iVar11 = *(int *)(psVar9 + 2);
                *(int *)(psVar9 + 6) = iVar11;
                sVar2 = 0x7fff;
LAB_18020efbd:
                iVar11 = FUN_1801cb4a4(iVar11,(int)sVar2,0x48);
                *(int *)(psVar9 + 6) = iVar11;
              }
            }
            if ((iVar3 != 0) && (sVar2 != 0)) {
              iVar11 = FUN_1801cb4a4(iVar11,iVar3,(int)sVar2);
            }
          }
LAB_18020efe8:
          *(int *)(psVar9 + 4) = iVar11;
          lVar7 = FUN_18020ebde(param_2,"CHARSET_REGISTRY");
          lVar10 = FUN_18020ebde(param_2,"CHARSET_ENCODING");
          if (((lVar7 != 0) && (lVar10 != 0 && *(char *)(lVar7 + 8) != '\0')) &&
             (*(char *)(lVar10 + 8) != '\0')) {
            uVar8 = FUN_1801cfa40(uVar6,*(undefined8 *)(lVar10 + 0x10),&local_3c);
            param_2[0x25] = uVar8;
            if (local_3c != 0) goto LAB_18020ec70;
            uVar6 = FUN_1801cfa40(uVar6,*(undefined8 *)(lVar7 + 0x10),&local_3c);
            param_2[0x26] = uVar6;
          }
          if (local_3c == 0) goto LAB_18020f073;
        }
      }
    }
  }
LAB_18020ec70:
  uVar6 = 3;
LAB_18020ec75:
  if (DAT_180402640 != (local_38 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_38 ^ (ulonglong)auStack_68);
  }
  return uVar6;
}

