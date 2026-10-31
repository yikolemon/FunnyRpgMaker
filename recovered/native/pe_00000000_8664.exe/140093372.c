/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140093372 */

void FUN_140093372(float param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  lVar2 = DAT_140f2a910;
  lVar1 = *(longlong *)(DAT_140f2a910 + 0x1608);
  iVar3 = *(int *)(lVar1 + 0x248);
  if (iVar3 == *(int *)(lVar1 + 0x24c)) {
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
    lVar4 = FUN_140077ab4((longlong)iVar6 << 2);
    if (*(longlong *)(lVar1 + 0x250) != 0) {
      FUN_1401c5180(lVar4,*(longlong *)(lVar1 + 0x250),(longlong)*(int *)(lVar1 + 0x248) << 2);
      FUN_140077b90(*(undefined8 *)(lVar1 + 0x250));
    }
    *(longlong *)(lVar1 + 0x250) = lVar4;
    *(int *)(lVar1 + 0x24c) = iVar6;
    iVar3 = *(int *)(lVar1 + 0x248);
  }
  else {
    lVar4 = *(longlong *)(lVar1 + 0x250);
  }
  *(undefined4 *)(lVar4 + (longlong)iVar3 * 4) = *(undefined4 *)(lVar1 + 0x23c);
  *(int *)(lVar1 + 0x248) = *(int *)(lVar1 + 0x248) + 1;
  if ((param_1 == 0.0) && (!NAN(param_1))) {
    param_1 = *(float *)(lVar1 + 0x240);
  }
  *(float *)(lVar1 + 0x23c) = param_1;
  *(byte *)(lVar2 + 0x1fa8) = *(byte *)(lVar2 + 0x1fa8) & 0xfe;
  return;
}

