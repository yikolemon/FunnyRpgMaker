/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180107130 */

void FUN_180107130(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *(undefined1 *)(param_1 + 0x494) = 0;
  lVar3 = *(longlong *)(param_1 + 800);
  iVar1 = *(int *)(param_1 + 0x48c);
  if (*(int *)(lVar3 + 0x14) < iVar1) {
    uVar2 = FUN_1800fe7f8((longlong)iVar1 * 2);
    if (*(longlong *)(lVar3 + 0x18) != 0) {
      FUN_1802a82f0(uVar2,*(longlong *)(lVar3 + 0x18),(longlong)*(int *)(lVar3 + 0x10) * 2);
      FUN_1800fe8d4(*(undefined8 *)(lVar3 + 0x18));
    }
    *(undefined8 *)(lVar3 + 0x18) = uVar2;
    *(int *)(lVar3 + 0x14) = iVar1;
    lVar3 = *(longlong *)(param_1 + 800);
  }
  iVar1 = *(int *)(param_1 + 0x490);
  if (*(int *)(lVar3 + 0x24) < iVar1) {
    uVar2 = FUN_1800fe7f8((longlong)iVar1 * 0x14);
    if (*(longlong *)(lVar3 + 0x28) != 0) {
      FUN_1802a82f0(uVar2,*(longlong *)(lVar3 + 0x28),(longlong)*(int *)(lVar3 + 0x20) * 0x14);
      FUN_1800fe8d4(*(undefined8 *)(lVar3 + 0x28));
    }
    *(undefined8 *)(lVar3 + 0x28) = uVar2;
    *(int *)(lVar3 + 0x24) = iVar1;
  }
  *(undefined8 *)(param_1 + 0x48c) = 0;
  return;
}

