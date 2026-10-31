/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00478f34 */

int __fastcall FUN_00478f34(int param_1,int *param_2,uint param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int local_58;
  int *local_54;
  undefined8 *local_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_58;
  local_4c = *param_2;
  iStack_48 = param_2[1];
  iStack_44 = param_2[2];
  iStack_40 = param_2[3];
  local_3c = param_2[4];
  iStack_38 = param_2[5];
  iStack_34 = param_2[6];
  iStack_30 = param_2[7];
  uVar4 = param_2[6] + local_4c * 2 + param_2[2] * -3;
  uVar3 = -uVar4;
  if ((int)uVar3 < 0) {
    uVar3 = uVar4;
  }
  local_58 = param_1;
  if (uVar3 < 0x10) {
    uVar4 = param_2[7] + param_2[1] * 2 + iStack_40 * -3;
    uVar3 = -uVar4;
    if ((int)uVar3 < 0) {
      uVar3 = uVar4;
    }
    if (0xf < uVar3) goto LAB_00478fdf;
    uVar4 = param_2[6] * 2 + local_4c + local_3c * -3;
    uVar3 = -uVar4;
    if ((int)uVar3 < 0) {
      uVar3 = uVar4;
    }
    if (0xf < uVar3) goto LAB_00478fdf;
    uVar4 = param_2[1] + param_2[7] * 2 + param_2[5] * -3;
    uVar3 = -uVar4;
    if ((int)uVar3 < 0) {
      uVar3 = uVar4;
    }
    if (0xf < uVar3) goto LAB_00478fdf;
    FUN_0047918d((undefined8 *)&local_4c);
  }
  else {
LAB_00478fdf:
    FUN_0047918d((undefined8 *)&local_4c);
    iVar1 = local_58;
    if (2 < param_3) {
      iVar2 = FUN_00478f34(local_58,&local_4c,param_3 >> 1,param_4);
      if (iVar2 == 0) {
        iVar2 = FUN_00478f34(iVar1,&iStack_34,param_3 >> 1,param_4);
      }
      goto LAB_00479091;
    }
  }
  iVar1 = local_58;
  iVar2 = FUN_004786b8(local_58,&local_50);
  if (iVar2 == 0) {
    iVar2 = FUN_004786b8(iVar1,&local_54);
    if (iVar2 == 0) {
      *local_50 = CONCAT44(iStack_48,local_4c);
      *(int *)((int)local_50 + 0xc) = iStack_30;
      *(int *)(local_50 + 1) = iStack_34;
      *(undefined4 *)(local_50 + 4) = 1;
      local_54[1] = iStack_30;
      *local_54 = iStack_34;
      local_54[3] = local_18;
      local_54[2] = local_1c;
      local_54[8] = 1;
      *(int **)((int)local_50 + 0x24) = local_54;
      local_54[9] = *param_4;
      *param_4 = (int)local_50;
      iVar2 = 0;
    }
  }
LAB_00479091:
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_58)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_58);
}

