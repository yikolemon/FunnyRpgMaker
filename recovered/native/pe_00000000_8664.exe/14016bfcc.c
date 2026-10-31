/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016bfcc */

void FUN_14016bfcc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  int param_5,int param_6,char param_7)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar6 = (char *)FUN_14016a574(param_2,param_3);
  iVar7 = *(int *)(pcVar6 + 4);
  iVar1 = *(int *)(pcVar6 + 8);
  iVar9 = iVar1 - iVar7;
  if (iVar9 == -0x140000) {
    if (param_7 != '\0') {
LAB_14016c040:
      bVar2 = true;
      uVar5 = 0;
      goto LAB_14016c07e;
    }
    *(int *)(param_1 + 2) = iVar7;
    uVar5 = 2;
  }
  else if (iVar9 == -0x150000) {
    if (param_7 == '\0') goto LAB_14016c040;
    *(int *)(param_1 + 2) = iVar1;
    uVar5 = 1;
  }
  else {
    if (iVar9 < 0) {
      if (param_7 == '\0') {
        *(int *)(param_1 + 2) = iVar7;
        goto LAB_14016c076;
      }
      *(int *)(param_1 + 2) = iVar1;
    }
    else {
      if (param_7 == '\0') {
        *(int *)(param_1 + 2) = iVar1;
LAB_14016c076:
        uVar5 = 8;
        goto LAB_14016c07b;
      }
      *(int *)(param_1 + 2) = iVar7;
    }
    uVar5 = 4;
  }
LAB_14016c07b:
  bVar2 = false;
LAB_14016c07e:
  *(undefined4 *)param_1 = uVar5;
  cVar3 = FUN_14016c4c8(param_1);
  iVar7 = *(int *)(param_1 + 2);
  if (cVar3 != '\0') {
    iVar7 = iVar7 + *(int *)(param_4 + 0x130) * 2;
  }
  *(int *)(param_1 + 2) = iVar7 + param_5;
  *(int *)(param_1 + 3) = param_6;
  param_1[1] = param_3;
  if ((!bVar2) && (*pcVar6 != '\0')) {
    bVar4 = FUN_14016c4c8(param_1);
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(pcVar6 + (ulonglong)bVar4 * 4 + 0xc)
    ;
    FUN_14016c4e3(param_1);
    return;
  }
  lVar8 = (longlong)param_6 * (longlong)(iVar7 + param_5);
  *(int *)((longlong)param_1 + 0x14) = (int)((ulonglong)((lVar8 >> 0x3f) + lVar8 + 0x8000) >> 0x10);
  return;
}

