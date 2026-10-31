/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180194c8c */

void FUN_180194c8c(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int *piVar6;
  
  iVar5 = param_1[6];
  if (iVar5 == 0) {
    FUN_180194d5e(param_1);
    if (-1 < *param_1) {
      piVar6 = param_1 + 2;
      iVar5 = *param_1 + 1;
      do {
        puVar1 = *(undefined4 **)piVar6;
        *puVar1 = 0;
        piVar6 = puVar1 + 4;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    param_1[10] = 0;
    FUN_180194afa(param_1);
    FUN_180194b74(param_1);
    iVar5 = param_1[6];
    if (iVar5 == 0) {
      **(undefined8 **)(param_1 + 4) = *(undefined8 *)(param_1 + 2);
      iVar5 = 1;
    }
  }
  param_1[6] = iVar5 + -1;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 4) + -8 + (longlong)iVar5 * 8);
  *param_2 = *(undefined4 *)(*(longlong *)(lVar2 + 0x18) + 4);
  param_2[1] = *(undefined4 *)(lVar2 + 4);
  param_2[2] = *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 4);
  lVar3 = *(longlong *)(lVar2 + 0x18);
  *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x18) = lVar3;
  uVar4 = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)(lVar3 + 0x10) = uVar4;
  if (lVar2 == *(longlong *)(param_1 + 2)) {
    *(undefined8 *)(param_1 + 2) = uVar4;
  }
  FUN_180194da0(param_1,*(undefined8 *)(lVar2 + 0x18));
  FUN_180194da0(param_1,*(undefined8 *)(lVar2 + 0x10));
  *param_1 = *param_1 + -1;
  return;
}

