/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14010e471 */

void FUN_14010e471(longlong param_1,int param_2,int param_3)

{
  short *psVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = (int)*(short *)(*(longlong *)(param_1 + 0x18) + 0x56 + (longlong)param_2 * 0x74);
  if (param_3 != iVar5) {
    uVar3 = -(uint)(param_3 < iVar5) | 1;
    *(short *)(*(longlong *)(param_1 + 0x18) + (longlong)param_2 * 0x74 + 0x56) = (short)param_3;
    lVar6 = (longlong)(int)(iVar5 + uVar3);
    uVar2 = -(ulonglong)(param_3 < iVar5) | 1;
    do {
      psVar1 = (short *)(*(longlong *)(param_1 + 0x18) + 0x56 +
                        (longlong)*(short *)(*(longlong *)(param_1 + 0x28) + lVar6 * 2) * 0x74);
      *psVar1 = *psVar1 - (short)uVar3;
      lVar6 = lVar6 + uVar2;
    } while ((longlong)param_3 + uVar2 != lVar6);
    if (0 < *(int *)(param_1 + 0x6c)) {
      lVar6 = 0x56;
      lVar4 = 0;
      do {
        *(short *)(*(longlong *)(param_1 + 0x28) +
                  (longlong)*(short *)(*(longlong *)(param_1 + 0x18) + lVar6) * 2) = (short)lVar4;
        lVar4 = lVar4 + 1;
        lVar6 = lVar6 + 0x74;
      } while (lVar4 < *(int *)(param_1 + 0x6c));
    }
    *(undefined1 *)(param_1 + 0x241) = 1;
  }
  return;
}

