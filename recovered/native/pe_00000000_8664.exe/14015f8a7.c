/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015f8a7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14015f8a7(undefined8 param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined1 auStack_38 [32];
  undefined1 local_18 [4];
  byte local_14;
  ulonglong local_10;
  
  local_10 = (ulonglong)DAT_140f17b40 ^ (ulonglong)auStack_38;
  if (param_2 < 0x100) {
    puVar2 = &DAT_140ea0050;
    if ((param_2 & 4) == 0) {
      puVar2 = &DAT_140ea0070;
    }
    if (DAT_140f17b40 == (undefined *)(local_10 ^ (ulonglong)auStack_38)) {
      FUN_14012e0a0(param_1,puVar2,param_3);
      return;
    }
  }
  else {
    iVar1 = FUN_14012e0a0(param_1,&DAT_140ea0090,local_18);
    if (iVar1 == 0) {
      *param_3 = CONCAT26((ushort)local_18[3] + _UNK_140ea0146,
                          CONCAT24((ushort)local_18[2] + _UNK_140ea0144,
                                   CONCAT22((ushort)local_18[1] + _UNK_140ea0142,
                                            (ushort)local_18[0] + _DAT_140ea0140)));
      *(ushort *)(param_3 + 1) = local_14 - 0x80;
      *(undefined2 *)((longlong)param_3 + 10) = 0;
    }
    puVar2 = DAT_140f17b40;
    if (DAT_140f17b40 == (undefined *)(local_10 ^ (ulonglong)auStack_38)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_10 ^ (ulonglong)auStack_38,puVar2);
}

