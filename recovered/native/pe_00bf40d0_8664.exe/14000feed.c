/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000feed */

ushort * FUN_14000feed(ushort *param_1,ushort *param_2,undefined8 *param_3)

{
  ushort uVar1;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  uVar1 = *param_1;
  if ((uVar1 == 0x7d) || (uVar1 == 0x3a)) {
    FUN_14000ffac((longlong *)*param_3);
LAB_14000ff73:
    if (DAT_14012ea80 == (local_20 ^ (ulonglong)auStack_48)) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_20 ^ (ulonglong)auStack_48);
  }
  if ((ushort)(uVar1 - 0x30) < 10) {
    local_24 = 0;
    if (uVar1 == 0x30) {
      param_1 = param_1 + 1;
    }
    else {
      param_1 = FUN_14000f3e5(param_1,param_2,&local_24);
    }
    if ((param_1 != param_2) && ((*param_1 == 0x3a || (*param_1 == 0x7d)))) {
      FUN_1400100fa((longlong *)*param_3,(ulonglong)local_24);
      goto LAB_14000ff73;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_14000b455(0x14011bf67);
}

