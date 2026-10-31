/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e58af */

uint FUN_1400e58af(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  lVar1 = *(longlong *)(param_1 + 0x2b0);
  uVar5 = *(uint *)(lVar1 + 0x90);
  if ((longlong)(int)uVar5 < 0) {
    uVar5 = *(uint *)(lVar1 + 0x70);
    iVar7 = *(int *)(lVar1 + 0x74);
    iVar6 = uVar5 + 1;
    if ((int)uVar5 < iVar7) {
      lVar3 = *(longlong *)(lVar1 + 0x78);
    }
    else {
      if (iVar7 == 0) {
        iVar7 = 8;
      }
      else {
        iVar7 = iVar7 / 2 + iVar7;
      }
      if (iVar7 <= iVar6) {
        iVar7 = iVar6;
      }
      lVar3 = FUN_140077ab4((longlong)iVar7 << 2);
      if (*(longlong *)(lVar1 + 0x78) != 0) {
        FUN_1401c5180(lVar3,*(longlong *)(lVar1 + 0x78),(longlong)*(int *)(lVar1 + 0x70) << 2);
        FUN_140077b90(*(undefined8 *)(lVar1 + 0x78));
      }
      *(longlong *)(lVar1 + 0x78) = lVar3;
      *(int *)(lVar1 + 0x74) = iVar7;
    }
    *(int *)(lVar1 + 0x70) = iVar6;
    puVar4 = (uint *)(lVar3 + (longlong)(int)uVar5 * 4);
    *puVar4 = 0;
    uVar2 = 0;
  }
  else {
    puVar4 = (uint *)(*(longlong *)(lVar1 + 0x78) + (longlong)(int)uVar5 * 4);
    *(int *)(lVar1 + 0x90) = (int)(*puVar4 << 0xc) >> 0xc;
    uVar2 = *puVar4;
  }
  *puVar4 = (uVar2 & 0xbff00000) + (param_2 & 0xfffff) + 0x40000000;
  return uVar2 & 0x3ff00000 | uVar5;
}

