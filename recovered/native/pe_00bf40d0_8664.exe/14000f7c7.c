/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000f7c7 */

ushort * FUN_14000f7c7(longlong param_1,ushort *param_2,longlong *param_3)

{
  ushort *puVar1;
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  puVar1 = (ushort *)(param_1 + 2);
  if (puVar1 != param_2) {
    if ((ushort)(*puVar1 - 0x30) < 10) {
      local_28 = (longlong *)((ulonglong)local_28 & 0xffffffff00000000);
      puVar1 = FUN_14000f3e5(puVar1,param_2,(uint *)&local_28);
      if ((*(byte *)(param_3 + 3) < 0xb) && ((0x47eU >> (*(byte *)(param_3 + 3) & 0x1f) & 1) != 0))
      {
                    /* WARNING: Subroutine does not return */
        FUN_14000b455(0x14011bf91);
      }
      *(undefined4 *)(*param_3 + 4) = local_28._0_4_;
    }
    else {
      if (*puVar1 != 0x7b) goto LAB_14000f88f;
      puVar1 = (ushort *)(param_1 + 4);
      if (puVar1 != param_2) {
        local_28 = param_3;
        puVar1 = FUN_14000feed(puVar1,param_2,&local_28);
      }
      if ((puVar1 == param_2) || (*puVar1 != 0x7d)) {
                    /* WARNING: Subroutine does not return */
        FUN_14000b455(0x14011bf67);
      }
      puVar1 = puVar1 + 1;
    }
    if (DAT_14012ea80 == (local_20 ^ (ulonglong)auStack_48)) {
      return puVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_20 ^ (ulonglong)auStack_48);
  }
LAB_14000f88f:
                    /* WARNING: Subroutine does not return */
  FUN_14000b455(0x14011be7e);
}

