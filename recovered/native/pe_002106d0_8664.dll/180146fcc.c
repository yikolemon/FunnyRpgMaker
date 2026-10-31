/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180146fcc */

void FUN_180146fcc(longlong *param_1,int param_2,char *param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  size_t sVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_3 != param_4) {
    lVar9 = *param_1;
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
    if (param_4 == (char *)0x0) {
      sVar7 = strlen(param_3);
    }
    else {
      sVar7 = (longlong)param_4 - (longlong)param_3;
    }
    if ((uVar1 >> 0x16 & 1) == 0) {
      iVar2 = ~*(uint *)(param_1 + 6) + *(int *)((longlong)param_1 + 0x34);
      if (iVar2 < (int)sVar7) {
        iVar2 = FUN_1800ff206(param_3,param_3 + (int)sVar7,param_3 + iVar2);
        sVar7 = (size_t)(uint)(iVar2 - (int)param_3);
      }
    }
    iVar2 = (int)sVar7;
    if (iVar2 != 0) {
      iVar8 = (int)param_1[6];
      if ((uVar1 & 0x400200) == 0x400000 && *(int *)(lVar9 + 0x26d0) <= iVar2 + iVar8) {
        uVar3 = FUN_1801003e9(0x100,sVar7 & 0xffffffff);
        iVar4 = FUN_18012bcdf(iVar2 * 4,0x20,uVar3);
        iVar6 = iVar4 + iVar8 + 1;
        iVar4 = iVar8 + iVar4 + 2;
        iVar8 = *(int *)(lVar9 + 0x26d4);
        if (iVar8 < iVar4) {
          if (iVar8 == 0) {
            iVar8 = 8;
          }
          else {
            iVar8 = iVar8 / 2 + iVar8;
          }
          if (iVar8 <= iVar4) {
            iVar8 = iVar4;
          }
          lVar5 = FUN_1800fe7f8((longlong)iVar8);
          if (*(longlong *)(lVar9 + 0x26d8) != 0) {
            FUN_1802a82f0(lVar5,*(longlong *)(lVar9 + 0x26d8),(longlong)*(int *)(lVar9 + 0x26d0));
            FUN_1800fe8d4(*(undefined8 *)(lVar9 + 0x26d8));
          }
          *(longlong *)(lVar9 + 0x26d8) = lVar5;
          *(int *)(lVar9 + 0x26d4) = iVar8;
        }
        else {
          lVar5 = *(longlong *)(lVar9 + 0x26d8);
        }
        *(int *)(lVar9 + 0x26d0) = iVar4;
        *(longlong *)(lVar9 + 0x26c8) = lVar5;
        param_1[5] = lVar5;
        *(int *)(lVar9 + 0x2700) = iVar6;
        *(int *)((longlong)param_1 + 0x34) = iVar6;
        iVar8 = (int)param_1[6];
      }
      lVar9 = (longlong)iVar2;
      if (iVar8 - param_2 != 0) {
        lVar5 = param_1[5] + (longlong)param_2;
        FUN_1802a82f0(lVar5 + lVar9,lVar5,(longlong)(iVar8 - param_2));
      }
      FUN_1802a82f0((longlong)param_2 + param_1[5],param_3,lVar9);
      *(undefined1 *)(param_1[5] + (int)param_1[6] + lVar9) = 0;
      *(undefined1 *)((longlong)param_1 + 0x23) = 1;
      *(int *)(param_1 + 6) = (int)param_1[6] + iVar2;
      iVar8 = (int)param_1[7];
      if (param_2 <= iVar8) {
        iVar8 = iVar8 + iVar2;
        *(int *)(param_1 + 7) = iVar8;
      }
      uVar3 = FUN_18012bcdf(iVar8,0);
      *(undefined4 *)(param_1 + 7) = uVar3;
      *(undefined4 *)(param_1 + 8) = uVar3;
      *(undefined4 *)((longlong)param_1 + 0x3c) = uVar3;
    }
  }
  return;
}

