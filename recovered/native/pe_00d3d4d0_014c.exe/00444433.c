/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00444433 */

void __fastcall FUN_00444433(int *param_1,uint param_2,uint param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1[1] + param_4 * 8) - *(int *)(*param_1 + param_4 * 8);
  if (iVar2 != 0) {
    if (param_2 < param_4) {
      do {
        piVar1 = (int *)(param_1[1] + param_2 * 8);
        *piVar1 = *piVar1 + iVar2;
        param_2 = param_2 + 1;
      } while (param_4 != param_2);
    }
    while (param_4 = param_4 + 1, param_4 <= param_3) {
      piVar1 = (int *)(param_1[1] + param_4 * 8);
      *piVar1 = *piVar1 + iVar2;
    }
  }
  return;
}

