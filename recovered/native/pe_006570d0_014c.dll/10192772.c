/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10192772 */

uint __fastcall FUN_10192772(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x290);
  uVar5 = *(uint *)(iVar1 + 0x80);
  if ((int)uVar5 < 0) {
    uVar5 = *(uint *)(iVar1 + 0x68);
    iVar6 = *(int *)(iVar1 + 0x6c);
    if ((int)uVar5 < iVar6) {
      iVar2 = *(int *)(iVar1 + 0x70);
    }
    else {
      if (iVar6 == 0) {
        iVar6 = 8;
      }
      else {
        iVar6 = iVar6 / 2 + iVar6;
      }
      if (iVar6 <= (int)(uVar5 + 1)) {
        iVar6 = uVar5 + 1;
      }
      iVar2 = FUN_100fa1fa(iVar6 * 4);
      if (*(int *)(iVar1 + 0x70) != 0) {
        FUN_1025b2d0(iVar2,*(int *)(iVar1 + 0x70),*(int *)(iVar1 + 0x68) << 2);
        FUN_100fa2cb(*(undefined4 *)(iVar1 + 0x70));
      }
      *(int *)(iVar1 + 0x70) = iVar2;
      *(int *)(iVar1 + 0x6c) = iVar6;
    }
    *(uint *)(iVar1 + 0x68) = uVar5 + 1;
    puVar4 = (uint *)(iVar2 + uVar5 * 4);
    *puVar4 = 0;
    uVar3 = 0;
  }
  else {
    puVar4 = (uint *)(*(int *)(iVar1 + 0x70) + uVar5 * 4);
    *(int *)(iVar1 + 0x80) = (int)(*puVar4 << 0xc) >> 0xc;
    uVar3 = *puVar4;
  }
  *puVar4 = (uVar3 & 0xbff00000) + (param_2 & 0xfffff) + 0x40000000;
  return uVar3 & 0x3ff00000 | uVar5;
}

