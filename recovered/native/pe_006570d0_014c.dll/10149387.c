/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10149387 */

void FUN_10149387(void)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  
  iVar6 = DAT_1039d74c;
  iVar3 = *(int *)(DAT_1039d74c + 0x14cc);
  FUN_101151af(0);
  uVar8 = *(int *)(iVar3 + 0x1cc) - 1;
  *(uint *)(iVar3 + 0x1cc) = uVar8;
  if ((*(uint *)(iVar3 + 0x1d0) >> (uVar8 & 0x1f) & 1) != 0) {
    iVar4 = *(int *)(iVar6 + 0x1fd4);
    iVar5 = *(int *)(iVar6 + 0x1fdc);
    iVar1 = iVar5 + iVar4 * 0x28;
    iVar9 = iVar1 + -0x28;
    if (((((*(byte *)(iVar1 + -0x22) & 2) != 0) && (*(char *)(iVar6 + 0x2043) == '\x01')) &&
        (*(int *)(iVar6 + 0x20e8) == 0)) && (*(int *)(iVar6 + 0x2048) == iVar3)) {
      cVar7 = FUN_101172b5(iVar9);
      if (cVar7 != '\0') {
        FUN_101172da(iVar6 + 0x2120,iVar9);
      }
    }
    fVar2 = *(float *)(iVar5 + iVar4 * 0x28 + -0xc);
    if (((fVar2 != DAT_102b89b4) || (NAN(fVar2) || NAN(DAT_102b89b4))) &&
       (*(float *)(iVar3 + 0x290) <= *(float *)(iVar3 + 0x148))) {
      FUN_101491b5(iVar9);
    }
    *(int *)(iVar6 + 0x1fd4) = *(int *)(iVar6 + 0x1fd4) + -1;
    uVar8 = ~(1 << ((byte)uVar8 & 0x1f));
    *(ulonglong *)(iVar3 + 0x1d0) = CONCAT44(uVar8,uVar8) & *(ulonglong *)(iVar3 + 0x1d0);
  }
  FUN_10113568();
  return;
}

