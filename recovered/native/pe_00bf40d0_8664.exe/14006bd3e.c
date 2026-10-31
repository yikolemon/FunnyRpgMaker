/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006bd3e */

void FUN_14006bd3e(uint *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  int *piVar3;
  bool bVar4;
  undefined7 extraout_var;
  int *piVar5;
  longlong lVar6;
  
  if (param_2 < *param_1) {
    piVar5 = (int *)((ulonglong)param_2 * 0x28 + *(longlong *)(param_1 + 2));
    if ((piVar5[4] & 4U) == 0) {
      piVar5[4] = piVar5[4] | 4;
      lVar2 = *(longlong *)(param_1 + 6);
      uVar1 = param_1[1];
      piVar5[6] = 0;
      piVar5[7] = 0;
      if (uVar1 != 0) {
        lVar6 = 0;
        do {
          piVar3 = *(int **)(lVar2 + lVar6 * 8);
          bVar4 = FUN_14006bdc9(piVar5,piVar3);
          if ((int)CONCAT71(extraout_var,bVar4) != 0) {
            *(int **)(piVar5 + 6) = piVar3;
            break;
          }
          lVar6 = lVar6 + 1;
        } while (uVar1 != (uint)lVar6);
      }
      uVar1 = param_1[1];
      if (uVar1 < *param_1) {
        param_1[1] = uVar1 + 1;
        *(int **)(*(longlong *)(param_1 + 6) + (ulonglong)uVar1 * 8) = piVar5;
      }
    }
  }
  return;
}

