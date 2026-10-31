/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018aa8e */

void __thiscall FUN_1018aa8e(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *local_40;
  undefined4 *local_3c;
  int local_38;
  int *local_34;
  float local_30;
  float local_2c;
  int local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_40;
  iVar4 = *(int *)(param_1 + 0x38);
  local_1c = *(undefined4 *)(*(int *)(param_1 + 0x40) + -8 + iVar4 * 8);
  local_18 = *(undefined4 *)(*(int *)(param_1 + 0x40) + -4 + iVar4 * 8);
  if (param_4 == 0) {
    local_34 = *(int **)(*(int *)(param_1 + 0x2c) + 0x1c);
    local_3c = (undefined4 *)*param_3;
    local_38 = param_3[1];
    local_40 = *(undefined8 **)(param_2 + 4);
    FUN_1018ac20();
  }
  else if (0 < param_4) {
    local_2c = DAT_1028b430 / (float)param_4;
    local_28 = -param_4;
    iVar5 = 1;
    do {
      local_30 = (float)iVar5 * local_2c;
      local_34 = param_3;
      local_38 = param_2;
      local_3c = &local_1c;
      local_40 = &local_24;
      FUN_1018a572();
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
        local_40 = (undefined8 *)(iVar3 * 8);
        puVar2 = (undefined8 *)FUN_100fa1fa();
        if (*(undefined4 **)(param_1 + 0x40) != (undefined4 *)0x0) {
          local_38 = *(int *)(param_1 + 0x38) << 3;
          local_40 = puVar2;
          local_3c = *(undefined4 **)(param_1 + 0x40);
          FUN_1025b2d0();
          local_40 = *(undefined8 **)(param_1 + 0x40);
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
      iVar1 = local_28 + iVar5;
      iVar5 = iVar5 + 1;
    } while (iVar1 != 0);
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_40)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

