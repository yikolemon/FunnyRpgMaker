/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00412bad */

undefined4 * __cdecl
FUN_00412bad(undefined4 *param_1,undefined4 *param_2,int param_3,int *param_4,char param_5,
            undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  uint local_1c;
  undefined4 *local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_1c;
  iVar1 = *param_4;
  iVar3 = 0;
  if (iVar1 - param_3 == 0 || iVar1 < param_3) {
LAB_00412c04:
    local_1c = (uint)*(byte *)((int)param_4 + 0xe);
  }
  else {
    if (*(char *)((int)param_4 + 9) != '\0') {
      param_5 = *(char *)((int)param_4 + 9);
    }
    if (param_5 == '\x03') {
      iVar2 = (iVar1 - param_3) / 2;
      iVar3 = (iVar1 - param_3) - iVar2;
    }
    else {
      if (param_5 != '\x02') {
        if (param_5 == '\x01') {
          iVar3 = iVar1 - param_3;
        }
        goto LAB_00412c04;
      }
      iVar2 = iVar1 - param_3;
      iVar3 = 0;
    }
    local_1c = (uint)*(byte *)((int)param_4 + 0xe);
    if (0 < iVar2) {
      iVar1 = local_1c * 2;
      uVar4 = iVar2 + 1;
      do {
        uVar5 = FUN_0040bb79((undefined2 *)(param_4 + 4),(undefined2 *)(iVar1 + (int)(param_4 + 4)),
                             param_2);
        param_2 = (undefined4 *)((ulonglong)uVar5 >> 0x20);
        uVar4 = uVar4 - 1;
      } while (1 < uVar4);
    }
  }
  FUN_00410712(&local_18,param_2,(undefined2 *)*param_6,param_6[2] - (int)*param_6 >> 1);
  if (0 < iVar3) {
    iVar1 = local_1c * 2;
    uVar4 = iVar3 + 1;
    do {
      uVar5 = FUN_0040bb79((undefined2 *)(param_4 + 4),(undefined2 *)((int)param_4 + iVar1 + 0x10),
                           local_18);
      local_18 = (undefined4 *)((ulonglong)uVar5 >> 0x20);
      uVar4 = uVar4 - 1;
    } while (1 < uVar4);
  }
  *param_1 = local_18;
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_1c);
  }
  return param_1;
}

