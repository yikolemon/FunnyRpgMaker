/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e006e */

void FUN_1400e006e(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  if (-1 < *param_1) {
    piVar4 = param_1 + 2;
    iVar3 = *param_1 + 1;
    do {
      puVar2 = *(undefined4 **)piVar4;
      if ((*(float *)(*(longlong *)(puVar2 + 4) + 0xc) - (float)puVar2[3]) *
          ((float)puVar2[2] - *(float *)(*(longlong *)(puVar2 + 6) + 8)) -
          ((float)puVar2[3] - *(float *)(*(longlong *)(puVar2 + 6) + 0xc)) *
          (*(float *)(*(longlong *)(puVar2 + 4) + 8) - (float)puVar2[2]) <= 0.0) {
        *puVar2 = 2;
        iVar1 = param_1[10];
        param_1[10] = iVar1 + 1;
        *(undefined4 **)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 8) = puVar2;
      }
      piVar4 = puVar2 + 4;
      iVar3 = iVar3 + -1;
    } while (0 < iVar3);
  }
  return;
}

