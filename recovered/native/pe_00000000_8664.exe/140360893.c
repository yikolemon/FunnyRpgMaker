/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140360893 */

void FUN_140360893(int *param_1,undefined1 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  )

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = *param_1;
  if (iVar1 == param_1[1]) {
    if (iVar1 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar1 / 2 + iVar1;
    }
    iVar5 = iVar1 + 1;
    if (iVar1 + 1 < iVar4) {
      iVar5 = iVar4;
    }
    lVar2 = FUN_14030fcc8((longlong)iVar5 * 0x18);
    if (*(longlong *)(param_1 + 2) != 0) {
      FUN_1404b97c0(lVar2,*(longlong *)(param_1 + 2),(longlong)*param_1 * 0x18);
      FUN_14030fda4(*(undefined8 *)(param_1 + 2));
    }
    *(longlong *)(param_1 + 2) = lVar2;
    param_1[1] = iVar5;
    iVar1 = *param_1;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 2);
  }
  uVar6 = param_5;
  if (0 < param_3) {
    uVar6 = param_4;
    param_4 = param_5;
  }
  lVar3 = (longlong)iVar1;
  *(undefined4 *)(lVar2 + lVar3 * 0x18) = 2;
  *(undefined1 *)(lVar2 + 4 + lVar3 * 0x18) = param_2;
  *(char *)(lVar2 + 5 + lVar3 * 0x18) = (char)param_3;
  *(undefined8 *)(lVar2 + 8 + lVar3 * 0x18) = uVar6;
  *(undefined8 *)(lVar2 + 0x10 + lVar3 * 0x18) = param_4;
  *param_1 = *param_1 + 1;
  return;
}

