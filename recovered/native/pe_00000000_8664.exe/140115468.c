/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140115468 */

void FUN_140115468(longlong param_1,undefined8 *param_2,int *param_3)

{
  float fVar1;
  uint uVar2;
  bool bVar3;
  byte bVar4;
  short sVar5;
  longlong lVar6;
  int *piVar7;
  int iVar8;
  undefined8 uVar9;
  byte *pbVar10;
  
  lVar6 = *(longlong *)(param_1 + 0x29b0);
  if (lVar6 != 0) {
    piVar7 = (int *)(lVar6 + 4);
    do {
      if (*piVar7 != 0) {
        uVar2 = piVar7[1];
        FUN_1400a826e(param_3,*param_3 + (uint)(*param_3 == 0) + (short)piVar7[3] * 0x32 + 0x1d);
        FUN_1400793b6(param_3,"[%s][0x%08X,%d]\n",*param_2,*piVar7,(int)(short)piVar7[3]);
        fVar1 = (float)piVar7[2];
        if ((fVar1 != 0.0) || (NAN(fVar1))) {
          FUN_1400793b6(param_3,"RefScale=%g\n",(double)fVar1);
        }
        sVar5 = (short)piVar7[3];
        if (0 < sVar5) {
          pbVar10 = (byte *)((longlong)piVar7 + 0x22);
          iVar8 = 0;
          do {
            bVar3 = (uVar2 & 7) != 0;
            if ((*(int *)(pbVar10 + -10) != 0 || bVar3) || ((uVar2 & 8) == 0)) {
              if (*(int *)(pbVar10 + -10) != 0 || bVar3) goto LAB_140115560;
            }
            else if (*(short *)(pbVar10 + -2) != -1) {
LAB_140115560:
              FUN_1400793b6(param_3,"Column %-2d",iVar8);
              if (*(int *)(pbVar10 + -10) != 0) {
                FUN_1400793b6(param_3," UserID=%08X");
              }
              if ((uVar2 & 1) != 0) {
                bVar4 = *pbVar10;
                if ((bVar4 & 0x10) != 0) {
                  FUN_1400793b6(param_3," Weight=%.4f",(double)*(float *)(pbVar10 + -0xe));
                  bVar4 = *pbVar10;
                }
                if ((bVar4 & 0x10) == 0) {
                  FUN_1400793b6(param_3," Width=%d",(int)*(float *)(pbVar10 + -0xe));
                }
              }
              if ((uVar2 & 4) != 0) {
                FUN_1400793b6(param_3," Visible=%d",(int)((char)(*pbVar10 << 4) >> 6));
              }
              if ((uVar2 & 2) != 0) {
                FUN_1400793b6(param_3," Order=%d",(int)*(short *)(pbVar10 + -4));
              }
              if (((uVar2 & 8) != 0) && (*(short *)(pbVar10 + -2) != -1)) {
                uVar9 = 0x5e;
                if ((*pbVar10 & 3) == 1) {
                  uVar9 = 0x76;
                }
                FUN_1400793b6(param_3," Sort=%d%c",(int)*(short *)(pbVar10 + -2),uVar9);
              }
              FUN_1400792d0(param_3,"\n",0);
              sVar5 = (short)piVar7[3];
            }
            iVar8 = iVar8 + 1;
            pbVar10 = pbVar10 + 0x10;
          } while (iVar8 < sVar5);
        }
        FUN_1400792d0(param_3,"\n",0);
        lVar6 = *(longlong *)(param_1 + 0x29b0);
      }
      piVar7 = (int *)((longlong)piVar7 + (longlong)piVar7[-1]);
    } while (piVar7 != (int *)(*(int *)(param_1 + 0x29a8) + lVar6 + 4));
  }
  return;
}

