/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c91ce */

void FUN_1801c91ce(void)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_78;
  lVar1 = FUN_180107ef9();
  *(code **)(lVar1 + 0x108) = FUN_1801c946f;
  *(code **)(lVar1 + 0x110) = FUN_1801c95da;
  *(code **)(lVar1 + 0x118) = FUN_1801c962f;
  *(code **)(lVar1 + 0x120) = FUN_1801c974b;
  *(undefined1 **)(lVar1 + 0x128) = &LAB_1801c97e2;
  local_38 = 0;
  uStack_2c = 0;
  local_28 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0x1c;
  uStack_40 = 0x100000000;
  uStack_34 = 0x20;
  uStack_30 = 1;
  uStack_20 = 1;
  local_18 = 0;
  FUN_1801c93b9(&local_58,1);
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_78);
}

