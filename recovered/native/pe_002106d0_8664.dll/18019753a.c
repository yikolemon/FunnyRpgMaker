/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019753a */

void FUN_18019753a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  FUN_180195db6();
  iVar2 = *(int *)(param_2 + 0x20);
  if ((longlong)iVar2 != 0) {
    lVar7 = 0;
    do {
      FUN_180195e1e();
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar2 * 8 != lVar7);
  }
  iVar2 = *(int *)(param_1 + 0x78);
  if (0 < iVar2) {
    iVar4 = 0;
    do {
      uVar5 = (ulonglong)iVar4;
      lVar7 = uVar5 * 0xa0;
      if (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x80 + lVar7) == param_2) {
        lVar7 = *(longlong *)(param_1 + 0x80) + lVar7;
        iVar4 = iVar4 + -1;
        FUN_1802a82f0(lVar7,lVar7 + 0xa0,(~uVar5 + (longlong)iVar2) * 0xa0);
        iVar2 = *(int *)(param_1 + 0x78) + -1;
        *(int *)(param_1 + 0x78) = iVar2;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  plVar1 = *(longlong **)(param_1 + 0x70);
  lVar7 = (longlong)*(int *)(param_1 + 0x68);
  plVar3 = plVar1;
  if (0 < lVar7) {
    do {
      if (*plVar3 == param_2) break;
      plVar3 = plVar3 + 1;
    } while (plVar3 < plVar1 + lVar7);
  }
  if (plVar3 < plVar1 + lVar7) {
    FUN_1802a82f0(plVar3,plVar3 + 1,
                  (((ulonglong)~((longlong)plVar3 - (longlong)plVar1) >> 3) + lVar7) * 8);
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
  }
  FUN_180196d5f(param_1);
  *(undefined8 *)(param_2 + 8) = 0;
  FUN_180196ecf(param_2);
  if (*(int *)(param_1 + 0x68) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = **(undefined8 **)(param_1 + 0x70);
  }
  FUN_180195c18(param_1,param_2,uVar6);
  return;
}

