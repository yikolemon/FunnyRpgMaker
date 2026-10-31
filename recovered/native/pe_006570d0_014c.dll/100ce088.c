/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ce088 */

int * __thiscall FUN_100ce088(int *param_1,int *param_2,ushort *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 uVar6;
  bool bVar7;
  int iVar8;
  int local_34 [2];
  undefined4 local_2c;
  int *local_28;
  uint local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_34;
  local_18 = &LAB_100ce550;
  local_1c = ExceptionList;
  local_34[0] = *param_1;
  iVar8 = *(int *)(local_34[0] + 4);
  local_24 = 0;
  iVar5 = local_34[0];
  if (*(char *)(iVar8 + 0xd) == '\0') {
    iVar1 = iVar8;
    do {
      iVar8 = iVar1;
      bVar7 = *(ushort *)(iVar8 + 0x10) < *param_3;
      if (*(ushort *)(iVar8 + 0x10) == *param_3) {
        bVar7 = *(byte *)(iVar8 + 0x12) < (byte)param_3[1];
      }
      if (bVar7 == false) {
        iVar5 = iVar8;
      }
      iVar1 = *(int *)(iVar8 + (uint)bVar7 * 8);
    } while (*(char *)(iVar1 + 0xd) == '\0');
    local_24 = (uint)(bVar7 ^ 1);
  }
  if (*(char *)(iVar5 + 0xd) == '\0') {
    bVar7 = *(ushort *)(iVar5 + 0x10) <= *param_3;
    if (*param_3 == *(ushort *)(iVar5 + 0x10)) {
      bVar7 = *(byte *)(iVar5 + 0x12) <= (byte)param_3[1];
    }
    if (bVar7) {
      *(undefined8 *)(iVar5 + 0x28) = *(undefined8 *)(param_4 + 4);
      uVar2 = param_4[1];
      uVar3 = param_4[2];
      uVar4 = param_4[3];
      *(undefined4 *)(iVar5 + 0x18) = *param_4;
      *(undefined4 *)(iVar5 + 0x1c) = uVar2;
      *(undefined4 *)(iVar5 + 0x20) = uVar3;
      *(undefined4 *)(iVar5 + 0x24) = uVar4;
      uVar6 = 0;
      goto code_r0x100ce1b1;
    }
  }
  local_14 = 0xffffffff;
  ExceptionList = &local_1c;
  local_28 = param_1;
  if (param_1[1] == 0x5555555) {
                    /* WARNING: Subroutine does not return */
    FUN_1005283a();
  }
  local_20 = (undefined1 *)local_34;
  FUN_100ce1e8(param_1,local_34[0],param_3,param_4);
  uVar2 = local_2c;
  local_2c = 0;
  local_14 = 0xffffffff;
  FUN_100ce2ae();
  iVar5 = FUN_1005271c(iVar8,local_24,uVar2);
  uVar6 = 1;
code_r0x100ce1b1:
  *param_2 = iVar5;
  *(undefined1 *)(param_2 + 1) = uVar6;
  ExceptionList = local_1c;
  return param_2;
}

