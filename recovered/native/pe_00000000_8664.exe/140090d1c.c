/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140090d1c */

void FUN_140090d1c(longlong param_1,float param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  lVar2 = DAT_140f2a910;
  lVar7 = *(longlong *)(DAT_140f2a910 + 0x1310);
  uVar1 = *(undefined8 *)(DAT_140f2a910 + 0x1320);
  iVar3 = *(int *)(DAT_140f2a910 + 0x2108);
  if (iVar3 == *(int *)(DAT_140f2a910 + 0x210c)) {
    if (iVar3 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar3 / 2 + iVar3;
    }
    iVar6 = iVar3 + 1;
    if (iVar3 + 1 < iVar5) {
      iVar6 = iVar5;
    }
    lVar4 = FUN_140077ab4((longlong)iVar6 << 4);
    if (*(longlong *)(lVar2 + 0x2110) != 0) {
      FUN_1401c5180(lVar4,*(longlong *)(lVar2 + 0x2110),(longlong)*(int *)(lVar2 + 0x2108) << 4);
      FUN_140077b90(*(undefined8 *)(lVar2 + 0x2110));
    }
    *(longlong *)(lVar2 + 0x2110) = lVar4;
    *(int *)(lVar2 + 0x210c) = iVar6;
    iVar3 = *(int *)(lVar2 + 0x2108);
  }
  else {
    lVar4 = *(longlong *)(DAT_140f2a910 + 0x2110);
  }
  *(longlong *)(lVar4 + (longlong)iVar3 * 0x10) = lVar7;
  *(ulonglong *)(lVar4 + 8 + (longlong)iVar3 * 0x10) =
       CONCAT44((int)uVar1,(int)((ulonglong)uVar1 >> 0x20));
  *(int *)(lVar2 + 0x2108) = *(int *)(lVar2 + 0x2108) + 1;
  if ((param_2 == 0.0) && (!NAN(param_2))) {
    param_2 = *(float *)(lVar2 + 0x1324);
  }
  if (param_1 != 0) {
    lVar7 = param_1;
  }
  FUN_140090c62(lVar7,param_2,0);
  return;
}

