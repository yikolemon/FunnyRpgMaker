/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10027d30 */

undefined4 * __thiscall
FUN_10027d30(char *param_1,undefined4 *param_2,int *param_3,int param_4,int param_5)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *local_818;
  uint local_814;
  uint local_810;
  code *local_80c;
  undefined4 local_808 [501];
  char *local_34;
  int local_30;
  char *local_2c;
  int local_28;
  char *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_818;
  local_18 = &LAB_10059930;
  local_1c = ExceptionList;
  local_818 = local_808;
  local_80c = FUN_10027f60;
  local_810 = 500;
  local_814 = 1;
  local_808[0] = 0;
  local_2c = param_1;
  if (0xf < *(uint *)(param_1 + 0x14)) {
    local_2c = *(char **)param_1;
  }
  local_28 = 0;
  ExceptionList = &local_1c;
  local_24 = param_1;
  while (*(int *)(local_24 + 0x28) != 0) {
    pcVar3 = local_24;
    if (0xf < *(uint *)(local_24 + 0x14)) {
      pcVar3 = *(char **)local_24;
    }
    if (local_2c == pcVar3 + *(int *)(local_24 + 0x10)) {
      cVar1 = (pcVar3 + *(int *)(local_24 + 0x10))[-1];
    }
    else {
      cVar1 = *local_2c;
      if ((byte)(cVar1 + 0x81U) < 0x82) break;
      local_2c = local_2c + 1;
    }
    local_28 = local_28 + cVar1;
    if ((local_28 == 0) || (param_5 <= local_28)) break;
    uVar2 = local_814 + 1;
    if (local_810 < uVar2) {
      local_14 = 0;
      (*local_80c)(&local_818,uVar2);
      uVar2 = local_814 + 1;
    }
    local_818[local_814] = local_28;
    local_814 = uVar2;
  }
  local_30 = local_814 - 1;
  local_34 = local_24 + 0x18;
  local_28 = 0;
  while( true ) {
    if (param_5 <= local_28) break;
    if (param_5 - local_28 == local_818[local_30]) {
      pcVar3 = local_34;
      if (0xf < *(uint *)(local_24 + 0x2c)) {
        pcVar3 = *(char **)(local_24 + 0x18);
      }
      local_14 = 0;
      FUN_1001909c(pcVar3,pcVar3 + *(int *)(local_24 + 0x28));
      local_30 = local_30 + -1;
    }
    local_2c = (char *)CONCAT31(local_2c._1_3_,*(undefined1 *)(param_4 + local_28));
    iVar4 = param_3[1];
    uVar2 = iVar4 + 1;
    if ((uint)param_3[2] < uVar2) {
      local_14 = 0;
      (*(code *)param_3[3])(param_3,uVar2);
      iVar4 = param_3[1];
      uVar2 = iVar4 + 1;
    }
    param_3[1] = uVar2;
    *(undefined1 *)(*param_3 + iVar4) = local_2c._0_1_;
    local_28 = local_28 + 1;
  }
  *param_2 = param_3;
  local_14 = 0xffffffff;
  if (local_818 != local_808) {
    thunk_FUN_10274120(local_818);
  }
  ExceptionList = local_1c;
  return param_2;
}

