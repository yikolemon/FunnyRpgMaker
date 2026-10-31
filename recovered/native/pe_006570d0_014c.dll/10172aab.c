/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10172aab */

uint __fastcall FUN_10172aab(int param_1,int param_2)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = (ushort)*(uint *)(param_1 + 0x10);
  uVar2 = uVar2 << 8 | uVar2 >> 8;
  uVar3 = (uVar2 & 0xf0f) << 4 | (uVar2 & 0xf0f0) >> 4;
  uVar3 = (uVar3 >> 2 & 0x3333) + (uVar3 & 0x3333) * 4;
  uVar3 = (uVar3 >> 1 & 0x5555) + (uVar3 & 0x5555) * 2;
  iVar1 = 0;
  do {
    iVar5 = iVar1;
    iVar1 = iVar5 + 1;
  } while (*(int *)(param_2 + 0x448 + iVar5 * 4) <= (int)uVar3);
  uVar4 = 0xffffffff;
  if (((iVar5 + 10U < 0x10) &&
      (iVar6 = (uint)*(ushort *)(param_2 + 0x476 + iVar1 * 2) +
               ((uVar3 >> (7U - (char)iVar1 & 0x1f)) -
               (uint)*(ushort *)(param_2 + 0x412 + iVar1 * 2)), iVar6 < 0x120)) &&
     (*(byte *)(param_2 + 0x484 + iVar6) - 9 == iVar1)) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) >> ((char)iVar5 + 10U & 0x1f);
    *(int *)(param_1 + 8) = (*(int *)(param_1 + 8) - iVar1) + -9;
    uVar4 = (uint)*(ushort *)(param_2 + 0x5a4 + iVar6 * 2);
  }
  return uVar4;
}

