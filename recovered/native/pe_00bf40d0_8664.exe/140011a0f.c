/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140011a0f */

ushort * FUN_140011a0f(undefined8 *param_1,int *param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined7 extraout_var;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  undefined1 auStack_88 [40];
  ushort *local_60;
  ushort *local_58;
  uint local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStack_88;
  iVar1 = *param_2;
  puVar5 = (ushort *)*param_1 + param_1[1];
  FUN_140011c62(&local_60,(ushort *)*param_1,puVar5);
  local_40 = 0;
  if (local_60 == local_58) {
    iVar6 = 0;
  }
  else {
    iVar4 = 0;
    while( true ) {
      if ((-1 < iVar1) && (iVar6 = iVar1, iVar4 == iVar1)) goto LAB_140011ab6;
      bVar2 = FUN_140011cd9(local_48);
      uVar3 = (uint)CONCAT71(extraout_var,bVar2);
      iVar6 = iVar4;
      if ((int)(uVar3 ^ 0x7fffffff) < iVar4) break;
      iVar4 = uVar3 + iVar4;
      if (((-1 < iVar1) && (iVar1 < iVar4)) ||
         (FUN_140011d4e((longlong *)&local_60), iVar6 = iVar4, local_60 == local_58))
      goto LAB_140011ab6;
    }
    if (iVar1 < 0) {
      *param_2 = 0x7fffffff;
      goto LAB_140011abe;
    }
  }
LAB_140011ab6:
  *param_2 = iVar6;
  puVar5 = local_60;
LAB_140011abe:
  if (DAT_14012ea80 != (local_38 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_38 ^ (ulonglong)auStack_88);
  }
  return puVar5;
}

