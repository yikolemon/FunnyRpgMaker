/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009bdd4 */

void __thiscall FUN_1009bdd4(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_24;
  int *local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_24;
  local_18 = CONCAT31(local_18._1_3_,0x8e);
  FUN_1007e5fc(&local_18);
  FUN_1008b9b2(param_1 + 8);
  FUN_1008b9b2(param_1 + 0xc);
  local_18 = -1;
  FUN_1008bcec(param_1 + 0x10,&local_18);
  FUN_1008b536(param_1 + 0x1c);
  local_18 = *(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x34) >> 3;
  FUN_1008b9b2(&local_18);
  iVar4 = *(int *)(param_1 + 0x38);
  local_24 = param_1;
  for (iVar3 = *(int *)(param_1 + 0x34); iVar1 = local_24, iVar3 != iVar4; iVar3 = iVar3 + 8) {
    FUN_1009c280(param_2);
  }
  FUN_1008b536(local_24 + 0x40);
  FUN_1008b536(iVar1 + 0x58);
  local_18 = CONCAT31(local_18._1_3_,0x8f);
  FUN_1007e5fc(&local_18);
  local_18 = (*(int *)(iVar1 + 0x74) - *(int *)(iVar1 + 0x70) >> 3) * -0x55555555;
  FUN_1008b9b2(&local_18);
  iVar4 = *(int *)(iVar1 + 0x74);
  for (iVar3 = *(int *)(iVar1 + 0x70); iVar1 = local_24, iVar3 != iVar4; iVar3 = iVar3 + 0x18) {
    FUN_1008b536(iVar3);
  }
  local_18 = *(int *)(local_24 + 0x80) - *(int *)(local_24 + 0x7c);
  FUN_1008b9b2(&local_18);
  iVar4 = *(int *)(iVar1 + 0x80);
  for (iVar3 = *(int *)(iVar1 + 0x7c); iVar1 = local_24, iVar3 != iVar4; iVar3 = iVar3 + 1) {
    FUN_1007e5fc(iVar3);
  }
  local_18 = (*(int *)(local_24 + 0x8c) - *(int *)(local_24 + 0x88) >> 2) * -0x55555555;
  FUN_1008b9b2(&local_18);
  piVar2 = *(int **)(iVar1 + 0x88);
  local_20 = *(int **)(iVar1 + 0x8c);
  iVar3 = param_2 + 0x38;
  if (piVar2 != local_20) {
    do {
      local_1c = iVar3;
      local_18 = (piVar2[1] - *piVar2 >> 3) * -0x55555555;
      FUN_1008b9b2(&local_18);
      iVar4 = piVar2[1];
      for (iVar3 = *piVar2; iVar3 != iVar4; iVar3 = iVar3 + 0x18) {
        FUN_1008b536(iVar3);
      }
      piVar2 = piVar2 + 3;
      iVar3 = local_1c;
    } while (piVar2 != local_20);
  }
  iVar3 = local_24;
  local_18 = (*(int *)(local_24 + 0x98) - *(int *)(local_24 + 0x94) >> 2) * -0x55555555;
  FUN_1008b9b2(&local_18);
  piVar2 = *(int **)(iVar3 + 0x94);
  local_20 = *(int **)(iVar3 + 0x98);
  if (piVar2 != local_20) {
    do {
      local_18 = piVar2[1] - *piVar2 >> 2;
      FUN_1008b9b2(&local_18);
      iVar4 = piVar2[1];
      for (iVar3 = *piVar2; iVar3 != iVar4; iVar3 = iVar3 + 4) {
        FUN_1008b9b2(iVar3);
      }
      piVar2 = piVar2 + 3;
    } while (piVar2 != local_20);
  }
  iVar3 = local_24;
  local_18 = -1;
  FUN_1008bcec(local_24 + 0xa0,&local_18);
  iVar4 = 0xac;
  do {
    FUN_1008b536(iVar4 + iVar3);
    iVar4 = iVar4 + 0x18;
  } while (iVar4 != 0xa0c);
  local_18._0_1_ = 0x91;
  FUN_1007e5fc(&local_18);
  FUN_1008b536(iVar3 + 0xa0c);
  if (*(char *)(iVar3 + 0xa40) == '\0') {
    local_18 = CONCAT31(local_18._1_3_,0x91);
  }
  else {
    local_18._0_1_ = 0x92;
    FUN_1007e5fc(&local_18);
    FUN_1008b536(iVar3 + 0xa24);
    FUN_1008b9b2(iVar3 + 0xa3c);
    local_18 = CONCAT31(local_18._1_3_,0x92);
  }
  FUN_1007e5fc(&local_18);
  if (DAT_10388d00 == (local_14 ^ (uint)&local_24)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

