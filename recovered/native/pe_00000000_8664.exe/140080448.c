/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140080448 */

void FUN_140080448(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *(undefined1 *)(param_1 + 0x494) = 0;
  lVar3 = *(longlong *)(param_1 + 800);
  iVar1 = *(int *)(param_1 + 0x48c);
  if (*(int *)(lVar3 + 0x14) < iVar1) {
    uVar2 = FUN_140077ab4((longlong)iVar1 * 2);
    if (*(longlong *)(lVar3 + 0x18) != 0) {
      FUN_1401c5180(uVar2,*(longlong *)(lVar3 + 0x18),(longlong)*(int *)(lVar3 + 0x10) * 2);
      FUN_140077b90(*(undefined8 *)(lVar3 + 0x18));
    }
    *(undefined8 *)(lVar3 + 0x18) = uVar2;
    *(int *)(lVar3 + 0x14) = iVar1;
    lVar3 = *(longlong *)(param_1 + 800);
  }
  iVar1 = *(int *)(param_1 + 0x490);
  if (*(int *)(lVar3 + 0x24) < iVar1) {
    uVar2 = FUN_140077ab4((longlong)iVar1 * 0x14);
    if (*(longlong *)(lVar3 + 0x28) != 0) {
      FUN_1401c5180(uVar2,*(longlong *)(lVar3 + 0x28),(longlong)*(int *)(lVar3 + 0x20) * 0x14);
      FUN_140077b90(*(undefined8 *)(lVar3 + 0x28));
    }
    *(undefined8 *)(lVar3 + 0x28) = uVar2;
    *(int *)(lVar3 + 0x24) = iVar1;
  }
  *(undefined8 *)(param_1 + 0x48c) = 0;
  return;
}

