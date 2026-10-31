/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cd6c8 */

int * __thiscall FUN_100cd6c8(int *param_1,int *param_2,ushort *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  bool bVar5;
  int iVar6;
  int local_34 [2];
  undefined4 local_2c;
  int *local_28;
  uint local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_34;
  local_18 = &LAB_100ce510;
  local_1c = ExceptionList;
  local_34[0] = *param_1;
  iVar6 = *(int *)(local_34[0] + 4);
  iVar3 = local_34[0];
  if (*(char *)(iVar6 + 0xd) == '\0') {
    iVar1 = iVar6;
    do {
      iVar6 = iVar1;
      bVar5 = *(ushort *)(iVar6 + 0xe) < *param_3;
      if (*(ushort *)(iVar6 + 0xe) == *param_3) {
        bVar5 = *(byte *)(iVar6 + 0x10) < (byte)param_3[1];
      }
      if (bVar5 == false) {
        iVar3 = iVar6;
      }
      iVar1 = *(int *)(iVar6 + (uint)bVar5 * 8);
    } while (*(char *)(iVar1 + 0xd) == '\0');
    local_24 = (uint)(bVar5 ^ 1);
  }
  else {
    local_24 = 0;
  }
  if (*(char *)(iVar3 + 0xd) == '\0') {
    bVar5 = *(ushort *)(iVar3 + 0xe) <= *param_3;
    if (*param_3 == *(ushort *)(iVar3 + 0xe)) {
      bVar5 = *(byte *)(iVar3 + 0x10) <= (byte)param_3[1];
    }
    if (bVar5) {
      uVar4 = 0;
      goto code_r0x100cd7d9;
    }
  }
  local_14 = 0xffffffff;
  ExceptionList = &local_1c;
  local_28 = param_1;
  if (param_1[1] == 0xccccccc) {
                    /* WARNING: Subroutine does not return */
    FUN_1005283a();
  }
  local_20 = (undefined1 *)local_34;
  FUN_100cd810(param_1,local_34[0],param_3);
  uVar2 = local_2c;
  local_2c = 0;
  local_14 = 0xffffffff;
  FUN_100cd8c0();
  iVar3 = FUN_1005271c(iVar6,local_24,uVar2);
  uVar4 = 1;
code_r0x100cd7d9:
  *param_2 = iVar3;
  *(undefined1 *)(param_2 + 1) = uVar4;
  ExceptionList = local_1c;
  return param_2;
}

