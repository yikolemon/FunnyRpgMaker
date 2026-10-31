/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004179cc */

undefined4 * __cdecl
FUN_004179cc(undefined4 *param_1,undefined4 *param_2,int param_3,int *param_4,char param_5,
            undefined4 *param_6)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  uint local_24;
  undefined4 *local_20;
  undefined2 local_1a;
  undefined4 *local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_24;
  iVar1 = *param_4;
  iVar5 = 0;
  if (iVar1 - param_3 == 0 || iVar1 < param_3) {
LAB_00417a23:
    local_24 = (uint)*(byte *)((int)param_4 + 0xe);
  }
  else {
    if (*(char *)((int)param_4 + 9) != '\0') {
      param_5 = *(char *)((int)param_4 + 9);
    }
    if (param_5 == '\x03') {
      iVar3 = (iVar1 - param_3) / 2;
      iVar5 = (iVar1 - param_3) - iVar3;
    }
    else {
      if (param_5 != '\x02') {
        if (param_5 == '\x01') {
          iVar5 = iVar1 - param_3;
        }
        goto LAB_00417a23;
      }
      iVar3 = iVar1 - param_3;
      iVar5 = 0;
    }
    local_24 = (uint)*(byte *)((int)param_4 + 0xe);
    if (0 < iVar3) {
      iVar1 = local_24 * 2;
      uVar4 = iVar3 + 1;
      do {
        uVar6 = FUN_0040bb79((undefined2 *)(param_4 + 4),(undefined2 *)((int)(param_4 + 4) + iVar1),
                             param_2);
        param_2 = (undefined4 *)((ulonglong)uVar6 >> 0x20);
        uVar4 = uVar4 - 1;
      } while (1 < uVar4);
    }
  }
  uVar6 = FUN_0040bb79((undefined2 *)*param_6,(undefined2 *)*param_6 + 2,param_2);
  puVar2 = (undefined4 *)((ulonglong)uVar6 >> 0x20);
  if ((*(char *)param_6[1] == '\x01') &&
     (iVar1 = *(int *)param_6[3] - *(int *)param_6[2],
     iVar1 != 0 && *(int *)param_6[2] <= *(int *)param_6[3])) {
    local_1a = 0x30;
    FUN_00412954(&local_18,puVar2,iVar1,&local_1a);
    puVar2 = local_18;
  }
  FUN_0040c483(&local_20,(char *)param_6[4],*(char **)param_6[5],puVar2);
  if (0 < iVar5) {
    iVar1 = local_24 * 2;
    uVar4 = iVar5 + 1;
    do {
      uVar6 = FUN_0040bb79((undefined2 *)(param_4 + 4),(undefined2 *)((int)param_4 + iVar1 + 0x10),
                           local_20);
      local_20 = (undefined4 *)((ulonglong)uVar6 >> 0x20);
      uVar4 = uVar4 - 1;
    } while (1 < uVar4);
  }
  *param_1 = local_20;
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_24)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_24);
  }
  return param_1;
}

