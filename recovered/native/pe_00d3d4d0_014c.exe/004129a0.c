/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004129a0 */

void __cdecl
FUN_004129a0(undefined4 *param_1,char *param_2,char *param_3,char *param_4,int param_5,
            undefined2 param_6,int param_7,undefined4 *param_8)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  char *local_24;
  int local_20;
  undefined4 *puStack_1c;
  undefined4 *local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_24;
  if (param_7 < 1) {
    FUN_0040c483(&local_18,param_2,param_3,param_8);
  }
  else {
    iVar7 = 0;
    iVar3 = 0;
    iVar4 = param_7;
    pcVar5 = param_4;
    do {
      iVar3 = iVar3 + *pcVar5;
      pcVar1 = pcVar5 + 1;
      pcVar6 = pcVar1;
      if (pcVar1 == param_4 + param_5) {
        pcVar6 = pcVar5;
      }
      iVar7 = iVar7 + (uint)(pcVar1 == param_4 + param_5);
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar6;
    } while (iVar4 != 0);
    pcVar5 = param_3 + -iVar3;
    FUN_0040c483(&local_18,param_2,pcVar5,param_8);
    iVar4 = param_7 + 1;
    do {
      pcVar6 = pcVar6 + -(uint)(iVar7 < 1);
      iVar3 = local_18[2];
      uVar2 = iVar3 + 1;
      local_24 = pcVar5;
      local_20 = iVar4;
      if ((uint)local_18[3] < uVar2) {
        (**(code **)*local_18)(uVar2);
        iVar3 = local_18[2];
        uVar2 = iVar3 + 1;
      }
      pcVar5 = local_24;
      local_18[2] = uVar2;
      *(undefined2 *)(local_18[1] + iVar3 * 2) = param_6;
      iVar7 = iVar7 - (uint)(0 < iVar7);
      FUN_0040c483(&puStack_1c,local_24,local_24 + *pcVar6,local_18);
      pcVar5 = pcVar5 + *pcVar6;
      iVar4 = local_20 + -1;
      local_18 = puStack_1c;
    } while (1 < iVar4);
  }
  *param_1 = local_18;
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_24)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_24);
  }
  return;
}

