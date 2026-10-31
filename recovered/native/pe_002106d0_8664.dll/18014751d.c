/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18014751d */

void FUN_18014751d(longlong param_1,longlong param_2,uint param_3,longlong param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  
  uVar2 = FUN_1800fed00(param_3,param_5);
  if ((int)uVar2 < 1) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    do {
      if (*(char *)(param_2 + uVar5) != *(char *)(param_4 + uVar5)) goto LAB_180147569;
      uVar5 = uVar5 + 1;
    } while (uVar2 != uVar5);
    uVar5 = (ulonglong)uVar2;
  }
LAB_180147569:
  uVar2 = (uint)uVar5;
  if (param_5 != uVar2 || param_3 != uVar2) {
    lVar3 = 0;
    do {
      lVar6 = lVar3;
      if ((lVar6 + (int)param_3 <= (longlong)(int)uVar2) ||
         ((int)param_5 + lVar6 <= (longlong)(int)uVar2)) break;
      lVar3 = lVar6 + -1;
    } while (*(char *)((int)param_3 + param_2 + -1 + lVar6) ==
             *(char *)((int)param_5 + param_4 + -1 + lVar6));
    iVar1 = (int)lVar6;
    iVar7 = ~uVar2 + param_3 + iVar1;
    if ((-1 < (int)(iVar1 + param_5 + ~uVar2)) || (-1 < iVar7)) {
      lVar3 = FUN_18015652e(*(longlong *)(param_1 + 8) + 0x20,uVar5 & 0xffffffff,
                            (param_3 - uVar2) + iVar1,(param_5 - uVar2) + iVar1);
      if ((lVar3 != 0) && (-1 < iVar7)) {
        uVar4 = 0;
        do {
          *(undefined1 *)(lVar3 + uVar4) = *(undefined1 *)(param_2 + (uVar5 & 0xffffffff) + uVar4);
          uVar4 = uVar4 + 1;
        } while ((param_3 - uVar2) + iVar1 != uVar4);
      }
    }
  }
  return;
}

