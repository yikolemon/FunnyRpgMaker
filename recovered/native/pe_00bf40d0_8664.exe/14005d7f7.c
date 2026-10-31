/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005d7f7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14005d7f7(longlong *param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined1 auStack_38 [32];
  undefined1 local_18 [4];
  byte local_14;
  ulonglong local_10;
  
  local_10 = DAT_14012ea80 ^ (ulonglong)auStack_38;
  if (param_2 < 0x100) {
    puVar2 = &DAT_1400f8e10;
    if ((param_2 & 4) == 0) {
      puVar2 = &DAT_1400f8e30;
    }
    if (DAT_14012ea80 == (local_10 ^ (ulonglong)auStack_38)) {
      FUN_1400214cf(param_1,(longlong)puVar2,(longlong)param_3);
      return;
    }
  }
  else {
    iVar1 = FUN_1400214cf(param_1,0x1400f8e50,(longlong)local_18);
    if (iVar1 == 0) {
      *param_3 = CONCAT26((ushort)local_18[3] + _UNK_1400f8f06,
                          CONCAT24((ushort)local_18[2] + _UNK_1400f8f04,
                                   CONCAT22((ushort)local_18[1] + _UNK_1400f8f02,
                                            (ushort)local_18[0] + _DAT_1400f8f00)));
      *(ushort *)(param_3 + 1) = local_14 - 0x80;
      *(undefined2 *)((longlong)param_3 + 10) = 0;
    }
    if (DAT_14012ea80 == (local_10 ^ (ulonglong)auStack_38)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_10 ^ (ulonglong)auStack_38);
}

