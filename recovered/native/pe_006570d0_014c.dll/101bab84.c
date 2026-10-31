/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101bab84 */

void FUN_101bab84(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 local_18;
  uint local_10;
  
  uVar3 = DAT_1038efa0;
  local_10 = DAT_10388d00 ^ (uint)&local_18;
  if (DAT_1038ef9c == '\x01') {
    puVar1 = (undefined4 *)FUN_1010ad36();
    local_18 = 0;
    FUN_10111d56(puVar1 + 8,0,&local_18);
    FUN_10107cf6(puVar1 + 10,0);
    FUN_10111e7d(*puVar1);
    FUN_100fd0a3(3,0);
    FUN_100fd0a3(4,0);
    uVar2 = 0xa20a7;
  }
  else {
    uVar3 = DAT_1038efa0 & 0xfffffff7;
    uVar2 = 0x80000;
  }
  if (DAT_1038ef9d == '\0') {
    local_18 = 0;
    FUN_100fd3bc(2,&local_18);
  }
  FUN_10107d2b("Window with a DockSpace",&DAT_103a33dd,uVar2);
  if (DAT_1038ef9d == '\0') {
    FUN_100fd4c4(1);
  }
  if (DAT_1038ef9c == '\x01') {
    FUN_100fd4c4(2);
  }
  uVar2 = FUN_10113594("MyDockSpace");
  local_18 = 0;
  FUN_1011c2a7(uVar2,&local_18,uVar3,0);
  FUN_1010ad44();
  if (DAT_10388d00 == (local_10 ^ (uint)&local_18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

