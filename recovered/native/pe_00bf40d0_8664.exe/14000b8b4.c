/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000b8b4 */

ushort * FUN_14000b8b4(ushort *param_1,ushort *param_2,longlong *param_3)

{
  ushort uVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  uVar1 = *param_1;
  if ((uVar1 == 0x7d) || (uVar1 == 0x3a)) {
    uVar2 = *(ulonglong *)(*param_3 + 0x18);
    if ((longlong)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14000b455(0x14011ae73);
    }
    *(ulonglong *)(*param_3 + 0x18) = uVar2 + 1;
LAB_14000b94d:
    param_3[1] = uVar2;
    if (DAT_14012ea80 == (local_18 ^ (ulonglong)auStack_48)) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_18 ^ (ulonglong)auStack_48);
  }
  if ((ushort)(uVar1 - 0x30) < 10) {
    local_1c = 0;
    if (uVar1 == 0x30) {
      param_1 = param_1 + 1;
    }
    else {
      param_1 = FUN_14000f3e5(param_1,param_2,&local_1c);
    }
    if ((param_1 != param_2) && ((*param_1 == 0x3a || (*param_1 == 0x7d)))) {
      if (0 < *(longlong *)(*param_3 + 0x18)) {
                    /* WARNING: Subroutine does not return */
        FUN_14000b455(0x14011ae42);
      }
      uVar2 = (ulonglong)local_1c;
      *(undefined8 *)(*param_3 + 0x18) = 0xffffffffffffffff;
      goto LAB_14000b94d;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_14000b455(0x14011bf67);
}

