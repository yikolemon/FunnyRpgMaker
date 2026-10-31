/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006b6fa */

int * __thiscall FUN_1006b6fa(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int *local_3c;
  uint local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  int local_2c;
  int *local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_3c;
  local_18 = &LAB_100c24c0;
  local_1c = ExceptionList;
  if (param_2 == param_3) {
    return param_3;
  }
  local_34 = *(undefined4 **)(param_1 + 4);
  local_24 = *(int *)(param_1 + 0xc);
  local_30 = (undefined4 *)param_2[1];
  local_3c = param_2;
  local_14 = 0;
  if ((uint)param_2[7] < 0x10) {
    piVar3 = param_2 + 2;
  }
  else {
    piVar3 = (int *)param_2[2];
  }
  ExceptionList = &local_1c;
  local_38 = FUN_1001c721(piVar3,param_2[6]);
  local_38 = local_38 & *(uint *)(param_1 + 0x18);
  local_28 = *(int **)(local_24 + local_38 * 8);
  piVar3 = *(int **)(local_24 + 4 + local_38 * 8);
  piVar5 = param_2;
  local_2c = param_1;
  while( true ) {
    piVar6 = (int *)*piVar5;
    FUN_100186f1(piVar5 + 2);
    FUN_102283a0(piVar5,0x24);
    *(int *)(local_2c + 8) = *(int *)(local_2c + 8) + -1;
    if (piVar5 == piVar3) break;
    if ((piVar6 == param_3) && (local_28 == param_2)) {
      *(int **)(local_24 + local_38 * 8) = piVar6;
      goto code_r0x1006b885;
    }
    piVar5 = piVar6;
    if (piVar6 == param_3) goto code_r0x1006b885;
  }
  puVar2 = local_30;
  if (local_28 == param_2) {
    *(undefined4 **)(local_24 + local_38 * 8) = local_34;
    puVar2 = local_34;
  }
  *(undefined4 **)(local_24 + 4 + local_38 * 8) = puVar2;
  iVar1 = local_2c;
  while (piVar6 != param_3) {
    if ((uint)piVar6[7] < 0x10) {
      piVar3 = piVar6 + 2;
    }
    else {
      piVar3 = (int *)piVar6[2];
    }
    local_2c = iVar1;
    uVar4 = FUN_1001c721(piVar3,piVar6[6]);
    local_28 = (int *)(uVar4 & *(uint *)(iVar1 + 0x18));
    piVar3 = *(int **)(local_24 + 4 + (int)local_28 * 8);
    piVar5 = piVar6;
    while( true ) {
      piVar6 = (int *)*piVar5;
      FUN_100186f1(piVar5 + 2);
      FUN_102283a0(piVar5,0x24);
      *(int *)(local_2c + 8) = *(int *)(local_2c + 8) + -1;
      if (piVar5 == piVar3) break;
      piVar5 = piVar6;
      if (piVar6 == param_3) {
        *(int **)(local_24 + (int)local_28 * 8) = piVar6;
        goto code_r0x1006b885;
      }
    }
    *(undefined4 **)(local_24 + (int)local_28 * 8) = local_34;
    *(undefined4 **)(local_24 + 4 + (int)local_28 * 8) = local_34;
    iVar1 = local_2c;
  }
code_r0x1006b885:
  *local_30 = piVar6;
  piVar6[1] = (int)local_30;
  ExceptionList = local_1c;
  return param_3;
}

