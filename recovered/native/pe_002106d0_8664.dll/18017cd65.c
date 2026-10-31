/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017cd65 */

void FUN_18017cd65(longlong param_1,longlong param_2)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  sbyte sVar8;
  longlong lVar9;
  
  lVar9 = 0;
  do {
    uVar4 = (ulonglong)*(byte *)(param_2 + lVar9);
    *(undefined2 *)(param_1 + lVar9 * 2) = 0;
    if (uVar4 != 0xff) {
      bVar2 = *(byte *)(param_2 + 0x400 + uVar4);
      if ((bVar2 & 0xf) != 0) {
        bVar3 = *(byte *)(param_2 + 0x500 + uVar4);
        uVar1 = (bVar2 & 0xf) + (ushort)bVar3;
        if (uVar1 < 10) {
          uVar5 = (int)lVar9 << (bVar3 & 0x1f);
          sVar8 = (sbyte)(bVar2 & 0xf);
          uVar6 = -1 << sVar8 | 1;
          if ((uVar5 & 0x100) != 0) {
            uVar6 = 0;
          }
          iVar7 = uVar6 + ((uVar5 & 0x1ff) >> (9U - sVar8 & 0x1f));
          if ((char)iVar7 == iVar7) {
            *(ushort *)(param_1 + lVar9 * 2) = (short)iVar7 * 0x100 | bVar2 & 0xfff0 | uVar1;
          }
        }
      }
    }
    lVar9 = lVar9 + 1;
  } while (lVar9 != 0x200);
  return;
}

