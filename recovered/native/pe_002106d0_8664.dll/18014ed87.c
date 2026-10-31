/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18014ed87 */

void FUN_18014ed87(int *param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1[1] < 0) {
    uVar2 = FUN_1800fe7f8(0);
    if (*(longlong *)(param_1 + 2) != 0) {
      FUN_1802a82f0(uVar2,*(longlong *)(param_1 + 2),(longlong)*param_1 * 0x18);
      FUN_1800fe8d4(*(undefined8 *)(param_1 + 2));
    }
    *(undefined8 *)(param_1 + 2) = uVar2;
    param_1[0] = 0;
    param_1[1] = 0;
  }
  else {
    *param_1 = 0;
    if (param_1[1] != 0) {
      lVar3 = *(longlong *)(param_1 + 2);
      lVar4 = 0;
      goto LAB_18014ee23;
    }
  }
  lVar3 = FUN_1800fe7f8(0xc0);
  if (*(longlong *)(param_1 + 2) != 0) {
    FUN_1802a82f0(lVar3,*(longlong *)(param_1 + 2),(longlong)*param_1 * 0x18);
    FUN_1800fe8d4(*(undefined8 *)(param_1 + 2));
  }
  *(longlong *)(param_1 + 2) = lVar3;
  param_1[1] = 8;
  lVar4 = (longlong)*param_1;
LAB_18014ee23:
  *(undefined4 *)(lVar3 + lVar4 * 0x18) = 1;
  *(undefined1 *)(lVar3 + 4 + lVar4 * 0x18) = param_2;
  *(undefined1 *)(lVar3 + 5 + lVar4 * 0x18) = 0;
  puVar1 = (undefined4 *)(lVar3 + 8 + lVar4 * 0x18);
  *puVar1 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  *param_1 = *param_1 + 1;
  return;
}

