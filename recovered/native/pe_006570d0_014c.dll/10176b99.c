/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10176b99 */

void __fastcall FUN_10176b99(int param_1,int param_2)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  sbyte sVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  
  iVar8 = 0;
  do {
    uVar4 = (uint)*(byte *)(param_2 + iVar8);
    *(undefined2 *)(param_1 + iVar8 * 2) = 0;
    if (uVar4 != 0xff) {
      bVar2 = *(byte *)(param_2 + 0x400 + uVar4);
      uVar7 = bVar2 & 0xf;
      if ((bVar2 & 0xf) != 0) {
        bVar3 = *(byte *)(param_2 + 0x500 + uVar4);
        uVar1 = uVar7 + bVar3;
        if (uVar1 < 10) {
          uVar9 = iVar8 << (bVar3 & 0x1f);
          sVar6 = (sbyte)uVar7;
          uVar4 = -1 << sVar6 | 1;
          if ((uVar9 & 0x100) != 0) {
            uVar4 = 0;
          }
          iVar5 = uVar4 + ((uVar9 & 0x1ff) >> (9U - sVar6 & 0x1f));
          if ((char)iVar5 == iVar5) {
            *(ushort *)(param_1 + iVar8 * 2) = (short)iVar5 * 0x100 | bVar2 & 0xfff0 | uVar1;
          }
        }
      }
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0x200);
  return;
}

