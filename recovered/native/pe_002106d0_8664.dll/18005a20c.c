/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005a20c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18005a20c(void)

{
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  ulonglong *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_68;
  local_48 = &local_38;
  local_18 = _DAT_1802b7130;
  uStack_10 = _UNK_1802b7138;
  local_28 = _DAT_1802b7120;
  uStack_20 = _UNK_1802b7128;
  local_38 = _DAT_1802b7110;
  uStack_34 = _UNK_1802b7114;
  uStack_30 = _UNK_1802b7118;
  uStack_2c = _UNK_1802b711c;
  local_40 = &local_8;
  FUN_18005a294(&DAT_180417b68);
  FUN_18023d710(FUN_18005a333);
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_68);
}

