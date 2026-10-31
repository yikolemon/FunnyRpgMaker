/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140329037 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404f00da) overlaps instruction at (ram,0x0001404f00d9)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140329037(uint param_1,char *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  ulonglong uVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar15;
  char *pcVar16;
  longlong lVar17;
  undefined1 *puVar18;
  byte *pbVar19;
  int iVar20;
  int iVar21;
  float10 in_ST0;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  char *pcVar13;
  int *piVar14;
  
  uVar4 = DAT_14062a630;
  local_40 = ram0x000140613b10 ^ (ulonglong)auStack_78;
  if (*(char *)(DAT_14062a630 + 0x2b4c) != '\0') {
    pbVar19 = (byte *)(ulonglong)param_1;
    lVar1 = *(longlong *)(DAT_14062a630 + 0x1608);
    iVar8 = (int)*(char *)(DAT_14062a630 + 0x2b4e);
    if (iVar8 == -1) {
      *(undefined1 *)(DAT_14062a630 + 0x2b4e) = 0;
      iVar8 = *(int *)(lVar1 + 0x148);
      iVar20 = *(int *)(uVar4 + 0x2b54);
      iVar21 = (int)((longlong)iVar8 + 1);
      if (iVar20 <= iVar8) {
        if (iVar20 == 0) {
          iVar20 = 8;
        }
        else {
          iVar20 = iVar20 / 2 + iVar20;
        }
        if (iVar20 <= iVar21) {
          iVar20 = iVar21;
        }
        uVar11 = FUN_14030fcc8((longlong)iVar20 * 0xc);
        if (*(longlong *)(uVar4 + 0x2b58) != 0) {
          FUN_1404b97c0(uVar11,*(longlong *)(uVar4 + 0x2b58),
                        (longlong)*(int *)(uVar4 + 0x2b50) * 0xc);
          FUN_14030fda4(*(undefined8 *)(uVar4 + 0x2b58));
        }
        *(undefined8 *)(uVar4 + 0x2b58) = uVar11;
        *(int *)(uVar4 + 0x2b54) = iVar20;
      }
      iVar20 = *(int *)(uVar4 + 0x2b50);
      if (iVar20 <= iVar8) {
        lVar12 = ((longlong)iVar8 + 1) - (longlong)iVar20;
        lVar17 = (longlong)iVar20 * 0xc + 8;
        do {
          lVar2 = *(longlong *)(uVar4 + 0x2b58);
          *(undefined8 *)(lVar2 + -8 + lVar17) = 0xff000000000000;
          *(undefined4 *)(lVar2 + lVar17) = 0xffffffff;
          lVar17 = lVar17 + 0xc;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
      *(int *)(uVar4 + 0x2b50) = iVar21;
      uVar15 = (ulonglong)*(uint *)(lVar1 + 0x148);
      if (-1 < (int)*(uint *)(lVar1 + 0x148)) {
        lVar12 = 0;
        lVar17 = 0;
        do {
          uVar9 = param_1;
          if (lVar17 < (int)uVar15) {
            uVar9 = *(uint *)(*(longlong *)(lVar1 + 0x150) + lVar17 * 4);
          }
          *(uint *)(*(longlong *)(uVar4 + 0x2b58) + lVar12) = uVar9;
          uVar15 = (ulonglong)*(int *)(lVar1 + 0x148);
          lVar12 = lVar12 + 0xc;
          bVar3 = lVar17 < (longlong)uVar15;
          lVar17 = lVar17 + 1;
        } while (bVar3);
      }
    }
    else if (*(int *)(lVar1 + 0x148) == iVar8) {
      pcVar16 = (char *)((ulonglong)param_2 & 0xffffffff);
      lVar1 = *(longlong *)(DAT_14062a630 + 0x2b58) + (longlong)iVar8 * 0xc;
      if (*(int *)(lVar1 + 8) == -1) {
        local_48 = 0;
        local_50 = 0;
        uVar9 = (int)param_2 - 4;
        if (uVar9 < 10) {
          pbVar10 = (byte *)((longlong)&switchD_1403290d1::caseD_7 +
                            (longlong)(int)(&switchD_1403290d1::caseD_7)[uVar9]);
          bVar6 = (byte)pbVar10;
          switch((int)param_2) {
          default:
            *pbVar10 = *pbVar10 + bVar6;
            *pbVar10 = *pbVar10 + bVar6;
          case 10:
            *pbVar10 = *pbVar10 + bVar6;
          case 4:
          case 5:
          case 6:
            *pbVar10 = *pbVar10 + bVar6;
            *pbVar10 = *pbVar10 + bVar6;
            *pbVar10 = *pbVar10 + bVar6;
            *pbVar10 = *pbVar10 + bVar6;
            *pbVar10 = *pbVar10 + bVar6;
            *pbVar10 = *pbVar10 + bVar6;
            bVar6 = bVar6 | *pbVar10;
            pcVar13 = (char *)CONCAT71((int7)((ulonglong)pbVar10 >> 8),bVar6);
            *pcVar13 = *pcVar13 + bVar6;
            *pcVar13 = *pcVar13 + bVar6;
            *pcVar13 = *pcVar13 + bVar6;
            pbVar10 = (byte *)(ulonglong)((uint)pcVar13 | 0x9000000);
            break;
          case 0xc:
            break;
          case 0xd:
            *pbVar10 = *pbVar10 + bVar6;
            *pbVar10 = *pbVar10 + bVar6;
          }
          bVar5 = (byte)pbVar10;
          *pbVar10 = *pbVar10 + bVar5;
          *pbVar10 = *pbVar10 + bVar5;
          *pbVar10 = *pbVar10 + bVar5;
          *pbVar10 = *pbVar10 + bVar5;
          *pbVar10 = *pbVar10 + bVar5;
          *param_2 = *param_2 + -0x30;
          *pbVar10 = *pbVar10 + bVar5;
          *pbVar10 = *pbVar10 + bVar5;
          *pbVar10 = *pbVar10 + bVar5;
          cRam00000001494f00f5 = cRam00000001494f00f5 + -0x30;
          *pbVar10 = *pbVar10 + bVar5;
          *pcVar16 = *pcVar16 + -0x30;
          *pbVar10 = *pbVar10 + bVar5;
          *pbVar10 = *pbVar10 + bVar5;
          *pbVar10 = *pbVar10 + bVar5;
          bVar6 = *pbVar19;
          *pbVar19 = *pbVar19 + bVar5;
          uVar9 = ((int)pbVar10 + -0x18036) - (uint)CARRY1(bVar6,bVar5);
          *(char *)(ulonglong)uVar9 = *(char *)(ulonglong)uVar9 + (char)uVar9;
          pbVar10 = (byte *)(uVar4 & 0xffffffff);
          puVar18 = (undefined1 *)(ulonglong)uVar9;
          bVar6 = *pbVar10;
          bVar5 = (byte)pbVar10;
          *pbVar10 = *pbVar10 + bVar5;
          if (!CARRY1(bVar6,bVar5) && *pbVar10 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          bVar6 = *pbVar10;
          *pbVar10 = *pbVar10 + bVar5;
          cVar7 = (bVar5 + 0x6a) - CARRY1(bVar6,bVar5);
          piVar14 = (int *)CONCAT71((int7)((ulonglong)pbVar10 >> 8),cVar7);
          *(char *)piVar14 = (char)*piVar14 + cVar7;
          if ((char)*piVar14 == '\0') {
            *(int *)pbVar19 = (int)in_ST0;
            *(char *)piVar14 = (char)*piVar14 + cVar7;
            *(char *)piVar14 = (char)*piVar14 + cVar7;
            uRam0000000000000000 = *puVar18;
            uVar9 = (int)piVar14 + *piVar14;
            pcVar13 = (char *)(ulonglong)uVar9;
            cVar7 = (char)uVar9;
            *pcVar13 = *pcVar13 + cVar7;
            *pcVar13 = *pcVar13 + cVar7;
            pcVar16[0x18035f6] = pcVar16[0x18035f6] + (char)pcVar16;
            *pcVar13 = *pcVar13 + cVar7;
            pcVar13[3] = pcVar13[3];
            *pcVar13 = *pcVar13 + cVar7;
            puVar18[0x18035f7] = puVar18[0x18035f7] + -0x30;
            *pcVar13 = *pcVar13 + cVar7;
            puVar18[4] = puVar18[4] + SUB81(auStack_78._0_8_,1);
            *pcVar13 = *pcVar13 + cVar7;
            cRam0000000141cf36c6 = cRam0000000141cf36c6 + cVar7;
            *pcVar13 = *pcVar13 + cVar7;
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        lVar17 = DAT_14062a630 + 0x2b60;
        *(uint *)(lVar1 + 8) =
             *(int *)(DAT_14062a630 + 0x2b60) + -1 + (uint)(*(int *)(DAT_14062a630 + 0x2b60) == 0);
        FUN_1403114e4(lVar17,0,1);
      }
      *(undefined1 *)(lVar1 + 5) = 1;
      if (*(char *)(lVar1 + 6) == -1) {
        *(char *)(lVar1 + 6) = (char)pcVar16;
      }
    }
  }
  if (ram0x000140613b10 != (local_40 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_14044aba0(local_40 ^ (ulonglong)auStack_78);
  }
  return;
}

