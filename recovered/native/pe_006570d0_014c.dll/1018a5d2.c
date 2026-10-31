/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018a5d2 */

void __thiscall FUN_1018a5d2(int param_1,int param_2,int *param_3,undefined4 *param_4,int param_5)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *local_44;
  int *local_40;
  int local_3c;
  int *local_38;
  undefined4 *local_34;
  float local_30;
  int local_2c;
  float local_28;
  undefined8 local_24;
  int local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_44;
  iVar4 = *(int *)(param_1 + 0x38);
  local_1c = *(int *)(*(int *)(param_1 + 0x40) + -8 + iVar4 * 8);
  local_18 = *(undefined4 *)(*(int *)(param_1 + 0x40) + -4 + iVar4 * 8);
  if (param_5 == 0) {
    local_30 = *(float *)(*(int *)(param_1 + 0x2c) + 0x1c);
    local_38 = (int *)*param_4;
    local_34 = (undefined4 *)param_4[1];
    local_40 = (int *)*param_3;
    local_3c = param_3[1];
    local_44 = *(undefined8 **)(param_2 + 4);
    local_2c = local_1c;
    FUN_1018a78b();
  }
  else if (0 < param_5) {
    local_28 = DAT_1028b430 / (float)param_5;
    local_2c = -param_5;
    iVar5 = 1;
    do {
      local_30 = (float)iVar5 * local_28;
      local_34 = param_4;
      local_38 = param_3;
      local_3c = param_2;
      local_40 = &local_1c;
      local_44 = &local_24;
      FUN_1018a4e1();
      if (iVar4 == *(int *)(param_1 + 0x3c)) {
        if (iVar4 == 0) {
          iVar1 = 8;
        }
        else {
          iVar1 = iVar4 / 2 + iVar4;
        }
        iVar3 = iVar4 + 1;
        if (iVar4 + 1 < iVar1) {
          iVar3 = iVar1;
        }
        local_44 = (undefined8 *)(iVar3 * 8);
        puVar2 = (undefined8 *)FUN_100fa1fa();
        if (*(int **)(param_1 + 0x40) != (int *)0x0) {
          local_3c = *(int *)(param_1 + 0x38) << 3;
          local_44 = puVar2;
          local_40 = *(int **)(param_1 + 0x40);
          FUN_1025b2d0();
          local_44 = *(undefined8 **)(param_1 + 0x40);
          FUN_100fa2cb();
        }
        *(undefined8 **)(param_1 + 0x40) = puVar2;
        *(int *)(param_1 + 0x3c) = iVar3;
        iVar4 = *(int *)(param_1 + 0x38);
      }
      else {
        puVar2 = *(undefined8 **)(param_1 + 0x40);
      }
      puVar2[iVar4] = local_24;
      iVar4 = *(int *)(param_1 + 0x38) + 1;
      *(int *)(param_1 + 0x38) = iVar4;
      iVar1 = local_2c + iVar5;
      iVar5 = iVar5 + 1;
    } while (iVar1 != 0);
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_44)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

