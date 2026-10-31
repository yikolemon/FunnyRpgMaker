/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019151f */

void FUN_1019151f(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x284);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x28c);
    iVar5 = 0;
    do {
      puVar3 = *(undefined4 **)(iVar2 + iVar5);
      if (puVar3[3] == param_1) {
        uVar4 = *(undefined4 *)(param_1 + 0x4c);
        puVar3[1] = *(undefined4 *)(param_1 + 0x50);
        *puVar3 = uVar4;
        puVar3[2] = param_1 + 0x6c;
      }
      iVar5 = iVar5 + 4;
    } while (iVar1 << 2 != iVar5);
  }
  return;
}

