/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c9e3c */

int * __thiscall FUN_101c9e3c(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int local_50;
  int *local_4c;
  uint local_48;
  undefined4 *local_44;
  int *local_40;
  int local_3c;
  undefined4 *local_38;
  int *local_34;
  ulonglong local_30;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_50;
  local_1c = &LAB_101ca0f0;
  local_20 = ExceptionList;
  if (param_2 == param_3) {
    return param_3;
  }
  local_38 = *(undefined4 **)(param_1 + 4);
  iVar1 = *(int *)(param_1 + 0xc);
  local_44 = (undefined4 *)param_2[1];
  local_34 = param_2;
  local_18 = 0;
  local_30 = ~-(ulonglong)(*(double *)(param_2 + 2) == 0.0) & (ulonglong)*(double *)(param_2 + 2);
  ExceptionList = &local_20;
  local_48 = FUN_100d7b05(&local_30);
  local_48 = local_48 & *(uint *)(param_1 + 0x18);
  local_4c = *(int **)(iVar1 + local_48 * 8);
  local_40 = *(int **)(iVar1 + 4 + local_48 * 8);
  piVar4 = param_2;
  local_50 = iVar1;
  local_3c = param_1;
  while( true ) {
    piVar5 = (int *)*piVar4;
    FUN_102283a0(piVar4,0x18);
    *(int *)(local_3c + 8) = *(int *)(local_3c + 8) + -1;
    if (piVar4 == local_40) break;
    if ((piVar5 == param_3) && (local_4c == param_2)) {
      *(int **)(local_50 + local_48 * 8) = piVar5;
      goto code_r0x101c9fd7;
    }
    piVar4 = piVar5;
    if (piVar5 == param_3) goto code_r0x101c9fd7;
  }
  puVar2 = local_44;
  if (local_4c == param_2) {
    *(undefined4 **)(local_50 + local_48 * 8) = local_38;
    puVar2 = local_38;
  }
  *(undefined4 **)(local_50 + 4 + local_48 * 8) = puVar2;
  while (piVar5 != param_3) {
    local_30 = ~-(ulonglong)(*(double *)(piVar5 + 2) == 0.0) & (ulonglong)*(double *)(piVar5 + 2);
    uVar3 = FUN_100d7b05(&local_30);
    local_4c = (int *)(uVar3 & *(uint *)(local_3c + 0x18));
    local_40 = *(int **)(local_50 + 4 + (int)local_4c * 8);
    piVar4 = piVar5;
    while( true ) {
      piVar5 = (int *)*piVar4;
      FUN_102283a0(piVar4,0x18);
      *(int *)(local_3c + 8) = *(int *)(local_3c + 8) + -1;
      if (piVar4 == local_40) break;
      piVar4 = piVar5;
      if (piVar5 == param_3) {
        *(int **)(local_50 + (int)local_4c * 8) = piVar5;
        goto code_r0x101c9fd7;
      }
    }
    *(undefined4 **)(local_50 + (int)local_4c * 8) = local_38;
    *(undefined4 **)(local_50 + 4 + (int)local_4c * 8) = local_38;
  }
code_r0x101c9fd7:
  *local_44 = piVar5;
  piVar5[1] = (int)local_44;
  ExceptionList = local_20;
  return param_3;
}

