/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017a384 */

void FUN_18017a384(longlong param_1,ushort param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  
  if (-1 < *(short *)(param_1 + 0x834 + (ulonglong)param_2 * 4)) {
    FUN_18017a384(param_1);
  }
  if (*(int *)(param_1 + 0x8860) < *(int *)(param_1 + 0x8858)) {
    lVar4 = (longlong)*(int *)(param_1 + 0x885c) + (longlong)*(int *)(param_1 + 0x8860);
    lVar1 = *(longlong *)(param_1 + 8);
    iVar3 = (int)lVar4;
    iVar5 = iVar3 + 3;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x18) + (longlong)(iVar5 >> 2)) = 1;
    lVar2 = *(longlong *)(param_1 + 0x8838);
    uVar6 = (ulonglong)*(byte *)(param_1 + 0x837 + (ulonglong)param_2 * 4);
    if (0x80 < *(byte *)(lVar2 + 3 + uVar6 * 4)) {
      *(undefined1 *)(lVar1 + lVar4) = *(undefined1 *)(lVar2 + 2 + uVar6 * 4);
      *(undefined1 *)(lVar1 + 1 + lVar4) = *(undefined1 *)(lVar2 + 1 + uVar6 * 4);
      *(undefined1 *)(lVar1 + 2 + lVar4) = *(undefined1 *)(lVar2 + uVar6 * 4);
      *(undefined1 *)(lVar1 + 3 + lVar4) = *(undefined1 *)(lVar2 + 3 + uVar6 * 4);
    }
    iVar3 = *(int *)(param_1 + 0x885c) + 4;
    *(int *)(param_1 + 0x885c) = iVar3;
    if (*(int *)(param_1 + 0x8854) <= iVar3) {
      *(undefined4 *)(param_1 + 0x885c) = *(undefined4 *)(param_1 + 0x884c);
      iVar3 = *(int *)(param_1 + 0x8860) + *(int *)(param_1 + 0x8844);
      *(int *)(param_1 + 0x8860) = iVar3;
      if (*(int *)(param_1 + 0x8858) <= iVar3) {
        iVar3 = *(int *)(param_1 + 0x8840);
        do {
          if (iVar3 < 1) {
            return;
          }
          iVar5 = *(int *)(param_1 + 0x8864) << ((byte)iVar3 & 0x1f);
          *(int *)(param_1 + 0x8844) = iVar5;
          iVar5 = (iVar5 >> 1) + *(int *)(param_1 + 0x8850);
          *(int *)(param_1 + 0x8860) = iVar5;
          iVar3 = iVar3 + -1;
          *(int *)(param_1 + 0x8840) = iVar3;
        } while (*(int *)(param_1 + 0x8858) <= iVar5);
      }
    }
  }
  return;
}

