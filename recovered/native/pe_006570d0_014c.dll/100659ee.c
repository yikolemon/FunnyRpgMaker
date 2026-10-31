/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100659ee */

void FUN_100659ee(uint *param_1,uint *param_2,uint *param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 local_20;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_20;
  uVar2 = *param_2;
  uVar4 = param_2[1] - uVar2;
  uVar3 = param_1[1] - *param_1;
  bVar1 = uVar3 < uVar4;
  if (uVar4 == uVar3) {
    bVar1 = uVar2 < *param_1;
  }
  if (bVar1) {
    local_18 = param_2[2];
    local_20 = *(undefined8 *)param_2;
    param_2[2] = param_1[2];
    *(undefined8 *)param_2 = *(undefined8 *)param_1;
    param_1[2] = local_18;
    *(undefined8 *)param_1 = local_20;
    uVar2 = *param_2;
    uVar4 = param_2[1] - uVar2;
  }
  uVar3 = param_3[1] - *param_3;
  bVar1 = uVar4 < uVar3;
  if (uVar3 == uVar4) {
    bVar1 = *param_3 < uVar2;
  }
  if (bVar1) {
    local_18 = param_3[2];
    local_20 = *(undefined8 *)param_3;
    param_3[2] = param_2[2];
    *(undefined8 *)param_3 = *(undefined8 *)param_2;
    param_2[2] = local_18;
    *(undefined8 *)param_2 = local_20;
    uVar3 = param_2[1] - *param_2;
    uVar2 = param_1[1] - *param_1;
    bVar1 = uVar2 < uVar3;
    if (uVar3 == uVar2) {
      bVar1 = *param_2 < *param_1;
    }
    if (bVar1) {
      local_18 = param_2[2];
      local_20 = *(undefined8 *)param_2;
      param_2[2] = param_1[2];
      *(undefined8 *)param_2 = *(undefined8 *)param_1;
      param_1[2] = local_18;
      *(undefined8 *)param_1 = local_20;
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_20)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

