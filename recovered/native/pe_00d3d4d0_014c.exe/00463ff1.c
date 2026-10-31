/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00463ff1 */

void __fastcall
FUN_00463ff1(int *param_1,int *param_2,int *param_3,int param_4,undefined4 param_5,char param_6)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  byte bVar4;
  uint uVar5;
  undefined4 local_50;
  int *local_4c;
  int local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  int local_38;
  int local_34;
  int local_30 [2];
  int local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_50;
  local_1c = param_4;
  local_18 = param_5;
  uStack_44 = 0;
  local_48 = 0;
  piVar1 = param_1 + 0xb7f;
  piVar3 = param_1 + 0xb7d;
  if (param_1[0xb78] == 2) {
    piVar1 = param_1 + 0xb7b;
    piVar3 = param_1 + 0xb79;
  }
  uVar5 = (uint)(param_1[0xb78] != 2);
  local_4c = param_2;
  if ((param_1[uVar5 * 4 + 0xb7b] != *param_3) ||
     (local_50 = CONCAT31((int3)((uint)param_1[uVar5 * 4 + 0xb7b] >> 8),1), piVar1[1] != param_3[1])
     ) {
    uVar2 = FUN_00464454((int)param_1,piVar3,piVar1,param_3,&local_1c,&local_48);
    if ((char)uVar2 == '\0') {
      local_50 = CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
    else {
      *(ulonglong *)((int)param_1 + (uVar5 * 0x10 | 0x2dec)) = CONCAT44(uStack_44,local_48);
      local_50 = 0;
    }
  }
  piVar3 = local_4c;
  local_40 = *(undefined8 *)(param_1 + 0xb73);
  if (param_1[0xb78] == 4) {
    local_20 = 4;
    FUN_0046428c(param_1,(int)local_4c,&local_38,param_1[0xb7b],param_1[0xb7c]);
    FUN_0046428c(param_1,(int)piVar3,local_30,param_1[0xb7d],param_1[0xb7e]);
    FUN_0046428c(param_1,(int)piVar3,&local_28,param_1[0xb7f],param_1[0xb80]);
    (**(code **)(param_1[1] + 0xc))(param_1[1],&local_40);
    bVar4 = (byte)local_50;
  }
  else {
    bVar4 = (byte)local_50;
    if (param_1[0xb78] != 2) goto LAB_004641c2;
    local_20 = 2;
    piVar3 = param_1 + 0x3c9;
    if (param_6 == '\0') {
      piVar3 = local_4c;
    }
    FUN_0046428c(param_1,(int)piVar3,&local_38,param_1[0xb7b],param_1[0xb7c]);
    bVar4 = (byte)local_50;
    if (((int)local_40 == local_38) && (local_40._4_4_ == local_34)) goto LAB_004641c2;
    (**(code **)(param_1[1] + 4))(param_1[1],&local_40);
    local_28 = local_38;
    local_24 = local_34;
  }
  param_1[0xb73] = local_28;
  param_1[0xb74] = local_24;
LAB_004641c2:
  if ((param_6 == '\0' & (bVar4 ^ 1)) == 0) {
    piVar3 = param_1 + 0x3c9;
    if (param_6 == '\0') {
      piVar3 = local_4c;
    }
    FUN_0046428c(param_1,(int)piVar3,&local_38,*param_3,param_3[1]);
    if ((local_38 != param_1[0xb73]) || (local_34 != param_1[0xb74])) {
      local_20 = 2;
      local_40 = *(undefined8 *)(param_1 + 0xb73);
      (**(code **)(param_1[1] + 4))(param_1[1],&local_40);
      *(ulonglong *)(param_1 + 0xb73) = CONCAT44(local_34,local_38);
    }
  }
  if (bVar4 == 0) {
    *(ulonglong *)param_3 = CONCAT44(uStack_44,local_48);
  }
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_50)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_50);
  }
  return;
}

