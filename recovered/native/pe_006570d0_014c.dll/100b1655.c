/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b1655 */

undefined8 * __fastcall FUN_100b1655(undefined8 *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  char *local_40;
  char *local_3c;
  undefined8 *local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_21;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_40;
  local_18 = &LAB_100c1bb0;
  local_1c = ExceptionList;
  local_34 = 0;
  uStack_30 = 0;
  local_2c = 0;
  pcVar6 = param_2;
  if (0xf < *(uint *)(param_2 + 0x14)) {
    pcVar6 = *(char **)param_2;
  }
  local_3c = pcVar6 + *(int *)(param_2 + 0x10);
  iVar2 = -1;
  ExceptionList = &local_1c;
  local_38 = param_1;
  while (uVar3 = local_2c, pcVar6 != local_3c) {
    cVar1 = *pcVar6;
    iVar4 = (int)cVar1;
    local_40 = pcVar6;
    if (iVar4 == 0x3f) {
      if (-1 < iVar2) goto LAB_100b1742;
      local_21 = 1;
      local_28 = 0;
      local_14 = 0;
      FUN_100b1bfc(&local_28,&local_21);
LAB_100b172e:
      iVar5 = -1;
    }
    else if ((byte)(cVar1 - 0x30U) < 10) {
      iVar5 = iVar4 + -0x30;
LAB_100b170f:
      if (-1 < iVar2) {
        local_28 = CONCAT31(local_28._1_3_,(byte)iVar5 | (byte)(iVar2 << 4));
        local_14 = 0;
        FUN_100b1e14(&local_28);
        goto LAB_100b172e;
      }
    }
    else {
      if ((byte)(cVar1 + 0x9fU) < 6) {
        iVar5 = iVar4 + -0x57;
        goto LAB_100b170f;
      }
      iVar5 = iVar2;
      if ((byte)(cVar1 + 0xbfU) < 6) {
        iVar5 = iVar4 + -0x37;
        goto LAB_100b170f;
      }
    }
    iVar2 = iVar5;
    pcVar6 = local_40 + 1;
  }
  if (iVar2 < 0) {
    local_2c = 0;
    uVar7 = CONCAT44(uStack_30,local_34);
    uStack_30 = 0;
    local_34 = 0;
  }
  else {
LAB_100b1742:
    uVar7 = 0;
    uVar3 = 0;
  }
  *local_38 = uVar7;
  *(undefined4 *)(local_38 + 1) = uVar3;
  local_14 = 0xffffffff;
  FUN_10004eae();
  ExceptionList = local_1c;
  return local_38;
}

