/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801df8fe */

void FUN_1801df8fe(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_98;
  cVar1 = FUN_1801d3d29(param_2);
  if ((cVar1 == '\0') && (cVar1 = FUN_1801d3d1c(param_2), cVar1 != '\0')) {
    uVar2 = FUN_18019efc0(param_2);
    uVar2 = FUN_1801d345e(param_2 + 0x90,uVar2);
    FUN_18019ef94(&local_38,uVar2);
    local_78 = local_38;
    uStack_74 = uStack_34;
    uStack_70 = uStack_30;
    uStack_6c = uStack_2c;
    local_68 = local_28;
    uStack_64 = uStack_24;
    uStack_60 = uStack_20;
    uStack_5c = uStack_1c;
    FUN_180234a2d(local_58);
    FUN_18019efc0(local_58);
  }
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_98)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_98);
}

