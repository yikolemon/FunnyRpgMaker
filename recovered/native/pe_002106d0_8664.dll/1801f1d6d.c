/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f1d6d */

void FUN_1801f1d6d(longlong param_1,uint *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  lVar2 = *(longlong *)(param_2 + 2);
  if (lVar2 != 0) {
    if (*param_2 != 0) {
      lVar2 = 0;
      uVar3 = 0;
      do {
        FUN_1801c9b65(uVar1,*(undefined8 *)(*(longlong *)(param_2 + 2) + 8 + lVar2));
        *(undefined8 *)(*(longlong *)(param_2 + 2) + 8 + lVar2) = 0;
        FUN_1801c9b65(uVar1,*(undefined8 *)(*(longlong *)(param_2 + 2) + 0x10 + lVar2));
        *(undefined8 *)(*(longlong *)(param_2 + 2) + 0x10 + lVar2) = 0;
        uVar3 = uVar3 + 1;
        lVar2 = lVar2 + 0x20;
      } while (uVar3 < *param_2);
      lVar2 = *(longlong *)(param_2 + 2);
    }
    FUN_1801c9b65(uVar1,lVar2);
    param_2[2] = 0;
    param_2[3] = 0;
  }
  lVar2 = *(longlong *)(param_2 + 6);
  if (lVar2 != 0) {
    if (param_2[5] != 0) {
      uVar3 = 0;
      do {
        FUN_1801c9b65(uVar1,*(undefined8 *)(*(longlong *)(param_2 + 6) + uVar3 * 8));
        *(undefined8 *)(*(longlong *)(param_2 + 6) + uVar3 * 8) = 0;
        uVar3 = uVar3 + 1;
      } while (uVar3 < param_2[5]);
      lVar2 = *(longlong *)(param_2 + 6);
    }
    FUN_1801c9b65(uVar1,lVar2);
    param_2[6] = 0;
    param_2[7] = 0;
  }
  return;
}

