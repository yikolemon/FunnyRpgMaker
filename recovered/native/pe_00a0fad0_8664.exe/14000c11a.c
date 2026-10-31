/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000c11a */

void FUN_14000c11a(longlong param_1,ulonglong *param_2,longlong param_3,int param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar1 = *(uint *)(param_1 + 0x70);
  uVar8 = 0xffffffffffffffff;
  if (((param_5 & (uVar1 & 4) >> 2) != 0) ||
     ((byte)((byte)((uVar1 & 2) >> 1) & (byte)param_5 >> 1) != 0)) goto LAB_14000c277;
  uVar4 = **(ulonglong **)(param_1 + 0x38);
  if (((uVar1 & 2) == 0) && (uVar9 = **(ulonglong **)(param_1 + 0x40), uVar9 != 0)) {
    bVar7 = 1;
    if (*(ulonglong *)(param_1 + 0x68) < uVar9) {
      *(ulonglong *)(param_1 + 0x68) = uVar9;
    }
  }
  else {
    bVar7 = 0;
    uVar9 = 0;
  }
  lVar5 = *(longlong *)(param_1 + 0x68);
  lVar6 = **(longlong **)(param_1 + 0x18);
  uVar10 = lVar5 - lVar6;
  if (param_4 == 0) {
    uVar9 = 0;
  }
  else if (param_4 == 1) {
    if ((~param_5 & 3) == 0) goto LAB_14000c277;
    if ((param_5 & 1) == 0) {
      if (((param_5 & 2) == 0) || (uVar9 == 0 && lVar6 != 0)) goto LAB_14000c277;
    }
    else {
      uVar9 = uVar4;
      if (uVar4 == 0 && lVar6 != 0) goto LAB_14000c277;
    }
    uVar9 = uVar9 - lVar6;
  }
  else {
    uVar9 = uVar10;
    if (param_4 != 2) goto LAB_14000c277;
  }
  uVar9 = uVar9 + param_3;
  if ((uVar9 <= uVar10) &&
     ((uVar9 == 0 || ((((byte)param_5 & uVar4 == 0) == 0 && ((bool)((param_5 & 2) == 0 | bVar7))))))
     ) {
    uVar10 = lVar6 + uVar9;
    if (uVar4 != 0 && (param_5 & 1) != 0) {
      **(ulonglong **)(param_1 + 0x38) = uVar10;
      **(int **)(param_1 + 0x50) = (int)lVar5 - (int)uVar10;
    }
    uVar8 = uVar9;
    if (!(bool)(bVar7 ^ 1 | (param_5 & 2) == 0)) {
      iVar2 = **(int **)(param_1 + 0x40);
      iVar3 = **(int **)(param_1 + 0x58);
      **(longlong **)(param_1 + 0x20) = lVar6;
      **(ulonglong **)(param_1 + 0x40) = uVar10;
      **(int **)(param_1 + 0x58) = (iVar2 + iVar3) - (int)uVar10;
    }
  }
LAB_14000c277:
  *param_2 = uVar8;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}

