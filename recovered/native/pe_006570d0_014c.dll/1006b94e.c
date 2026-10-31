/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006b94e */

void FUN_1006b94e(undefined4 *param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *unaff_FS_OFFSET;
  undefined8 uVar7;
  int local_38 [2];
  int local_30;
  int local_2c [2];
  undefined4 local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_38;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c24e0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  FUN_1006bb10(param_1,param_2);
  local_14 = 0;
  iVar3 = *param_2;
  while (iVar4 = local_2c[0], iVar3 == 0) {
    if (local_2c[0] == 0) goto LAB_1006ba8a;
    FUN_1006c628(local_38,6);
    iVar3 = local_30;
    iVar2 = FUN_10002303();
    *param_2 = iVar3;
    param_2[1] = iVar2;
    local_24 = CONCAT31((int3)((uint)iVar2 >> 8),1);
    if (iVar3 != 0) goto code_r0x1006ba92;
    iVar3 = iVar4 + 0x20;
    if (local_38[0] == 3) {
      FUN_1006b94e(iVar3,param_2,param_3);
    }
    else {
      if (7 < *(uint *)(iVar4 + 0x34)) {
        iVar3 = *(int *)(iVar4 + 0x20);
      }
      uVar7 = FUN_10229350(iVar3);
      iVar3 = FUN_10002303();
      *param_2 = (int)((ulonglong)uVar7 >> 0x20);
      param_2[1] = iVar3;
      uVar6 = (uint)uVar7 & 1;
      uVar1 = *param_3;
      *param_3 = *param_3 + uVar6;
      param_3[1] = param_3[1] + (uint)CARRY4(uVar1,uVar6);
    }
    if (*param_2 != 0) goto code_r0x1006ba92;
    iVar3 = FUN_1006c70a(local_2c);
    iVar4 = FUN_10002303();
    *param_2 = iVar3;
    param_2[1] = iVar4;
  }
  iVar3 = param_2[1];
  uVar7 = FUN_10002303();
  local_24 = CONCAT31((int3)((ulonglong)uVar7 >> 0x28),1);
  if (*(int *)(iVar3 + 4) == *(int *)((int)uVar7 + 4)) {
    iVar3 = *param_2;
    if (iVar3 < 0x7b) {
      if (((1 < iVar3 - 2U) && (iVar3 != 0x35)) && (iVar3 != 0x40)) goto code_r0x1006ba92;
    }
    else if (((iVar3 != 0x7b) && (iVar3 != 0x10b)) && (iVar3 != 0xa1)) goto code_r0x1006ba92;
LAB_1006ba8a:
    local_24 = 0;
  }
code_r0x1006ba92:
  local_14 = 0xffffffff;
  FUN_10056526();
  if ((char)local_24 == '\0') {
    iVar3 = 10;
    do {
      puVar5 = param_1;
      if (7 < (uint)param_1[5]) {
        puVar5 = (undefined4 *)*param_1;
      }
      uVar7 = FUN_10229350(puVar5);
      iVar2 = (int)((ulonglong)uVar7 >> 0x20);
      uVar6 = (uint)uVar7 & 1;
      uVar1 = *param_3;
      *param_3 = *param_3 + uVar6;
      param_3[1] = param_3[1] + (uint)CARRY4(uVar1,uVar6);
      iVar4 = FUN_10002303();
      *param_2 = iVar2;
      param_2[1] = iVar4;
    } while (((iVar2 == 0x91) || (iVar2 == 5)) && (iVar3 = iVar3 + -1, iVar3 != 0));
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}

