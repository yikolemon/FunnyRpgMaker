/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c3f0d */

void FUN_1801c3f0d(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  uVar3 = DAT_180408ea4;
  local_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  if (DAT_180408ea0 == '\x01') {
    puVar2 = (undefined4 *)FUN_18010f8ee();
    local_20 = 0;
    FUN_180116a8b(puVar2 + 8,0);
    FUN_18010ca41(puVar2 + 10,0);
    FUN_180116b67(*puVar2);
    FUN_180101870(3,0);
    FUN_180101870(4,0);
    uVar1 = 0xa20a7;
  }
  else {
    uVar3 = DAT_180408ea4 & 0xfffffff7;
    uVar1 = 0x80000;
  }
  if (DAT_180408ea1 == '\0') {
    local_20 = 0;
    FUN_180101bbb(2);
  }
  FUN_18010ca66("Window with a DockSpace",&DAT_18041f1e5,uVar1);
  if (DAT_180408ea1 == '\0') {
    FUN_180101ccb(1);
  }
  if (DAT_180408ea0 == '\x01') {
    FUN_180101ccb(2);
  }
  uVar1 = FUN_18011837d("MyDockSpace");
  local_20 = 0;
  FUN_180121774(uVar1,&local_20,uVar3,0);
  FUN_18010f900();
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_48);
}

