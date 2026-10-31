/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00476777 */

undefined8 __fastcall
FUN_00476777(byte *param_1,int param_2,uint param_3,int param_4,uint param_5,uint param_6,
            uint param_7)

{
  bool bVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  undefined8 uVar14;
  
  pbVar9 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),
                            (int)param_7 < (int)param_3 || (int)param_5 < (int)param_6);
  if ((int)param_7 >= (int)param_3 && (int)param_5 >= (int)param_6) {
    if ((int)param_5 <= (int)param_7) {
      param_7 = -*(int *)(param_1 + 4) & param_5;
    }
    if ((int)param_6 <= (int)param_3) {
      param_6 = -*(int *)(param_1 + 4) & (param_3 + *(int *)(param_1 + 4)) - 1;
    }
    if (param_3 == param_6) {
      param_6 = *(int *)(param_1 + 4) + param_3;
    }
    if ((int)param_6 <= (int)param_7) {
      uVar11 = param_7 - param_6 >> (*param_1 & 0x1f);
      piVar12 = *(int **)(param_1 + 0x20);
      if (*(int **)(param_1 + 0x1c) <= piVar12 + uVar11 + 1) {
        param_1[0x24] = 0x62;
        param_1[0x25] = 0;
        param_1[0x26] = 0;
        param_1[0x27] = 0;
        uVar5 = CONCAT31((int3)(param_3 >> 8),1);
        goto LAB_004768da;
      }
      iVar8 = param_4 - param_2;
      if (iVar8 == 0) {
        iVar8 = uVar11 + 1;
        do {
          *piVar12 = param_4;
          piVar12 = piVar12 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        pbVar9 = (byte *)0x0;
      }
      else {
        pbVar6 = (byte *)(param_5 - param_3);
        lVar2 = (longlong)(int)(param_6 - param_3) * (longlong)iVar8;
        uVar14 = __alldiv((uint)lVar2,(uint)((ulonglong)lVar2 >> 0x20),(uint)pbVar6,
                          (int)pbVar6 >> 0x1f);
        pbVar9 = (byte *)((ulonglong)uVar14 >> 0x20);
        iVar13 = param_2 + (int)uVar14;
        *piVar12 = iVar13;
        piVar12 = piVar12 + 1;
        if (uVar11 != 0) {
          uVar3 = (uint)((longlong)iVar8 * (longlong)*(int *)(param_1 + 4));
          iVar10 = (param_6 - param_3) * iVar8 - (int)uVar14 * (int)pbVar6;
          uVar14 = __alldiv(uVar3,(uint)((ulonglong)
                                         ((longlong)iVar8 * (longlong)*(int *)(param_1 + 4)) >> 0x20
                                        ),(uint)pbVar6,(int)pbVar6 >> 0x1f);
          iVar4 = uVar3 - (int)pbVar6 * (int)uVar14;
          iVar7 = -iVar10;
          iVar8 = -iVar4;
          if (iVar13 <= param_4) {
            iVar7 = iVar10;
            iVar8 = iVar4;
          }
          bVar1 = iVar13 <= param_4;
          do {
            pbVar9 = (byte *)0x0;
            iVar4 = 0;
            if ((int)pbVar6 <= iVar7 + iVar8) {
              pbVar9 = pbVar6;
              iVar4 = (uint)bVar1 * 2 + -1;
            }
            iVar13 = iVar13 + (int)uVar14 + iVar4;
            iVar7 = (iVar7 + iVar8) - (int)pbVar9;
            *piVar12 = iVar13;
            piVar12 = piVar12 + 1;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
      }
      *(int **)(param_1 + 0x20) = piVar12;
    }
  }
  uVar5 = 0;
  param_1 = pbVar9;
LAB_004768da:
  return CONCAT44(param_1,uVar5);
}

