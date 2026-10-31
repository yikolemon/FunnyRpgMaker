/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10041f76 */

void __thiscall FUN_10041f76(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int **ppiVar3;
  int *piVar4;
  int *local_98 [8];
  int *local_78;
  int *local_74;
  int *local_70;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)local_98;
  local_18 = 0xffffffff;
  local_1c = &LAB_1005a440;
  local_20 = ExceptionList;
  piVar4 = (int *)param_1[8];
  local_70 = (int *)param_1[9];
  ExceptionList = &local_20;
  local_78 = param_1;
  puVar2 = &stack0xfffffffc;
  ppiVar3 = local_98;
  if (piVar4 != local_70) {
    do {
      local_24 = (undefined1 *)ppiVar3;
      local_28 = puVar2;
      iVar1 = param_2[2];
      local_98[0] = (int *)(*piVar4 + 4);
      local_74 = piVar4;
      piVar4 = (int *)FUN_10018d26();
      if (*piVar4 <= iVar1) {
        local_18 = 0;
        local_98[0] = param_2;
        (**(code **)(*(int *)*local_74 + 4))();
      }
      piVar4 = local_74 + 2;
      puVar2 = local_28;
      ppiVar3 = (int **)local_24;
    } while (piVar4 != local_70);
  }
  iVar1 = param_2[2];
  local_98[0] = local_78 + 0xc;
  piVar4 = (int *)FUN_10018d26();
  if ((*piVar4 <= iVar1) && (param_2[2] != 6)) {
    local_18 = 0xffffffff;
    (**(code **)(*local_78 + 0xc))();
  }
  ExceptionList = local_20;
  return;
}

