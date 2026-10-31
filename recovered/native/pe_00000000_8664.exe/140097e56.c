/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140097e56 */

void FUN_140097e56(longlong param_1,undefined8 *param_2,int *param_3)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined *puVar15;
  
  if ((*(byte *)(param_1 + 0x30) & 0x80) != 0) {
    iVar3 = *(int *)(param_1 + 0x2954);
    if (iVar3 < 0) {
      iVar3 = 0;
      uVar7 = FUN_140077ab4(0);
      if (*(longlong *)(param_1 + 0x2958) != 0) {
        FUN_1401c5180(uVar7,*(longlong *)(param_1 + 0x2958),
                      (longlong)*(int *)(param_1 + 0x2950) * 0x24);
        FUN_140077b90(*(undefined8 *)(param_1 + 0x2958));
      }
      *(undefined8 *)(param_1 + 0x2958) = uVar7;
      *(undefined4 *)(param_1 + 0x2954) = 0;
    }
    *(undefined4 *)(param_1 + 0x2950) = 0;
    uVar5 = *(uint *)(param_1 + 0x2930);
    uVar13 = (ulonglong)uVar5;
    if (iVar3 < (int)uVar5) {
      uVar7 = FUN_140077ab4(uVar13 * 0x24);
      if (*(longlong *)(param_1 + 0x2958) != 0) {
        FUN_1401c5180(uVar7,*(longlong *)(param_1 + 0x2958),
                      (longlong)*(int *)(param_1 + 0x2950) * 0x24);
        FUN_140077b90(*(undefined8 *)(param_1 + 0x2958));
      }
      *(undefined8 *)(param_1 + 0x2958) = uVar7;
      *(uint *)(param_1 + 0x2954) = uVar5;
      uVar13 = (ulonglong)*(uint *)(param_1 + 0x2930);
    }
    if (0 < (int)uVar13) {
      lVar11 = 8;
      lVar12 = 0;
      do {
        lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x2938) + lVar11);
        if ((lVar14 != 0) && (*(longlong *)(lVar14 + 0x18) == 0)) {
          FUN_1400ab5da((uint *)(param_1 + 0x2930),lVar14,0);
          uVar13 = (ulonglong)*(uint *)(param_1 + 0x2930);
        }
        lVar12 = lVar12 + 1;
        lVar11 = lVar11 + 0x10;
      } while (lVar12 < (int)uVar13);
    }
    if (*(int *)(param_1 + 0x2950) < 1) {
      iVar3 = 0;
    }
    else {
      iVar3 = 0;
      lVar12 = 0x11;
      lVar11 = 0;
      do {
        iVar3 = FUN_1400796a5((int)*(char *)(*(longlong *)(param_1 + 0x2958) + lVar12),iVar3);
        lVar11 = lVar11 + 1;
        lVar12 = lVar12 + 0x24;
      } while (lVar11 < *(int *)(param_1 + 0x2950));
    }
    FUN_1400793b6(param_3,"[%s][Data]\n",*param_2);
    if (0 < *(int *)(param_1 + 0x2950)) {
      lVar11 = 0;
      do {
        iVar10 = *param_3;
        piVar1 = (int *)(*(longlong *)(param_1 + 0x2958) + lVar11 * 0x24);
        iVar4 = (iVar3 - *(char *)((longlong)piVar1 + 0x11)) * 2;
        pcVar8 = "DockSpace";
        if (((uint)piVar1[5] >> 10 & 1) == 0) {
          pcVar8 = "DockNode ";
        }
        puVar15 = &DAT_140edcdbf;
        FUN_1400793b6(param_3,&DAT_140ec5c2f,*(char *)((longlong)piVar1 + 0x11) * 2,&DAT_140edcdbf,
                      pcVar8,iVar4,&DAT_140edcdbf);
        uVar6 = (undefined4)((ulonglong)pcVar8 >> 0x20);
        FUN_1400793b6(param_3," ID=0x%08X",*piVar1);
        iVar9 = piVar1[1];
        if (iVar9 == 0) {
          if (piVar1[2] != 0) {
            FUN_1400793b6(param_3," Window=0x%08X");
          }
          iVar4 = (int)*(short *)((longlong)piVar1 + 0x1e);
          sVar2 = *(short *)((longlong)piVar1 + 0x1a);
          iVar9 = (int)(short)piVar1[6];
          uVar7 = CONCAT44(uVar6,(int)(short)piVar1[7]);
          pcVar8 = " Pos=%d,%d Size=%d,%d";
        }
        else {
          sVar2 = (short)piVar1[8];
          uVar7 = CONCAT44(uVar6,(int)*(short *)((longlong)piVar1 + 0x22));
          pcVar8 = " Parent=0x%08X SizeRef=%d,%d";
        }
        FUN_1400793b6(param_3,pcVar8,iVar9,(int)sVar2,uVar7,iVar4,puVar15);
        if ((char)piVar1[4] != -1) {
          FUN_1400793b6(param_3," Split=%c",0x59 - (uint)((char)piVar1[4] == '\0'));
        }
        uVar5 = piVar1[5];
        if ((uVar5 & 0x20) != 0) {
          FUN_1400793b6(param_3," NoResize=1");
          uVar5 = piVar1[5];
        }
        if ((uVar5 >> 0xb & 1) != 0) {
          FUN_1400793b6(param_3," CentralNode=1");
          uVar5 = piVar1[5];
        }
        if ((uVar5 >> 0xc & 1) != 0) {
          FUN_1400793b6(param_3," NoTabBar=1");
          uVar5 = piVar1[5];
        }
        if ((uVar5 >> 0xd & 1) != 0) {
          FUN_1400793b6(param_3," HiddenTabBar=1");
          uVar5 = piVar1[5];
        }
        sVar2 = (short)uVar5;
        if ((uVar5 >> 0xe & 1) != 0) {
          FUN_1400793b6(param_3," NoWindowMenuButton=1");
          sVar2 = (short)piVar1[5];
        }
        if (sVar2 < 0) {
          FUN_1400793b6(param_3," NoCloseButton=1");
        }
        if (piVar1[3] != 0) {
          FUN_1400793b6(param_3," Selected=0x%08X");
        }
        if ((*(char *)(param_1 + 0xba) == '\x01') &&
           (lVar12 = FUN_140099b24(param_1,*piVar1), lVar12 != 0)) {
          uVar6 = FUN_1400796a5(2,((iVar10 + (uint)(iVar10 == 0)) -
                                  (*param_3 + -1 + (uint)(*param_3 == 0))) + 0x5b);
          FUN_1400793b6(param_3,&DAT_140ec5c34,uVar6,&DAT_140edcdbf);
          if (((*(byte *)(lVar12 + 0x11) & 4) != 0) &&
             ((*(longlong *)(lVar12 + 0x90) != 0 &&
              (lVar12 = *(longlong *)(*(longlong *)(lVar12 + 0x90) + 0x408), lVar12 != 0)))) {
            FUN_1400793b6(param_3," ; in \'%s\'",*(undefined8 *)(lVar12 + 8));
          }
          lVar12 = *(longlong *)(param_1 + 0x29a0);
          if (lVar12 != 0) {
            lVar14 = lVar12 + 4;
            iVar10 = 0;
            do {
              if (*(int *)(lVar14 + 0x14) == *piVar1) {
                if (iVar10 == 0) {
                  FUN_1400793b6(param_3," ; contains ");
                }
                iVar10 = iVar10 + 1;
                FUN_1400793b6(param_3,"\'%s\' ",lVar14 + 0x24);
                lVar12 = *(longlong *)(param_1 + 0x29a0);
              }
              lVar14 = lVar14 + *(int *)(lVar14 + -4);
            } while (lVar14 != *(int *)(param_1 + 0x2998) + lVar12 + 4);
          }
        }
        FUN_1400793b6(param_3,"\n");
        lVar11 = lVar11 + 1;
      } while (lVar11 < *(int *)(param_1 + 0x2950));
    }
    FUN_1400793b6(param_3,"\n");
  }
  return;
}

