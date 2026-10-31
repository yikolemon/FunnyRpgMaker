/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c93b9 */

void FUN_1801c93b9(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  
  lVar1 = FUN_1801c68b0();
  iVar3 = *(int *)(lVar1 + 0x84);
  if (iVar3 < param_2) {
    if (iVar3 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar3 / 2 + iVar3;
    }
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    puVar2 = (undefined8 *)FUN_1800fe7f8((longlong)iVar3 * 0x48);
    if (*(longlong *)(lVar1 + 0x88) != 0) {
      FUN_1802a82f0(puVar2,*(longlong *)(lVar1 + 0x88),(longlong)*(int *)(lVar1 + 0x80) * 0x48);
      FUN_1800fe8d4(*(undefined8 *)(lVar1 + 0x88));
    }
    *(undefined8 **)(lVar1 + 0x88) = puVar2;
    *(int *)(lVar1 + 0x84) = iVar3;
  }
  else {
    puVar2 = *(undefined8 **)(lVar1 + 0x88);
  }
  *(int *)(lVar1 + 0x80) = param_2;
  for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}

