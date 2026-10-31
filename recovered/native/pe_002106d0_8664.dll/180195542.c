/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180195542 */

void FUN_180195542(int *param_1,int *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  if (*param_1 == param_3) {
    return;
  }
  uVar1 = *(undefined8 *)(param_2 + 2);
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 4) + (longlong)*param_1 * 0x20);
  *puVar6 = *(undefined8 *)param_2;
  puVar6[1] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 6);
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 4) + 0x10 + (longlong)*param_1 * 0x20);
  *puVar6 = *(undefined8 *)(param_2 + 4);
  puVar6[1] = uVar1;
  *param_1 = param_3;
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 4) + (longlong)param_3 * 0x20);
  uVar1 = puVar6[1];
  *(undefined8 *)param_2 = *puVar6;
  *(undefined8 *)(param_2 + 2) = uVar1;
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 4) + 0x10 + (longlong)param_3 * 0x20);
  uVar1 = puVar6[1];
  *(undefined8 *)(param_2 + 4) = *puVar6;
  *(undefined8 *)(param_2 + 6) = uVar1;
  *(longlong *)(param_2 + 0x12) = (longlong)param_2[4] * 2 + *(longlong *)(param_2 + 6);
  if ((longlong)*param_2 != 0) {
    lVar5 = (longlong)*param_2 * 0x48 + *(longlong *)(param_2 + 2);
    puVar6 = (undefined8 *)(lVar5 + -0x48);
    if (puVar6 != (undefined8 *)0x0) {
      if (*(int *)(lVar5 + -0x20) == 0) {
        *(int *)(lVar5 + -0x28) = param_2[0x20];
        uVar1 = *(undefined8 *)(param_2 + 0x18);
        uVar2 = *(undefined8 *)(param_2 + 0x1a);
        uVar3 = *(undefined8 *)(param_2 + 0x1e);
        *(undefined8 *)(lVar5 + -0x38) = *(undefined8 *)(param_2 + 0x1c);
        *(undefined8 *)(lVar5 + -0x30) = uVar3;
        *puVar6 = uVar1;
        *(undefined8 *)(lVar5 + -0x40) = uVar2;
      }
      else {
        iVar4 = memcmp(puVar6,param_2 + 0x18,0x24);
        if (iVar4 != 0) goto LAB_1801955e6;
      }
      return;
    }
  }
LAB_1801955e6:
  FUN_18018f126(param_2);
  return;
}

