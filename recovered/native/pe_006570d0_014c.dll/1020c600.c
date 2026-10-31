/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020c600 */

void __fastcall
FUN_1020c600(int *param_1,int param_2,int param_3,int param_4,int param_5,uint *param_6,
            uint *param_7)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = -(param_5 - param_3);
  iVar5 = -(param_4 - param_2);
  if (*(char *)(*param_1 + 0xec) == '\0') {
    iVar6 = param_5 - param_3;
    iVar5 = param_4 - param_2;
  }
  *param_7 = 0;
  *param_6 = 0;
  if (*(char *)((int)param_1 + 0x2d8e) == '\0') {
    return;
  }
  iVar1 = param_1[1];
  iVar2 = *(int *)(iVar1 + 0x10);
  iVar4 = FUN_1020cae9(param_4,param_5);
  *(int *)(iVar1 + 0x10) = iVar4 + iVar2;
  if (iVar5 < 0) {
    if (iVar6 < 0) {
      if (iVar6 * -2 < -iVar5) goto LAB_1020c6f9;
      uVar7 = param_1[0xb69];
      if (iVar5 * -2 < -iVar6) goto LAB_1020c761;
      iVar5 = -0xb332;
    }
    else {
      if (iVar6 * 2 < -iVar5) {
LAB_1020c6f9:
        *param_6 = 0;
        uVar7 = param_1[0xb6a] * 2;
        goto LAB_1020c7b4;
      }
      uVar7 = param_1[0xb69];
      if (iVar5 * -2 < iVar6) goto LAB_1020c763;
      iVar5 = 0xb333;
    }
    iVar6 = (int)((longlong)(int)uVar7 * (longlong)iVar5 >> 0x3f);
    lVar3 = (longlong)(int)uVar7 * (longlong)iVar5 + CONCAT44(iVar6,iVar6) + 0x8000;
    *param_6 = (int)((ulonglong)lVar3 >> 0x20) * 0x10000 | (uint)lVar3 >> 0x10;
    iVar5 = 0x1b333;
LAB_1020c79c:
    iVar6 = (int)((longlong)iVar5 * (longlong)param_1[0xb6a] >> 0x3f);
    lVar3 = (longlong)iVar5 * (longlong)param_1[0xb6a] + CONCAT44(iVar6,iVar6) + 0x8000;
    uVar7 = (int)((ulonglong)lVar3 >> 0x20) * 0x10000 | (uint)lVar3 >> 0x10;
  }
  else {
    if (iVar6 < 0) {
      if (iVar5 <= iVar6 * -2) {
        uVar7 = param_1[0xb69];
        if (iVar5 * 2 < -iVar6) {
LAB_1020c761:
          uVar7 = -uVar7;
          goto LAB_1020c763;
        }
        iVar5 = -0xb332;
        goto LAB_1020c728;
      }
    }
    else if (iVar5 <= iVar6 * 2) {
      uVar7 = param_1[0xb69];
      if (iVar5 * 2 < iVar6) {
LAB_1020c763:
        *param_6 = uVar7;
        uVar7 = param_1[0xb6a];
        goto LAB_1020c7b4;
      }
      iVar5 = 0xb333;
LAB_1020c728:
      iVar6 = (int)((longlong)(int)uVar7 * (longlong)iVar5 >> 0x3f);
      lVar3 = (longlong)(int)uVar7 * (longlong)iVar5 + CONCAT44(iVar6,iVar6) + 0x8000;
      *param_6 = (int)((ulonglong)lVar3 >> 0x20) * 0x10000 | (uint)lVar3 >> 0x10;
      iVar5 = 0x4ccd;
      goto LAB_1020c79c;
    }
    *param_6 = 0;
    uVar7 = 0;
  }
LAB_1020c7b4:
  *param_7 = uVar7;
  return;
}

