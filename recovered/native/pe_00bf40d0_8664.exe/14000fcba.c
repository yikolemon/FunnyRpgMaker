/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000fcba */

ushort * FUN_14000fcba(ushort *param_1,ushort *param_2,longlong *param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [44];
  uint local_3c;
  char local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14012ea80 ^ (ulonglong)auStack_68;
  uVar1 = *param_1;
  if ((uVar1 == 0x7d) || (uVar1 == 0x3a)) {
    puVar3 = (undefined8 *)*param_3;
    FUN_14000fe0c((longlong)puVar3,local_38);
LAB_14000fd5b:
    uVar2 = FUN_14000fda1((undefined8 *)local_38);
    *(undefined4 *)*puVar3 = uVar2;
    if (DAT_14012ea80 == (local_20 ^ (ulonglong)auStack_68)) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_20 ^ (ulonglong)auStack_68);
  }
  if ((ushort)(uVar1 - 0x30) < 10) {
    local_3c = 0;
    if (uVar1 == 0x30) {
      param_1 = param_1 + 1;
    }
    else {
      param_1 = FUN_14000f3e5(param_1,param_2,&local_3c);
    }
    if ((param_1 != param_2) && ((*param_1 == 0x3a || (*param_1 == 0x7d)))) {
      puVar3 = (undefined8 *)*param_3;
      FUN_14000feb0((longlong)puVar3,local_38,(ulonglong)local_3c);
      goto LAB_14000fd5b;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_14000b455(0x14011bf67);
}

