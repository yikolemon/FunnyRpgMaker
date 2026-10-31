/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fbd22 */

void __thiscall FUN_100fbd22(undefined4 *param_1,undefined4 param_2,float param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&uStack_58;
  local_14 = 0xffffffff;
  local_18 = &LAB_1012c960;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_24 = FUN_100fbf7e();
  param_1[10] = local_24;
  local_2c = *(int *)(local_24 + 0x14cc);
  local_34 = param_1;
  if ((*(byte *)(local_24 + 0x27b4) & 0x20) != 0) {
    FUN_100f99e6("Clipper: Begin(%d,%.2f) in \'%s\'\n",param_2,(double)param_3,
                 *(undefined4 *)(local_2c + 4));
  }
  iVar5 = *(int *)(local_24 + 0x2308);
  if ((iVar5 != 0) && (*(char *)(iVar5 + 0x1ee) == '\x01')) {
    FUN_101639ce(iVar5);
  }
  *(double *)(local_34 + 6) = (double)*(float *)(local_2c + 0x148);
  local_34[4] = param_3;
  local_34[3] = param_2;
  *local_34 = 0xffffffff;
  local_34[1] = 0;
  local_28 = *(int *)(local_24 + 0x22f8);
  iVar4 = *(int *)(local_24 + 0x22fc);
  iVar5 = local_28 + 1;
  *(int *)(local_24 + 0x22f8) = iVar5;
  local_30 = iVar5;
  if (iVar4 <= local_28) {
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    local_4c = 0;
    local_14 = 0;
    iVar5 = *(int *)(local_24 + 0x2300);
    if (iVar5 <= local_28) {
      if (iVar5 == 0) {
        local_3c = 8;
      }
      else {
        local_3c = iVar5 / 2 + iVar5;
      }
      if (local_3c <= local_28 + 1) {
        local_3c = local_28 + 1;
      }
      uVar3 = FUN_100fa1fa(local_3c * 0x1c);
      iVar5 = local_24;
      if (*(int *)(local_24 + 0x2304) != 0) {
        FUN_1025b2d0(uVar3,*(int *)(local_24 + 0x2304),*(int *)(local_24 + 0x22fc) * 0x1c);
        local_38 = uVar3;
        FUN_100fa2cb(*(undefined4 *)(iVar5 + 0x2304));
        uVar3 = local_38;
      }
      *(undefined4 *)(local_24 + 0x2304) = uVar3;
      *(int *)(local_24 + 0x2300) = local_3c;
      iVar4 = *(int *)(local_24 + 0x22fc);
    }
    if (iVar4 <= local_28) {
      iVar5 = (local_28 - iVar4) + 1;
      iVar4 = iVar4 * 0x1c;
      do {
        iVar2 = *(int *)(local_24 + 0x2304);
        puVar1 = (undefined4 *)(iVar2 + 0xc + iVar4);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1 = (undefined4 *)(iVar2 + iVar4);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        iVar4 = iVar4 + 0x1c;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *(int *)(local_24 + 0x22fc) = local_30;
    local_14 = 0xffffffff;
    iVar5 = *(int *)(local_24 + 0x22f8);
  }
  puVar1 = local_34;
  iVar5 = *(int *)(local_24 + 0x2304) + iVar5 * 0x1c;
  FUN_100fc00e(local_34);
  *(undefined4 *)(iVar5 + -0x18) = *(undefined4 *)(local_2c + 0x198);
  puVar1[0xb] = iVar5 + -0x1c;
  *(double *)(puVar1 + 8) = (double)*(float *)(iVar5 + -0x18);
  ExceptionList = local_1c;
  return;
}

