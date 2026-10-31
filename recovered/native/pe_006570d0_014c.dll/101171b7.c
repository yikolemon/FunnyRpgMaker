/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101171b7 */

void FUN_101171b7(int param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  
  iVar6 = DAT_1039d74c;
  if (*(int *)(DAT_1039d74c + 0x2048) != param_2) {
    FUN_1011238c(param_2);
  }
  iVar2 = *(int *)(param_2 + 0x19c);
  *(int *)(iVar6 + 0x2044) = param_1;
  *(int *)(iVar6 + 0x2050) = iVar2;
  FUN_101120d9(*(undefined4 *)(iVar6 + 0x1e3c));
  *(int *)(param_2 + 0x3c4 + iVar2 * 4) = param_1;
  uVar7 = 0;
  if (*(int *)(iVar6 + 0x1e80) == param_1) {
    fVar3 = *(float *)(iVar6 + 0x1ea0);
    fVar4 = *(float *)(iVar6 + 0x1ea4);
    fVar5 = *(float *)(iVar6 + 0x1ea8);
    fVar8 = (float)*(undefined8 *)(param_2 + 0x154);
    fVar9 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x154) >> 0x20);
    pfVar1 = (float *)(param_2 + 0x3cc + iVar2 * 0x10);
    *pfVar1 = *(float *)(iVar6 + 0x1e9c) - fVar8;
    pfVar1[1] = fVar3 - fVar9;
    pfVar1[2] = fVar4 - fVar8;
    pfVar1[3] = fVar5 - fVar9;
    if (*(int *)(iVar6 + 0x1e80) == param_1) {
      uVar7 = *(undefined4 *)(iVar6 + 0x1e84);
    }
  }
  *(undefined4 *)(iVar6 + 0x2054) = uVar7;
  if (param_1 == *(int *)(iVar6 + 0x152c)) {
    *(undefined1 *)(iVar6 + 0x2043) = 1;
  }
  if ((*(uint *)(iVar6 + 0x1548) & 0xfffffffe) == 2) {
    *(undefined1 *)(iVar6 + 0x2041) = 1;
  }
  else if (*(char *)(iVar6 + 0x6a) == '\x01') {
    *(undefined1 *)(iVar6 + 0x2040) = 0;
  }
  FUN_10117123(0);
  FUN_10117123(1);
  return;
}

