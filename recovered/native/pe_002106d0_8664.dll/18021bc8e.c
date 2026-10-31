/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021bc8e */

void FUN_18021bc8e(longlong *param_1,int param_2,int param_3,int param_4,int param_5,int *param_6,
                  int *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = -(param_5 - param_3);
  iVar1 = -(param_4 - param_2);
  if (*(char *)(*param_1 + 0x134) == '\0') {
    iVar4 = param_5 - param_3;
    iVar1 = param_4 - param_2;
  }
  *param_7 = 0;
  *param_6 = 0;
  if (*(char *)((longlong)param_1 + 0x48d6) == '\0') {
    return;
  }
  lVar5 = param_1[1];
  iVar3 = *(int *)(lVar5 + 0x20);
  iVar2 = FUN_18021c182(param_2,param_3,param_4,param_5);
  *(int *)(lVar5 + 0x20) = iVar2 + iVar3;
  if (iVar1 < 0) {
    if (iVar4 < 0) {
      if (iVar4 * -2 < -iVar1) goto LAB_18021bd7c;
      iVar3 = (int)param_1[0x920];
      if (iVar1 * -2 < -iVar4) goto LAB_18021bde2;
      lVar5 = (longlong)iVar3 * -0xb332;
    }
    else {
      if (iVar4 * 2 < -iVar1) {
LAB_18021bd7c:
        *param_6 = 0;
        iVar4 = *(int *)((longlong)param_1 + 0x4904) * 2;
        goto LAB_18021be37;
      }
      iVar3 = (int)param_1[0x920];
      if (iVar1 * -2 < iVar4) goto LAB_18021bd5c;
      lVar5 = (longlong)iVar3 * 0xb333;
    }
    *param_6 = (int)((ulonglong)(lVar5 + 0x8000 + (lVar5 >> 0x3f)) >> 0x10);
    lVar5 = (longlong)*(int *)((longlong)param_1 + 0x4904) * 0x1b333;
LAB_18021be26:
    iVar4 = (int)((ulonglong)(lVar5 + 0x8000 + (lVar5 >> 0x3f)) >> 0x10);
  }
  else {
    if (iVar4 < 0) {
      if (iVar1 <= iVar4 * -2) {
        iVar3 = (int)param_1[0x920];
        if (iVar1 * 2 < -iVar4) {
LAB_18021bde2:
          *param_6 = -iVar3;
          goto LAB_18021bde6;
        }
        lVar5 = (longlong)iVar3 * -0xb332;
        goto LAB_18021bda7;
      }
    }
    else if (iVar1 <= iVar4 * 2) {
      iVar3 = (int)param_1[0x920];
      if (iVar1 * 2 < iVar4) {
LAB_18021bd5c:
        *param_6 = iVar3;
LAB_18021bde6:
        iVar4 = *(int *)((longlong)param_1 + 0x4904);
        goto LAB_18021be37;
      }
      lVar5 = (longlong)iVar3 * 0xb333;
LAB_18021bda7:
      *param_6 = (int)((ulonglong)(lVar5 + 0x8000 + (lVar5 >> 0x3f)) >> 0x10);
      lVar5 = (longlong)*(int *)((longlong)param_1 + 0x4904) * 0x4ccd;
      goto LAB_18021be26;
    }
    *param_6 = 0;
    iVar4 = 0;
  }
LAB_18021be37:
  *param_7 = iVar4;
  return;
}

