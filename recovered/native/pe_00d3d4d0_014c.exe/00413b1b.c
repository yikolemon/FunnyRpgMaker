/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00413b1b */

undefined4 * __cdecl
FUN_00413b1b(undefined4 *param_1,undefined4 *param_2,int param_3,int *param_4,char param_5,
            void *param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  uint local_1c;
  undefined4 *local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_1c;
  iVar1 = *param_4;
  iVar3 = 0;
  if (iVar1 - param_3 == 0 || iVar1 < param_3) {
LAB_00413b69:
    local_1c = (uint)*(byte *)((int)param_4 + 0xe);
  }
  else {
    if (*(char *)((int)param_4 + 9) != '\0') {
      param_5 = *(char *)((int)param_4 + 9);
    }
    if (param_5 == '\x03') {
      iVar4 = (iVar1 - param_3) / 2;
      iVar3 = (iVar1 - param_3) - iVar4;
    }
    else {
      if (param_5 != '\x02') {
        if (param_5 == '\x01') {
          iVar3 = iVar1 - param_3;
        }
        goto LAB_00413b69;
      }
      iVar4 = iVar1 - param_3;
      iVar3 = 0;
    }
    local_1c = (uint)*(byte *)((int)param_4 + 0xe);
    if (0 < iVar4) {
      iVar1 = local_1c * 2;
      uVar2 = iVar4 + 1;
      do {
        uVar5 = FUN_0040bb79((undefined2 *)(param_4 + 4),(undefined2 *)((int)(param_4 + 4) + iVar1),
                             param_2);
        param_2 = (undefined4 *)((ulonglong)uVar5 >> 0x20);
        uVar2 = uVar2 - 1;
      } while (1 < uVar2);
    }
  }
  FUN_00413972(param_6,&local_18,param_2);
  if (0 < iVar3) {
    iVar1 = local_1c * 2;
    uVar2 = iVar3 + 1;
    do {
      uVar5 = FUN_0040bb79((undefined2 *)(param_4 + 4),(undefined2 *)((int)param_4 + iVar1 + 0x10),
                           local_18);
      local_18 = (undefined4 *)((ulonglong)uVar5 >> 0x20);
      uVar2 = uVar2 - 1;
    } while (1 < uVar2);
  }
  *param_1 = local_18;
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_1c);
  }
  return param_1;
}

