/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10065f9e */

void FUN_10065f9e(int param_1,int param_2,uint param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_3 - 1;
  iVar4 = iVar5 >> 1;
  iVar1 = param_2;
  while (iVar1 < iVar4) {
    iVar2 = iVar1 * 2 + 2;
    if (*(uint *)(param_1 + iVar2 * 0xc) < *(uint *)(param_1 + -0xc + iVar2 * 0xc)) {
      puVar3 = (undefined8 *)(param_1 + iVar2 * 0xc + -0xc);
      iVar2 = iVar1 * 2 + 1;
    }
    else {
      puVar3 = (undefined8 *)(param_1 + iVar2 * 0xc);
    }
    *(undefined4 *)(param_1 + 8 + iVar1 * 0xc) = *(undefined4 *)(puVar3 + 1);
    *(undefined8 *)(param_1 + iVar1 * 0xc) = *puVar3;
    iVar1 = iVar2;
  }
  if (((param_3 & 1) == 0) && (iVar1 == iVar4)) {
    *(undefined4 *)(param_1 + 8 + iVar4 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar5 * 0xc);
    *(undefined8 *)(param_1 + iVar4 * 0xc) = *(undefined8 *)(param_1 + iVar5 * 0xc);
    iVar1 = iVar5;
  }
  while ((param_2 < iVar1 && (iVar5 = iVar1 + -1 >> 1, *(uint *)(param_1 + iVar5 * 0xc) < *param_4))
        ) {
    puVar3 = (undefined8 *)(param_1 + iVar5 * 0xc);
    *(undefined4 *)(param_1 + 8 + iVar1 * 0xc) = *(undefined4 *)(puVar3 + 1);
    *(undefined8 *)(param_1 + iVar1 * 0xc) = *puVar3;
    iVar1 = iVar5;
  }
  *(uint *)(param_1 + 8 + iVar1 * 0xc) = param_4[2];
  *(undefined8 *)(param_1 + iVar1 * 0xc) = *(undefined8 *)param_4;
  return;
}

