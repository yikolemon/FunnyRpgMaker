/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001bcde */

longlong FUN_14001bcde(longlong param_1,longlong param_2,longlong param_3,uint param_4,uint param_5,
                      uint param_6)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  longlong lVar7;
  
  if (param_6 - 1 < (param_6 ^ param_6 - 1)) {
    uVar1 = 0;
    if (param_6 != 0) {
      for (; (param_6 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
    if (uVar1 < 4) {
      uVar3 = (ulonglong)param_5;
      switch(uVar1) {
      case 0:
        lVar2 = (longlong)*(char *)(param_2 + uVar3);
        lVar7 = (param_3 - param_2) + lVar2;
        cVar4 = (char)lVar7;
        *(char *)(param_2 + uVar3) = cVar4;
        if (cVar4 != lVar7) {
          **(undefined4 **)(param_1 + 0x28) = 3;
        }
        break;
      case 1:
        lVar2 = (longlong)*(short *)(param_2 + uVar3);
        lVar7 = (param_3 - param_2) + lVar2;
        sVar5 = (short)lVar7;
        *(short *)(param_2 + uVar3) = sVar5;
        if (sVar5 != lVar7) {
          **(undefined4 **)(param_1 + 0x28) = 2;
        }
        break;
      case 2:
        lVar2 = (longlong)*(int *)(param_2 + uVar3);
        lVar7 = (param_3 - param_2) + lVar2;
        iVar6 = (int)lVar7;
        *(int *)(param_2 + uVar3) = iVar6;
        if (iVar6 != lVar7) {
          **(undefined4 **)(param_1 + 0x28) = 0;
        }
        break;
      case 3:
        lVar2 = *(longlong *)(param_2 + uVar3);
        *(longlong *)(param_2 + uVar3) = (param_3 - param_2) + lVar2;
      }
      goto LAB_14001bd3f;
    }
  }
  lVar2 = 0;
LAB_14001bd3f:
  return param_3 + (ulonglong)param_4 + lVar2;
}

