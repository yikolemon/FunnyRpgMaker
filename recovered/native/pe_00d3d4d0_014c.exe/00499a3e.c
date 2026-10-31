/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00499a3e */

void FUN_00499a3e(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int local_24;
  int *local_20 [2];
  char local_18;
  CHAR local_14;
  CHAR local_13;
  undefined1 local_12;
  WORD local_10 [2];
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  FUN_0048847b(&local_24,param_3);
  if ((param_1 < -1) || (0xff < param_1)) {
    if (*(short *)(*local_20[0] + (param_1 >> 8 & 0xffU) * 2) < 0) {
      local_12 = 0;
      iVar1 = 2;
      local_14 = (CHAR)((uint)param_1 >> 8);
      local_13 = (CHAR)param_1;
    }
    else {
      local_13 = '\0';
      iVar1 = 1;
      local_14 = (CHAR)param_1;
    }
    local_10[0] = 0;
    local_10[1] = 0;
    local_c = (undefined *)((uint)local_c._2_2_ << 0x10);
    iVar1 = FUN_00497350((int *)local_20,1,&local_14,iVar1,local_10,local_20[0][2],1);
    if (iVar1 == 0) {
      if (local_18 != '\0') {
        *(uint *)(local_24 + 0x350) = *(uint *)(local_24 + 0x350) & 0xfffffffd;
      }
      goto LAB_00499afd;
    }
  }
  if (local_18 != '\0') {
    *(uint *)(local_24 + 0x350) = *(uint *)(local_24 + 0x350) & 0xfffffffd;
  }
LAB_00499afd:
                    /* WARNING: Subroutine does not return */
  local_c = &UNK_00499b07;
  FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
}

