/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001b3c4 */

undefined8 FUN_18001b3c4(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  
  if (*(longlong *)(param_1 + 0x40) == *(longlong *)(param_1 + 8)) {
    uVar3 = *(int *)(param_1 + 0xe8) - 1;
    if (uVar3 != 0) {
      lVar9 = 8;
      uVar7 = 0;
      do {
        uVar8 = 1L << ((byte)uVar7 & 0x3f);
        uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x28) + (uVar7 >> 6) * 8);
        uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x60) + (uVar7 >> 6) * 8);
        bVar11 = (uVar1 & uVar8) == 0;
        if ((bVar11) || ((uVar2 & uVar8) == 0)) {
          if (((uVar1 & uVar8) != 0) != ((uVar2 & uVar8) != 0)) {
            return CONCAT71((uint7)(uVar7 >> 0xe),!bVar11);
          }
        }
        else {
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x48) + -8 + lVar9);
          lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x10) + -8 + lVar9);
          if (lVar4 != lVar6) {
            lVar4 = lVar4 - *(longlong *)(param_1 + 0xd0);
            return CONCAT71((int7)((ulonglong)lVar4 >> 8),
                            lVar6 - *(longlong *)(param_1 + 0xd0) < lVar4);
          }
          lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x48) + lVar9);
          lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x10) + lVar9);
          if (lVar6 != lVar10) {
            lVar6 = lVar6 - lVar4;
            lVar10 = lVar10 - lVar4;
            bVar11 = SBORROW8(lVar6,lVar10);
            lVar6 = lVar6 - lVar10;
            goto LAB_18001b3ee;
          }
        }
        uVar7 = uVar7 + 1;
        lVar9 = lVar9 + 0x10;
      } while (uVar3 != uVar7);
    }
    uVar5 = 0;
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0xd0);
    lVar4 = *(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 0xd0);
    bVar11 = SBORROW8(lVar6,lVar4);
    lVar6 = lVar6 - lVar4;
LAB_18001b3ee:
    uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),bVar11 != lVar6 < 0);
  }
  return uVar5;
}

