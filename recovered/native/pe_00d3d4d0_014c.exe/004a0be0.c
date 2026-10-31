/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004a0be0 */

void FUN_004a0be0(uint param_1,int param_2,undefined8 param_3,double param_4,uint param_5)

{
  bool bVar1;
  undefined3 extraout_var;
  __acrt_ptd *p_Var2;
  int iVar3;
  uint local_90 [16];
  uint local_50;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&stack0xfffffff0;
  bVar1 = FUN_004a0d60(param_1,&param_4,param_5);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_50 = local_50 & 0xfffffffe;
    FUN_004a11c0(local_90,&param_5,param_1,param_2,(uint *)&param_3,(uint *)&param_4,0);
  }
  if ((param_1 & 0x20) == 0) {
    if ((param_1 & 8) == 0) {
      if ((param_1 & 4) == 0) {
        if ((param_1 & 1) == 0) {
          iVar3 = (param_1 & 2) * 2;
        }
        else {
          iVar3 = 3;
        }
      }
      else {
        iVar3 = 2;
      }
    }
    else {
      iVar3 = 1;
    }
  }
  else {
    iVar3 = 5;
  }
  bVar1 = FUN_00488d30();
  if (bVar1) {
    if (iVar3 != 0) {
      FUN_004a10c0(iVar3,param_2,(int)param_3,(int)((ulonglong)param_3 >> 0x20),0,0,SUB84(param_4,0)
                   ,(int)((ulonglong)param_4 >> 0x20));
                    /* WARNING: Subroutine does not return */
      FUN_0047f2c0(local_14 ^ (uint)&stack0xfffffff0);
    }
  }
  else if (iVar3 == 1) {
    p_Var2 = FUN_0048f66d();
    *(undefined4 *)p_Var2 = 0x21;
  }
  else if ((iVar3 == 2) || (iVar3 == 3)) {
    p_Var2 = FUN_0048f66d();
    *(undefined4 *)p_Var2 = 0x22;
  }
  FUN_004a1510();
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&stack0xfffffff0);
}

