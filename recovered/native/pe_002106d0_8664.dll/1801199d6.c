/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801199d6 */

void FUN_1801199d6(longlong param_1)

{
  short *psVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = DAT_180419160;
  lVar5 = *(longlong *)(DAT_180419160 + 0x15c0);
  if (*(longlong *)(lVar5 + -8 + (longlong)*(int *)(DAT_180419160 + 0x15b8) * 8) != param_1) {
    lVar3 = (longlong)*(int *)(DAT_180419160 + 0x15b8) + -1;
    lVar4 = lVar3;
    if ((int)*(short *)(param_1 + 0x120) < (int)lVar3) {
      lVar5 = (longlong)(int)*(short *)(param_1 + 0x120);
      lVar4 = (longlong)(int)lVar3;
      do {
        *(undefined8 *)(*(longlong *)(lVar2 + 0x15c0) + lVar5 * 8) =
             *(undefined8 *)(*(longlong *)(lVar2 + 0x15c0) + 8 + lVar5 * 8);
        psVar1 = (short *)(*(longlong *)(*(longlong *)(lVar2 + 0x15c0) + lVar5 * 8) + 0x120);
        *psVar1 = *psVar1 + -1;
        lVar5 = lVar5 + 1;
      } while (lVar4 != lVar5);
      lVar5 = *(longlong *)(lVar2 + 0x15c0);
    }
    *(longlong *)(lVar5 + lVar4 * 8) = param_1;
    *(short *)(param_1 + 0x120) = (short)lVar3;
  }
  return;
}

