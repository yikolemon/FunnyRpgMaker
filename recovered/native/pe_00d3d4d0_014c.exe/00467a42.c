/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00467a42 */

int __fastcall FUN_00467a42(uint *param_1,int param_2,int param_3,int param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_24 [3];
  byte local_21;
  uint *local_20;
  int *local_1c;
  uint *local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)auStack_24;
  local_21 = param_3 == -0x15;
  iVar5 = param_2 + -0x15;
  if (!(bool)local_21) {
    iVar5 = param_2;
  }
  uVar2 = 0;
  iVar6 = 0;
  if (0 < param_3) {
    iVar6 = param_3;
  }
  uVar1 = *param_1;
  if (uVar1 != 0) {
    piVar4 = (int *)(param_1[2] + 4);
    do {
      if ((piVar4[-1] == iVar5) && (*piVar4 == iVar6)) goto LAB_00467ad1;
      uVar2 = uVar2 + 1;
      piVar4 = piVar4 + 3;
    } while (uVar1 != uVar2);
  }
  local_20 = param_1;
  iVar3 = FUN_00467b2d(param_1,param_4,(int *)&local_1c);
  if (iVar3 == 0) {
    *local_1c = iVar5;
    local_1c[1] = iVar6;
    local_1c[2] = param_3 >> 0x1f & (uint)local_21 * 2 + 1;
    param_1 = local_20;
    uVar2 = uVar1;
LAB_00467ad1:
    iVar3 = FUN_00467b6b(param_1 + 3,param_4,(int *)&local_18);
    if (((iVar3 == 0) && (iVar3 = FUN_00467bc4(local_18,uVar2,param_4), iVar3 == 0)) &&
       (iVar3 = 0, param_5 != (uint *)0x0)) {
      *param_5 = uVar2;
    }
  }
  if (DAT_0050e8c0 != (local_14 ^ (uint)auStack_24)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)auStack_24);
  }
  return iVar3;
}

