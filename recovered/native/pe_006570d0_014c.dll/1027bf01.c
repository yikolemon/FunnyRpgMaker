/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027bf01 */

void FUN_1027bf01(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int local_8;
  
  if ((((*(undefined ***)(param_1 + 0x88) != (undefined **)0x0) &&
       (*(undefined ***)(param_1 + 0x88) != &PTR_DAT_1039b380)) &&
      (*(int **)(param_1 + 0x7c) != (int *)0x0)) && (**(int **)(param_1 + 0x7c) == 0)) {
    piVar3 = *(int **)(param_1 + 0x84);
    if ((piVar3 != (int *)0x0) && (*piVar3 == 0)) {
      FUN_10274120(piVar3);
      FID_conflict____acrt_locale_free_monetary(*(undefined4 *)(param_1 + 0x88));
    }
    piVar3 = *(int **)(param_1 + 0x80);
    if ((piVar3 != (int *)0x0) && (*piVar3 == 0)) {
      FUN_10274120(piVar3);
      FID_conflict____free_lconv_num(*(undefined4 *)(param_1 + 0x88));
    }
    FUN_10274120(*(undefined4 *)(param_1 + 0x7c));
    FUN_10274120(*(undefined4 *)(param_1 + 0x88));
  }
  if ((*(int **)(param_1 + 0x8c) != (int *)0x0) && (**(int **)(param_1 + 0x8c) == 0)) {
    FUN_10274120(*(int *)(param_1 + 0x90) + -0xfe);
    FUN_10274120(*(int *)(param_1 + 0x94) + -0x80);
    FUN_10274120(*(int *)(param_1 + 0x98) + -0x80);
    FUN_10274120(*(undefined4 *)(param_1 + 0x8c));
  }
  ___acrt_locale_free_lc_time_if_unreferenced(*(undefined4 *)(param_1 + 0x9c));
  puVar2 = (undefined4 *)(param_1 + 0xa0);
  local_8 = 6;
  piVar3 = (int *)(param_1 + 0x28);
  do {
    if ((((undefined2 *)piVar3[-2] != &DAT_1039b4c8) &&
        (piVar1 = (int *)*piVar3, piVar1 != (int *)0x0)) && (*piVar1 == 0)) {
      FUN_10274120(piVar1);
      FUN_10274120(*puVar2);
    }
    if (((piVar3[-3] != 0) && (piVar1 = (int *)piVar3[-1], piVar1 != (int *)0x0)) && (*piVar1 == 0))
    {
      FUN_10274120(piVar1);
    }
    puVar2 = puVar2 + 1;
    piVar3 = piVar3 + 4;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  FUN_10274120(param_1);
  return;
}

