/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041cf0d */

int __cdecl FUN_0041cf0d(int *param_1,uint *param_2,uint *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_1c;
  *param_3 = 0;
  if (param_1 == (int *)0x0) {
    iVar4 = 0x21;
    goto LAB_0041cffe;
  }
  iVar4 = 6;
  if (param_2 == (uint *)0x0) goto LAB_0041cffe;
  iVar3 = *param_1;
  uVar2 = *param_2 & 7;
  if (uVar2 == 4) {
    local_1c = iVar3;
    piVar1 = FUN_0041c507(iVar3,0x28,&local_18);
    iVar4 = local_18;
    if (local_18 != 0) goto LAB_0041cffe;
    piVar1[7] = local_1c;
    iVar4 = FUN_0042ef1c(piVar1,(LPCSTR)param_2[3]);
    if (iVar4 != 0) {
      FUN_0041c607(local_1c,(int)piVar1);
      goto LAB_0041cffe;
    }
  }
  else {
    if (uVar2 == 2) {
      piVar1 = (int *)param_2[4];
      if (piVar1 == (int *)0x0) goto LAB_0041cfa7;
    }
    else {
      if (uVar2 != 1) {
LAB_0041cfa7:
        if (((*param_2 & 2) != 0) && (param_2[4] != 0)) {
          FUN_0041d043(param_2[4]);
        }
        goto LAB_0041cffe;
      }
      local_1c = iVar3;
      piVar1 = FUN_0041c507(iVar3,0x28,&local_18);
      iVar4 = local_18;
      if (local_18 != 0) goto LAB_0041cffe;
      FUN_0041d023(piVar1,param_2[1],param_2[2]);
      iVar3 = local_1c;
    }
    piVar1[7] = iVar3;
  }
  *param_3 = (uint)piVar1;
  iVar4 = 0;
LAB_0041cffe:
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_1c)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_1c);
}

