/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802101bb */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802101bb(undefined8 param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined1 auStack_38 [32];
  undefined1 local_18 [4];
  byte local_14;
  ulonglong local_10;
  
  local_10 = (ulonglong)DAT_180402640 ^ (ulonglong)auStack_38;
  if (param_2 < 0x100) {
    puVar2 = &DAT_18033bce0;
    if ((param_2 & 4) == 0) {
      puVar2 = &DAT_18033bd00;
    }
    if (DAT_180402640 == (undefined *)(local_10 ^ (ulonglong)auStack_38)) {
      FUN_1801cf0cc(param_1,puVar2,param_3);
      return;
    }
  }
  else {
    iVar1 = FUN_1801cf0cc(param_1,&DAT_18033bd20,local_18);
    if (iVar1 == 0) {
      *param_3 = CONCAT26((ushort)local_18[3] + _UNK_18033bdd6,
                          CONCAT24((ushort)local_18[2] + _UNK_18033bdd4,
                                   CONCAT22((ushort)local_18[1] + _UNK_18033bdd2,
                                            (ushort)local_18[0] + _DAT_18033bdd0)));
      *(ushort *)(param_3 + 1) = local_14 - 0x80;
      *(undefined2 *)((longlong)param_3 + 10) = 0;
    }
    puVar2 = DAT_180402640;
    if (DAT_180402640 == (undefined *)(local_10 ^ (ulonglong)auStack_38)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_38,puVar2);
}

