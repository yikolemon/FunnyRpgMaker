/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100664bd */

void FUN_100664bd(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  undefined8 local_14;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&local_14;
  uVar1 = *param_2;
  if (uVar1 < *param_1) {
    local_c = param_2[2];
    local_14 = *(undefined8 *)param_2;
    param_2[2] = param_1[2];
    *(undefined8 *)param_2 = *(undefined8 *)param_1;
    param_1[2] = local_c;
    *(undefined8 *)param_1 = local_14;
    uVar1 = *param_2;
  }
  if (*param_3 < uVar1) {
    local_c = param_3[2];
    local_14 = *(undefined8 *)param_3;
    param_3[2] = param_2[2];
    *(undefined8 *)param_3 = *(undefined8 *)param_2;
    param_2[2] = local_c;
    *(undefined8 *)param_2 = local_14;
    if (*param_2 < *param_1) {
      local_c = param_2[2];
      local_14 = *(undefined8 *)param_2;
      param_2[2] = param_1[2];
      *(undefined8 *)param_2 = *(undefined8 *)param_1;
      param_1[2] = local_c;
      *(undefined8 *)param_1 = local_14;
    }
  }
  if (DAT_10388d00 == (local_8 ^ (uint)&local_14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

