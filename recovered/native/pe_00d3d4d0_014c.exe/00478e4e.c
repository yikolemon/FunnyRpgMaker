/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00478e4e */

int __fastcall FUN_00478e4e(int param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *local_40;
  undefined8 *local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  
  local_10 = DAT_0050e8c0 ^ (uint)&local_40;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_28 = *(undefined8 *)(param_2 + 4);
  FUN_00479125((undefined8 *)&local_38);
  if (param_3 < 3) {
    iVar1 = FUN_004786b8(param_1,&local_3c);
    if (iVar1 == 0) {
      iVar1 = FUN_004786b8(param_1,&local_40);
      if (iVar1 == 0) {
        *local_3c = CONCAT44(uStack_34,local_38);
        *(undefined4 *)((int)local_3c + 0xc) = local_28._4_4_;
        *(undefined4 *)(local_3c + 1) = (undefined4)local_28;
        *(undefined4 *)(local_3c + 4) = 1;
        local_40[1] = local_28._4_4_;
        *local_40 = (undefined4)local_28;
        local_40[3] = local_14;
        local_40[2] = local_18;
        local_40[8] = 1;
        *(undefined4 **)((int)local_3c + 0x24) = local_40;
        local_40[9] = *param_4;
        *param_4 = local_3c;
        iVar1 = 0;
      }
    }
  }
  else {
    iVar1 = FUN_00478e4e(param_1,&local_38,param_3 >> 1,param_4);
    if (iVar1 == 0) {
      iVar1 = FUN_00478e4e(param_1,(undefined4 *)&local_28,param_3 >> 1,param_4);
    }
  }
  if (DAT_0050e8c0 == (local_10 ^ (uint)&local_40)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_10 ^ (uint)&local_40);
}

