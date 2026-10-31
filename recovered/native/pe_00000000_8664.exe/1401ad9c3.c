/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401ad9c3 */

void Unwind_1401ad9c3(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  char cVar5;
  int in_EAX;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  byte *pbVar11;
  byte *pbVar12;
  int iVar13;
  undefined4 *unaff_RBP;
  int unaff_ESI;
  int *piVar14;
  uint uVar15;
  byte *pbVar16;
  longlong unaff_R13;
  int *unaff_R14;
  int iVar17;
  int iVar18;
  byte *unaff_R15;
  undefined4 uVar19;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  byte *in_stack_00000078;
  
  if (-2 < in_EAX) {
    if (*(int *)(unaff_R15 + 8) == 0) {
      uVar9 = 0;
    }
    else {
      pbVar16 = (byte *)(*(longlong *)(unaff_R13 + 8) + (longlong)*(int *)(unaff_R15 + 8));
      uVar9 = *pbVar16 & 0xf;
      uVar9 = *(uint *)(pbVar16 + (-4 - (longlong)(char)(&DAT_140eb2890)[uVar9])) >>
              ((&DAT_140eb28a0)[uVar9] & 0x1f);
    }
    if ((int)uVar9 <= unaff_ESI) goto LAB_1401adf0a;
    if ((((*unaff_R14 == -0x1f928c9d) && (unaff_R14[6] == 4)) && (unaff_R14[8] + 0xe66cfae0U < 3))
       && (*(longlong *)(unaff_R14 + 0xc) == 0)) {
      lVar7 = FUN_1401aae30();
      if (*(longlong *)(lVar7 + 0x20) == 0) goto LAB_1401adea3;
      lVar7 = FUN_1401aae30();
      unaff_R14 = *(int **)(lVar7 + 0x20);
      lVar7 = FUN_1401aae30();
      in_stack_00000068 = *(undefined8 *)(lVar7 + 0x28);
      FUN_14018ff50(*(undefined8 *)(unaff_R14 + 0xe));
      if ((unaff_R14 == (int *)0x0) ||
         (((*unaff_R14 == -0x1f928c9d && (unaff_R14[6] == 4)) &&
          ((unaff_R14[8] + 0xe66cfae0U < 3 && (*(longlong *)(unaff_R14 + 0xc) == 0))))))
      goto LAB_1401adf0a;
      lVar7 = FUN_1401aae30();
      if (*(longlong *)(lVar7 + 0x38) != 0) {
        lVar7 = FUN_1401aae30();
        uVar3 = *(undefined8 *)(lVar7 + 0x38);
        lVar7 = FUN_1401aae30();
        *(undefined8 *)(lVar7 + 0x38) = 0;
        cVar5 = FUN_1401ac560(unaff_R14,uVar3);
        if (cVar5 == '\0') {
          cVar5 = FUN_1401ac670(uVar3);
          if (cVar5 != '\0') {
            __DestructExceptionObject(unaff_R14,1);
            FUN_1401ac430(unaff_RBP + -0x1c);
                    /* WARNING: Subroutine does not return */
            FUN_14018f0a0(unaff_RBP + -0x1c,&DAT_140f13838);
          }
                    /* WARNING: Subroutine does not return */
          FUN_1401aa0e4();
        }
      }
    }
    uVar19 = FUN_1401ab4f0(unaff_RBP + 0xc);
    if (((*unaff_R14 == -0x1f928c9d) && (unaff_R14[6] == 4)) && (unaff_R14[8] + 0xe66cfae0U < 3)) {
      if (unaff_RBP[0xc] != 0) {
        uVar19 = FUN_14018fd70(unaff_RBP + -0x1c,unaff_RBP + 0xc,unaff_ESI);
        uVar9 = unaff_RBP[-0x1a];
        lVar7 = *(longlong *)(unaff_RBP + -0x1c);
        *(longlong *)(unaff_RBP + -0x20) = lVar7;
        if (uVar9 < (uint)unaff_RBP[-0x16]) {
          do {
            if ((*(int *)(lVar7 + 0x18) <= unaff_ESI) && (unaff_ESI <= *(int *)(lVar7 + 0x1c))) {
              iVar18 = 0;
              iVar17 = *(int *)(lVar7 + 0x24);
              uVar19 = 0;
              lVar10 = *(longlong *)(unaff_R13 + 8);
              puVar4 = *(undefined4 **)(unaff_R13 + 0x10);
              *(undefined8 *)(unaff_RBP + -6) = 0;
              *(undefined8 *)(unaff_RBP + -4) = 0;
              *(undefined1 *)(unaff_RBP + -2) = 0;
              unaff_RBP[10] = *puVar4;
              *(undefined8 *)(unaff_RBP + -1) = 0;
              *(undefined8 *)(unaff_RBP + 1) = 0;
              *(longlong *)(unaff_RBP + 8) = lVar10;
              *(undefined8 *)(unaff_RBP + 4) = 0;
              *(undefined8 *)(unaff_RBP + 6) = 0;
              if (iVar17 == 0) {
                iVar17 = 0;
                unaff_RBP[-8] = 0;
              }
              else {
                uVar15 = *(byte *)(lVar10 + iVar17) & 0xf;
                lVar10 = (lVar10 - (char)(&DAT_140eb2890)[uVar15]) + (longlong)iVar17;
                bVar1 = (&DAT_140eb28a0)[uVar15];
                *(longlong *)(unaff_RBP + -6) = lVar10;
                *(longlong *)(unaff_RBP + -4) = lVar10;
                unaff_RBP[-8] = *(uint *)(lVar10 + -4) >> (bVar1 & 0x1f);
                uVar19 = FUN_1401ab7d0(unaff_RBP + -8);
                iVar17 = unaff_RBP[-8];
              }
              unaff_R15 = in_stack_00000078;
              if (iVar17 != 0) {
                do {
                  *(undefined1 *)(unaff_RBP + -0x12) = *(undefined1 *)(unaff_RBP + -2);
                  *(undefined2 *)((longlong)unaff_RBP + -0x47) =
                       *(undefined2 *)((longlong)unaff_RBP + -7);
                  *(undefined1 *)((longlong)unaff_RBP + -0x45) =
                       *(undefined1 *)((longlong)unaff_RBP + -5);
                  unaff_RBP[-0x11] = unaff_RBP[-1];
                  unaff_RBP[-0x10] = *unaff_RBP;
                  unaff_RBP[-0xf] = unaff_RBP[1];
                  unaff_RBP[-0xe] = unaff_RBP[2];
                  unaff_RBP[-0xd] = unaff_RBP[3];
                  *(undefined8 *)(unaff_RBP + -0xc) = *(undefined8 *)(unaff_RBP + 4);
                  *(undefined8 *)(unaff_RBP + -10) = *(undefined8 *)(unaff_RBP + 6);
                  iVar13 = *(int *)(*(longlong *)(unaff_R14 + 0xc) + 0xc);
                  lVar7 = FUN_14018ff30();
                  piVar14 = (int *)((longlong)iVar13 + lVar7 + 4);
                  iVar13 = *(int *)(*(longlong *)(unaff_R14 + 0xc) + 0xc);
                  lVar7 = FUN_14018ff30();
                  for (iVar13 = *(int *)(lVar7 + iVar13); unaff_ESI = in_stack_00000060._4_4_,
                      0 < iVar13; iVar13 = iVar13 + -1) {
                    iVar6 = *piVar14;
                    lVar7 = FUN_14018ff30();
                    lVar7 = iVar6 + lVar7;
                    iVar6 = FUN_1401ac8a0(unaff_RBP + -0x12,lVar7,*(undefined8 *)(unaff_R14 + 0xc));
                    if (iVar6 != 0) {
                      uVar3 = *(undefined8 *)(unaff_RBP + -0x1e);
                      uVar8 = FUN_14018fd40(uVar3);
                      if (lVar7 != 0) {
                        FUN_1401ace60(unaff_R14,uVar8,unaff_RBP + -0x12,lVar7);
                      }
                      iVar17 = unaff_RBP[-0xe];
                      lVar7 = FUN_14018fef0();
                      uVar19 = FUN_14018fbc0(uVar3,unaff_R14,in_stack_00000068,uVar8,lVar7 + iVar17)
                      ;
                      lVar7 = *(longlong *)(unaff_RBP + -0x20);
                      goto LAB_1401adcfa;
                    }
                    piVar14 = piVar14 + 1;
                  }
                  uVar19 = FUN_1401ab7d0(unaff_RBP + -8);
                  iVar18 = iVar18 + 1;
                } while (iVar18 != iVar17);
                lVar7 = *(longlong *)(unaff_RBP + -0x20);
              }
            }
LAB_1401adcfa:
            pbVar16 = *(byte **)(lVar7 + 8);
            uVar9 = uVar9 + 1;
            lVar10 = (longlong)(char)(&DAT_140eb2890)[*pbVar16 & 0xf];
            bVar1 = (&DAT_140eb28a0)[*pbVar16 & 0xf];
            pbVar11 = pbVar16 + -lVar10;
            uVar15 = *(uint *)(pbVar11 + -4);
            *(byte **)(lVar7 + 8) = pbVar11;
            *(uint *)(lVar7 + 0x18) = uVar15 >> (bVar1 & 0x1f);
            cVar5 = (&DAT_140eb2890)[*pbVar11 & 0xf];
            pbVar12 = pbVar16 + (-lVar10 - (longlong)cVar5);
            *(uint *)(lVar7 + 0x1c) =
                 *(uint *)(pbVar12 + -4) >> ((&DAT_140eb28a0)[*pbVar11 & 0xf] & 0x1f);
            *(byte **)(lVar7 + 8) = pbVar12;
            pbVar16 = pbVar16 + ((-(longlong)cVar5 -
                                 (longlong)(char)(&DAT_140eb2890)[*pbVar12 & 0xf]) - lVar10);
            *(uint *)(lVar7 + 0x20) =
                 *(uint *)(pbVar16 + -4) >> ((&DAT_140eb28a0)[*pbVar12 & 0xf] & 0x1f);
            *(byte **)(lVar7 + 8) = pbVar16;
            uVar2 = *(undefined4 *)pbVar16;
            *(byte **)(lVar7 + 8) = pbVar16 + 4;
            *(undefined4 *)(lVar7 + 0x24) = uVar2;
          } while (uVar9 < (uint)unaff_RBP[-0x16]);
        }
      }
      if (((*unaff_R15 & 0x40) != 0) && (cVar5 = FUN_14018fb70(uVar19,unaff_R15), cVar5 == '\0')) {
        lVar7 = FUN_1401aae30();
        *(int **)(lVar7 + 0x20) = unaff_R14;
        lVar7 = FUN_1401aae30();
        *(undefined8 *)(lVar7 + 0x28) = in_stack_00000068;
                    /* WARNING: Subroutine does not return */
        FUN_1401aa0e4();
      }
    }
    else if (unaff_RBP[0xc] != 0) {
      if (*(char *)(unaff_RBP + 0x36) != '\0') goto LAB_1401adf0a;
      FUN_1401ae170(unaff_R14);
    }
    lVar7 = FUN_1401aae30();
    if (*(longlong *)(lVar7 + 0x38) == 0) {
LAB_1401adea3:
                    /* WARNING: Subroutine does not return */
      FUN_140188a00(*(ulonglong *)(unaff_RBP + 0x16) ^ (ulonglong)&stack0x00000000);
    }
  }
LAB_1401adf0a:
                    /* WARNING: Subroutine does not return */
  FUN_1401a0758();
}

