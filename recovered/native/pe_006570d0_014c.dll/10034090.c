/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10034090 */

int * __thiscall FUN_10034090(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int *local_3c;
  uint local_38;
  undefined4 *local_34;
  int local_30;
  undefined4 *local_2c;
  int *local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_3c;
  local_18 = &LAB_10059b10;
  local_1c = ExceptionList;
  if (param_2 == param_3) {
    return param_3;
  }
  local_34 = *(undefined4 **)(param_1 + 4);
  iVar1 = *(int *)(param_1 + 0xc);
  local_2c = (undefined4 *)param_2[1];
  local_3c = param_2;
  local_14 = 0;
  ExceptionList = &local_1c;
  local_38 = FUN_10033e6b(param_2 + 2);
  local_38 = local_38 & *(uint *)(param_1 + 0x18);
  local_28 = *(int **)(iVar1 + local_38 * 8);
  piVar2 = *(int **)(iVar1 + 4 + local_38 * 8);
  piVar5 = param_2;
  local_30 = param_1;
  local_24 = iVar1;
  while( true ) {
    piVar6 = (int *)*piVar5;
    FUN_10023395(piVar5 + 2);
    FUN_102283a0(piVar5,0x10);
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + -1;
    if (piVar5 == piVar2) break;
    if ((piVar6 == param_3) && (local_28 == param_2)) {
      *(int **)(local_24 + local_38 * 8) = piVar6;
      goto code_r0x100341fb;
    }
    piVar5 = piVar6;
    if (piVar6 == param_3) goto code_r0x100341fb;
  }
  puVar3 = local_2c;
  if (local_28 == param_2) {
    *(undefined4 **)(local_24 + local_38 * 8) = local_34;
    puVar3 = local_34;
  }
  *(undefined4 **)(local_24 + 4 + local_38 * 8) = puVar3;
  while (piVar6 != param_3) {
    uVar4 = FUN_10033e6b(piVar6 + 2);
    local_28 = (int *)(uVar4 & *(uint *)(local_30 + 0x18));
    piVar2 = *(int **)(local_24 + 4 + (int)local_28 * 8);
    piVar5 = piVar6;
    while( true ) {
      piVar6 = (int *)*piVar5;
      FUN_10023395(piVar5 + 2);
      FUN_102283a0(piVar5,0x10);
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + -1;
      if (piVar5 == piVar2) break;
      piVar5 = piVar6;
      if (piVar6 == param_3) {
        *(int **)(local_24 + (int)local_28 * 8) = piVar6;
        goto code_r0x100341fb;
      }
    }
    *(undefined4 **)(local_24 + (int)local_28 * 8) = local_34;
    *(undefined4 **)(local_24 + 4 + (int)local_28 * 8) = local_34;
  }
code_r0x100341fb:
  *local_2c = piVar6;
  piVar6[1] = (int)local_2c;
  ExceptionList = local_1c;
  return param_3;
}

