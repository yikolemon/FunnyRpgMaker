/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0044dedf */

int __fastcall FUN_0044dedf(int *param_1,uint param_2,int *param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_1c;
  local_18 = 0;
  if ((param_1 == (int *)0x0) || ((uint)param_1[3] <= param_2)) {
    local_18 = 6;
    goto LAB_0044df3a;
  }
  local_1c = (int *)*param_1;
  iVar1 = param_1[7];
  if (iVar1 == 0) {
    local_18 = FUN_00420696((int)local_1c,param_1[2] + param_1[1] + *(byte *)(param_1 + 4) * param_2
                           );
    if ((local_18 != 0) || (uVar5 = FUN_0044e04a(param_1,&local_18), local_18 != 0))
    goto LAB_0044df3a;
    if (uVar5 == 0) {
      uVar5 = 0;
    }
    else {
      do {
        uVar4 = FUN_0044e04a(param_1,&local_18);
        if (uVar4 != 0) goto LAB_0044dfcc;
        param_2 = param_2 + 1;
      } while (param_2 < (uint)param_1[3]);
    }
  }
  else {
    uVar5 = *(uint *)(iVar1 + param_2 * 4);
    if (uVar5 == 0) {
      uVar5 = 0;
    }
    else {
      do {
        uVar4 = *(uint *)(iVar1 + 4 + param_2 * 4);
        if (uVar4 != 0) goto LAB_0044dfcc;
        param_2 = param_2 + 1;
      } while (param_1[3] != param_2);
    }
  }
  uVar2 = local_1c[1] + 1;
  uVar4 = 0;
LAB_0044dfb3:
  uVar3 = param_1[5];
  if (uVar2 - uVar4 < uVar3) goto LAB_0044dfd7;
LAB_0044dfdb:
  if ((uVar5 == 0) || (uVar2 = uVar4 - uVar5, uVar4 < uVar5 || uVar2 == 0)) {
    *param_3 = 0;
    *param_4 = 0;
  }
  else {
    *param_4 = uVar2;
    if (param_1[8] == 0) {
      local_18 = FUN_00420696((int)local_1c,(param_1[5] + uVar5) - 1);
      if (local_18 == 0) {
        local_18 = FUN_00420bb8(local_1c,uVar2,param_3);
      }
    }
    else {
      *param_3 = param_1[8] + uVar5 + -1;
    }
  }
LAB_0044df3a:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_1c);
  }
  return local_18;
LAB_0044dfcc:
  uVar2 = local_1c[1] + 1;
  if (uVar4 <= uVar2) goto LAB_0044dfb3;
  uVar3 = param_1[5];
LAB_0044dfd7:
  uVar4 = uVar2 - uVar3;
  goto LAB_0044dfdb;
}

