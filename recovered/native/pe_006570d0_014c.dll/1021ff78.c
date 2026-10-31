/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021ff78 */

undefined4 __fastcall FUN_1021ff78(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = param_2[1];
  uVar4 = 6;
  if ((iVar1 == *(int *)(param_1 + 4)) && (iVar2 = *param_2, iVar2 == *(int *)(param_1 + 8))) {
    if (0 < iVar2) {
      iVar5 = param_2[3];
      iVar7 = 0;
      do {
        if (0 < iVar1) {
          iVar6 = 0;
          do {
            uVar3 = FUN_10220776();
            *(undefined1 *)(iVar5 + iVar6) = uVar3;
            iVar6 = iVar6 + 1;
          } while (iVar1 != iVar6);
        }
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + iVar1;
      } while (iVar7 != iVar2);
    }
    uVar4 = 0;
  }
  return uVar4;
}

