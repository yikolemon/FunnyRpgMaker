/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14044b270 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14044b270(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  bool local_c8;
  undefined2 uStack_c7;
  undefined1 uStack_c5;
  uint uStack_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80 [16];
  longlong local_70;
  undefined1 local_58 [24];
  ulonglong local_40;
  
  local_40 = ram0x000140613b10 ^ (ulonglong)auStack_f8;
  param_3 = param_3 & 0xf;
  if (param_3 == 2) {
LAB_14044b4ea:
    local_a8 = 0;
    local_c0 = 0x20;
    local_b8 = 0;
    uStack_b0 = 0;
    uVar1 = (*ram0x00014059dd78)(param_1,param_2,&local_c0);
    local_c8 = (bool)((byte)(uVar1 >> 0x1f) ^ 1);
    uStack_c4 = 0;
    if ((int)uVar1 < 0) {
      uStack_c4 = uVar1 & 0xffff;
    }
    goto LAB_14044b53b;
  }
  local_a8 = 0;
  local_c0 = 0x100000020;
  local_b8 = 0;
  uStack_b0 = 0;
  uVar1 = (*ram0x00014059dd78)(0,param_2,&local_c0);
  if ((int)uVar1 < 0) {
    uStack_c4 = uVar1 & 0xffff;
  }
  else {
    uStack_c4 = 0;
  }
  local_c8 = (int)uVar1 >= 0;
  if ((uStack_c4 != 0x50) || (param_3 == 0)) goto LAB_14044b53b;
  local_98 = 0;
  local_d8 = &local_a0;
  local_a0 = 0x20;
  uVar5 = 3;
  if (param_3 != 1) {
    uVar5 = 1;
  }
  local_90 = 0;
  uStack_88 = 0;
  lVar3 = (*(code *)s_GetCurrentThread_14059dd7e._10_8_)(param_1,0x80,uVar5,3);
  if ((lVar3 == -1) && (uVar1 = (*_DAT_14059df60)(), uVar1 != 0)) {
    local_c8 = false;
    uStack_c4 = uVar1;
    goto LAB_14044b53b;
  }
  local_b8 = 0;
  local_d8 = &local_c0;
  local_c0 = 0x20;
  uStack_b0 = 0;
  local_a8 = 0;
  lVar4 = (*(code *)s_GetCurrentThread_14059dd7e._10_8_)(param_2,0x80,uVar5,3);
  if ((lVar4 == -1) && (uVar1 = (*_DAT_14059df60)(), uVar1 != 0)) {
    if ((lVar3 == -1) || (iVar2 = (*ram0x00014059dd60)(lVar3), iVar2 != 0)) {
      local_c8 = false;
      uStack_c4 = uVar1;
      goto LAB_14044b53b;
    }
    goto LAB_14044b65b;
  }
  if (param_3 == 4) {
    iVar2 = (*(code *)s_GetLogicalProcessorInformationEx_14059df28._16_8_)(lVar3,0,local_80,0x28);
    lVar6 = local_70;
    if (iVar2 != 0) {
LAB_14044b484:
      iVar2 = (*(code *)s_GetLogicalProcessorInformationEx_14059df28._16_8_)(lVar4,0,local_80,0x28);
      if (iVar2 == 0) {
        uVar1 = (*_DAT_14059df60)();
        if (uVar1 != 0) goto LAB_14044b437;
        local_70 = CONCAT44(uStack_c4,CONCAT13(uStack_c5,CONCAT21(uStack_c7,local_c8)));
      }
      if (local_70 < lVar6) {
        if (((lVar4 != -1) && (iVar2 = (*ram0x00014059dd60)(lVar4), iVar2 == 0)) ||
           ((lVar3 != -1 && (iVar2 = (*ram0x00014059dd60)(lVar3), iVar2 == 0)))) goto LAB_14044b65b;
        goto LAB_14044b4ea;
      }
      goto LAB_14044b562;
    }
    uVar1 = (*_DAT_14059df60)();
    if (uVar1 == 0) {
      lVar6 = CONCAT44(uStack_c4,CONCAT13(uStack_c5,CONCAT21(uStack_c7,local_c8)));
      goto LAB_14044b484;
    }
LAB_14044b437:
    if (((lVar4 != -1) && (iVar2 = (*ram0x00014059dd60)(lVar4), iVar2 == 0)) ||
       ((lVar3 != -1 && (iVar2 = (*ram0x00014059dd60)(lVar3), iVar2 == 0)))) {
LAB_14044b65b:
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
LAB_14044b562:
    uVar1 = FUN_14044c190(lVar3,local_80);
    if ((uVar1 == 0) && (uVar1 = FUN_14044c190(lVar4,local_58), uVar1 == 0)) {
      iVar2 = memcmp(local_80,local_58,0x18);
      if (iVar2 == 0) {
        if (((lVar4 != -1) && (iVar2 = (*ram0x00014059dd60)(lVar4), iVar2 == 0)) ||
           ((lVar3 != -1 && (iVar2 = (*ram0x00014059dd60)(lVar3), iVar2 == 0)))) {
LAB_14044b661:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        local_c8 = false;
        uStack_c4 = 0x20;
      }
      else {
        if (((lVar4 != -1) && (iVar2 = (*ram0x00014059dd60)(lVar4), iVar2 == 0)) ||
           ((lVar3 != -1 && (iVar2 = (*ram0x00014059dd60)(lVar3), iVar2 == 0)))) goto LAB_14044b661;
        local_c8 = false;
        uStack_c4 = 0;
      }
      goto LAB_14044b53b;
    }
    if (((lVar4 != -1) && (iVar2 = (*ram0x00014059dd60)(lVar4), iVar2 == 0)) ||
       ((lVar3 != -1 && (iVar2 = (*ram0x00014059dd60)(lVar3), iVar2 == 0)))) goto LAB_14044b661;
  }
  local_c8 = false;
  uStack_c4 = uVar1;
LAB_14044b53b:
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_40 ^ (ulonglong)auStack_f8);
}

