/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012bbdc */

void FUN_18012bbdc(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *param_1;
  if (uVar1 == 0) {
    if (param_1[1] == 0) {
      lVar3 = FUN_1800fe7f8(0x60);
      if (*(longlong *)(param_1 + 2) != 0) {
        FUN_1802a82f0(lVar3,*(longlong *)(param_1 + 2),(longlong)(int)*param_1 * 0xc);
        FUN_1800fe8d4(*(undefined8 *)(param_1 + 2));
      }
      *(longlong *)(param_1 + 2) = lVar3;
      param_1[1] = 8;
      lVar4 = (longlong)(int)*param_1;
    }
    else {
      lVar3 = *(longlong *)(param_1 + 2);
      lVar4 = 0;
    }
    puVar2 = (undefined8 *)(lVar3 + lVar4 * 0xc);
  }
  else {
    if (uVar1 == param_1[1]) {
      iVar5 = 1;
      if (1 < (int)uVar1 / 2) {
        iVar5 = (int)uVar1 / 2;
      }
      puVar2 = (undefined8 *)FUN_1800fe7f8((longlong)(int)(iVar5 + uVar1) * 0xc);
      if (*(longlong *)(param_1 + 2) != 0) {
        FUN_1802a82f0(puVar2,*(longlong *)(param_1 + 2),(longlong)(int)*param_1 * 0xc);
        FUN_1800fe8d4(*(undefined8 *)(param_1 + 2));
      }
      *(undefined8 **)(param_1 + 2) = puVar2;
      param_1[1] = iVar5 + uVar1;
      uVar1 = *param_1;
    }
    else {
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    if (0 < (int)uVar1) {
      FUN_1802a82f0((longlong)puVar2 + 0xc,puVar2,(ulonglong)uVar1 * 0xc);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
  }
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_2 + 1);
  *puVar2 = *param_2;
  *param_1 = *param_1 + 1;
  return;
}

