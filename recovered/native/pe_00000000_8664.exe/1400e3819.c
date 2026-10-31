/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e3819 */

void FUN_1400e3819(longlong param_1,int param_2,int param_3,uint param_4,int param_5,
                  longlong param_6,char param_7)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (*(int *)(lVar1 + 0x18) == 0) {
    if (0 < param_5) {
      iVar3 = *(int *)(lVar1 + 0x1c);
      lVar2 = (longlong)(param_3 * iVar3 + param_2) * (longlong)*(int *)(lVar1 + 0x24) +
              *(longlong *)(lVar1 + 0x28);
      iVar5 = 0;
      do {
        if (0 < (int)param_4) {
          uVar4 = 0;
          do {
            *(uint *)(lVar2 + uVar4 * 4) = -(uint)(*(char *)(param_6 + uVar4) == param_7);
            uVar4 = uVar4 + 1;
          } while (param_4 != uVar4);
          iVar3 = *(int *)(lVar1 + 0x1c);
        }
        iVar5 = iVar5 + 1;
        lVar2 = lVar2 + (longlong)iVar3 * 4;
        param_6 = param_6 + (int)param_4;
      } while (iVar5 != param_5);
    }
  }
  else if ((*(int *)(lVar1 + 0x18) == 1) && (0 < param_5)) {
    iVar3 = *(int *)(lVar1 + 0x1c);
    lVar2 = (longlong)(param_3 * iVar3 + param_2) * (longlong)*(int *)(lVar1 + 0x24) +
            *(longlong *)(lVar1 + 0x28);
    iVar5 = 0;
    do {
      if (0 < (int)param_4) {
        uVar4 = 0;
        do {
          *(char *)(lVar2 + uVar4) = -(*(char *)(param_6 + uVar4) == param_7);
          uVar4 = uVar4 + 1;
        } while (param_4 != uVar4);
        iVar3 = *(int *)(lVar1 + 0x1c);
      }
      iVar5 = iVar5 + 1;
      lVar2 = lVar2 + iVar3;
      param_6 = param_6 + (int)param_4;
    } while (iVar5 != param_5);
  }
  return;
}

