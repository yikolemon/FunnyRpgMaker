/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a2934 */

void FUN_1801a2934(uint *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  
  uVar6 = *param_1;
  if (uVar6 == 0) {
    if (param_1[1] == 0) {
      lVar8 = FUN_1800fe7f8(0x180);
      if (*(longlong *)(param_1 + 2) != 0) {
        FUN_1802a82f0(lVar8,*(longlong *)(param_1 + 2),(longlong)(int)*param_1 * 0x30);
        FUN_1800fe8d4(*(undefined8 *)(param_1 + 2));
      }
      *(longlong *)(param_1 + 2) = lVar8;
      param_1[1] = 8;
      lVar9 = (longlong)(int)*param_1;
    }
    else {
      lVar8 = *(longlong *)(param_1 + 2);
      lVar9 = 0;
    }
    puVar7 = (undefined8 *)(lVar9 * 0x30 + lVar8);
  }
  else {
    if (uVar6 == param_1[1]) {
      iVar10 = 1;
      if (1 < (int)uVar6 / 2) {
        iVar10 = (int)uVar6 / 2;
      }
      puVar7 = (undefined8 *)FUN_1800fe7f8((longlong)(int)(iVar10 + uVar6) * 0x30);
      if (*(longlong *)(param_1 + 2) != 0) {
        FUN_1802a82f0(puVar7,*(longlong *)(param_1 + 2),(longlong)(int)*param_1 * 0x30);
        FUN_1800fe8d4(*(undefined8 *)(param_1 + 2));
      }
      *(undefined8 **)(param_1 + 2) = puVar7;
      param_1[1] = iVar10 + uVar6;
      uVar6 = *param_1;
    }
    else {
      puVar7 = *(undefined8 **)(param_1 + 2);
    }
    if (0 < (int)uVar6) {
      FUN_1802a82f0(puVar7 + 6,puVar7,(ulonglong)uVar6 * 0x30);
      puVar7 = *(undefined8 **)(param_1 + 2);
    }
  }
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[5];
  puVar7[4] = param_2[4];
  puVar7[5] = uVar5;
  puVar7[2] = uVar3;
  puVar7[3] = uVar4;
  *puVar7 = uVar1;
  puVar7[1] = uVar2;
  *param_1 = *param_1 + 1;
  return;
}

