/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018d4f4 */

void __fastcall FUN_1018d4f4(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (-1 < *param_1) {
    piVar4 = param_1 + 1;
    iVar3 = *param_1 + 1;
    do {
      puVar1 = (undefined4 *)*piVar4;
      if ((*(float *)(puVar1[4] + 0xc) - (float)puVar1[3]) *
          ((float)puVar1[2] - *(float *)(puVar1[5] + 8)) -
          ((float)puVar1[3] - *(float *)(puVar1[5] + 0xc)) *
          (*(float *)(puVar1[4] + 8) - (float)puVar1[2]) <= 0.0) {
        *puVar1 = 2;
        iVar2 = param_1[5];
        param_1[5] = iVar2 + 1;
        *(undefined4 **)(param_1[4] + iVar2 * 4) = puVar1;
      }
      piVar4 = puVar1 + 4;
      iVar3 = iVar3 + -1;
    } while (0 < iVar3);
  }
  return;
}

