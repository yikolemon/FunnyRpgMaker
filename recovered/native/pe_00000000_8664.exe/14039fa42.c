/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14039fa42 */

void FUN_14039fa42(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (lVar2 != 0) {
    plVar5 = *(longlong **)(lVar2 + 0x60);
    iVar3 = *(int *)(lVar2 + 0x58);
    plVar1 = plVar5 + iVar3;
    if (0 < (longlong)iVar3) {
      do {
        if (*plVar5 == param_1) break;
        plVar5 = plVar5 + 1;
      } while (plVar5 < plVar1);
    }
    if (plVar5 < plVar1) {
      if (plVar5 < plVar1 + -1) {
        *plVar5 = plVar1[-1];
        iVar3 = *(int *)(lVar2 + 0x58);
      }
      *(int *)(lVar2 + 0x58) = iVar3 + -1;
    }
  }
  *(longlong *)(param_1 + 0x38) = param_2;
  if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + 0x58);
    if (iVar3 == *(int *)(param_2 + 0x5c)) {
      if (iVar3 == 0) {
        iVar4 = 8;
      }
      else {
        iVar4 = iVar3 / 2 + iVar3;
      }
      iVar6 = iVar3 + 1;
      if (iVar3 + 1 < iVar4) {
        iVar6 = iVar4;
      }
      lVar2 = FUN_14030fcc8((longlong)iVar6 << 3);
      if (*(longlong *)(param_2 + 0x60) != 0) {
        FUN_1404b97c0(lVar2,*(longlong *)(param_2 + 0x60),(longlong)*(int *)(param_2 + 0x58) << 3);
        FUN_14030fda4(*(undefined8 *)(param_2 + 0x60));
      }
      *(longlong *)(param_2 + 0x60) = lVar2;
      *(int *)(param_2 + 0x5c) = iVar6;
      iVar3 = *(int *)(param_2 + 0x58);
    }
    else {
      lVar2 = *(longlong *)(param_2 + 0x60);
    }
    *(longlong *)(lVar2 + (longlong)iVar3 * 8) = param_1;
    *(int *)(param_2 + 0x58) = *(int *)(param_2 + 0x58) + 1;
  }
  return;
}

