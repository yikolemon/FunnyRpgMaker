/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041cefa */

int FUN_0041cefa(uint *param_1,uint *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *unaff_retaddr;
  int iStack_20;
  int iStack_1c;
  uint uStack_18;
  
  param_1[0x13] = (uint)param_2;
  FUN_00485b00((int)param_1);
  uStack_18 = DAT_0050e8c0 ^ (uint)&iStack_20;
  *param_2 = 0;
  if (unaff_retaddr == (int *)0x0) {
    iVar4 = 0x21;
    goto LAB_0041cffe;
  }
  iVar4 = 6;
  if (param_1 == (uint *)0x0) goto LAB_0041cffe;
  iVar3 = *unaff_retaddr;
  uVar2 = *param_1 & 7;
  if (uVar2 == 4) {
    iStack_20 = iVar3;
    piVar1 = FUN_0041c507(iVar3,0x28,&iStack_1c);
    iVar4 = iStack_1c;
    if (iStack_1c != 0) goto LAB_0041cffe;
    piVar1[7] = iStack_20;
    iVar4 = FUN_0042ef1c(piVar1,(LPCSTR)param_1[3]);
    if (iVar4 != 0) {
      FUN_0041c607(iStack_20,(int)piVar1);
      goto LAB_0041cffe;
    }
  }
  else {
    if (uVar2 == 2) {
      piVar1 = (int *)param_1[4];
      if (piVar1 == (int *)0x0) goto LAB_0041cfa7;
    }
    else {
      if (uVar2 != 1) {
LAB_0041cfa7:
        if (((*param_1 & 2) != 0) && (param_1[4] != 0)) {
          FUN_0041d043(param_1[4]);
        }
        goto LAB_0041cffe;
      }
      iStack_20 = iVar3;
      piVar1 = FUN_0041c507(iVar3,0x28,&iStack_1c);
      iVar4 = iStack_1c;
      if (iStack_1c != 0) goto LAB_0041cffe;
      FUN_0041d023(piVar1,param_1[1],param_1[2]);
      iVar3 = iStack_20;
    }
    piVar1[7] = iVar3;
  }
  *param_2 = (uint)piVar1;
  iVar4 = 0;
LAB_0041cffe:
  if (DAT_0050e8c0 == (uStack_18 ^ (uint)&iStack_20)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(uStack_18 ^ (uint)&iStack_20);
}

