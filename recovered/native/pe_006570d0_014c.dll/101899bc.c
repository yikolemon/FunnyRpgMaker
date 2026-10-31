/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101899bc */

void __thiscall
FUN_101899bc(int param_1,float *param_2,float param_3,float param_4,float param_5,int param_6)

{
  float fVar1;
  float fVar2;
  double dVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  
  iVar8 = *(int *)(param_1 + 0x38);
  if (DAT_102b70e0 <= param_3) {
    iVar8 = param_6 + iVar8 + 1;
    if (*(int *)(param_1 + 0x3c) < iVar8) {
      uVar4 = FUN_100fa1fa();
      if (*(int *)(param_1 + 0x40) != 0) {
        FUN_1025b2d0(uVar4,*(int *)(param_1 + 0x40),*(int *)(param_1 + 0x38) << 3);
        FUN_100fa2cb();
      }
      *(undefined4 *)(param_1 + 0x40) = uVar4;
      *(int *)(param_1 + 0x3c) = iVar8;
    }
    if (-1 < param_6) {
      iVar8 = 0;
      do {
        dVar3 = (double)(((float)iVar8 / (float)param_6) * (param_5 - param_4) + param_4);
        fVar1 = param_2[1];
        fVar9 = (float10)FUN_102704b0(dVar3);
        fVar2 = *param_2;
        fVar10 = (float10)FUN_1026d4b0(dVar3);
        iVar5 = *(int *)(param_1 + 0x38);
        if (iVar5 == *(int *)(param_1 + 0x3c)) {
          if (iVar5 == 0) {
            iVar6 = 8;
          }
          else {
            iVar6 = iVar5 / 2 + iVar5;
          }
          iVar7 = iVar5 + 1;
          if (iVar5 + 1 < iVar6) {
            iVar7 = iVar6;
          }
          iVar6 = FUN_100fa1fa();
          if (*(int *)(param_1 + 0x40) != 0) {
            FUN_1025b2d0(iVar6,*(int *)(param_1 + 0x40),*(int *)(param_1 + 0x38) << 3);
            FUN_100fa2cb();
          }
          *(int *)(param_1 + 0x40) = iVar6;
          *(int *)(param_1 + 0x3c) = iVar7;
          iVar5 = *(int *)(param_1 + 0x38);
        }
        else {
          iVar6 = *(int *)(param_1 + 0x40);
        }
        *(ulonglong *)(iVar6 + iVar5 * 8) =
             CONCAT44(fVar1 + (float)fVar9 * param_3,fVar2 + (float)fVar10 * param_3);
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
        iVar8 = iVar8 + 1;
      } while (param_6 + 1 != iVar8);
    }
  }
  else {
    if (iVar8 == *(int *)(param_1 + 0x3c)) {
      if (iVar8 == 0) {
        iVar5 = 8;
      }
      else {
        iVar5 = iVar8 / 2 + iVar8;
      }
      iVar6 = iVar8 + 1;
      if (iVar8 + 1 < iVar5) {
        iVar6 = iVar5;
      }
      iVar5 = FUN_100fa1fa();
      if (*(int *)(param_1 + 0x40) != 0) {
        FUN_1025b2d0(iVar5,*(int *)(param_1 + 0x40),*(int *)(param_1 + 0x38) << 3);
        FUN_100fa2cb();
      }
      *(int *)(param_1 + 0x40) = iVar5;
      *(int *)(param_1 + 0x3c) = iVar6;
      iVar8 = *(int *)(param_1 + 0x38);
    }
    else {
      iVar5 = *(int *)(param_1 + 0x40);
    }
    *(undefined8 *)(iVar5 + iVar8 * 8) = *(undefined8 *)param_2;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  }
  return;
}

