/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00412ac1 */

ushort * __cdecl FUN_00412ac1(ushort *param_1,int param_2,int *param_3)

{
  int iVar1;
  byte bVar2;
  undefined3 extraout_var;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  ushort *local_2c;
  ushort *local_28;
  ushort *local_24;
  undefined4 local_20;
  uint local_1c;
  undefined2 local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_2c;
  iVar1 = *param_3;
  local_2c = param_1 + param_2;
  local_28 = param_1;
  local_20 = 0;
  local_1c = 0;
  local_24 = local_2c;
  if (param_2 != 0) {
    uVar6 = FUN_00410f09(param_1,local_2c,&local_1c);
    local_20 = (undefined4)uVar6;
  }
  local_18 = 0;
  iVar5 = 0;
  if (local_28 != local_24) {
    iVar4 = 0;
    while( true ) {
      if ((-1 < iVar1) && (iVar5 = iVar1, iVar4 == iVar1)) goto LAB_00412b71;
      bVar2 = FUN_00412cc1(local_1c);
      iVar5 = iVar4;
      if ((int)(CONCAT31(extraout_var,bVar2) ^ 0x7fffffff) < iVar4) break;
      iVar4 = CONCAT31(extraout_var,bVar2) + iVar4;
      if (((-1 < iVar1) && (iVar1 < iVar4)) ||
         (FUN_00412d2e((int *)&local_28), iVar5 = iVar4, local_28 == local_24)) goto LAB_00412b71;
    }
    if (iVar1 < 0) {
      *param_3 = 0x7fffffff;
      puVar3 = local_2c;
      goto LAB_00412b7b;
    }
  }
LAB_00412b71:
  *param_3 = iVar5;
  puVar3 = local_28;
LAB_00412b7b:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_2c)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_2c);
  }
  return puVar3;
}

