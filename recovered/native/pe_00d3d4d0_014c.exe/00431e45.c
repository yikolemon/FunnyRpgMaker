/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00431e45 */

int __fastcall FUN_00431e45(uint *param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_1c;
  local_18 = 0;
  uVar1 = *param_1;
  if (uVar1 < 0x12) {
    if (param_1[2] == 0) {
      param_1[2] = (uint)(param_1 + 7);
      param_1[1] = 0x12;
    }
  }
  else {
    uVar4 = param_1[1];
    if (uVar4 <= uVar1) {
      iVar6 = 0;
      iVar2 = 0x40;
      if (0x2e8ba2d < uVar4) goto LAB_00431e95;
      uVar3 = (uVar4 >> 2) + uVar4 + 4;
      uVar1 = 0x2e8ba2e;
      if (uVar3 < 0x2e8ba2e) {
        uVar1 = uVar3;
      }
      local_1c = uVar1;
      if ((uint *)param_1[2] == param_1 + 7) {
        iVar6 = 0;
        puVar5 = (uint *)FUN_0041c6b3(param_2,0x2c,0,uVar1,0,&local_18);
        param_1[2] = (uint)puVar5;
        iVar2 = local_18;
        if (local_18 != 0) goto LAB_00431e95;
        FUN_004878c0(puVar5,param_1 + 7,0x318);
      }
      else {
        uVar4 = FUN_0041c6b3(param_2,0x2c,uVar4,uVar1,(int)param_1[2],&local_18);
        param_1[2] = uVar4;
        iVar2 = local_18;
        if (local_18 != 0) goto LAB_00431e95;
      }
      param_1[1] = uVar1;
      uVar1 = *param_1;
    }
  }
  *param_1 = uVar1 + 1;
  iVar6 = uVar1 * 0x2c + param_1[2];
  iVar2 = 0;
LAB_00431e95:
  *param_3 = iVar6;
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_1c);
  }
  return iVar2;
}

