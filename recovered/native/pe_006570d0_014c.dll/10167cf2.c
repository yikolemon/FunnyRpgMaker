/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10167cf2 */

void FUN_10167cf2(void)

{
  char *local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined4 local_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&local_2c;
  local_10 = 0;
  local_20 = 0;
  puStack_1c = (undefined1 *)0x0;
  puStack_18 = (undefined1 *)0x0;
  puStack_14 = (undefined1 *)0x0;
  local_2c = "Table";
  local_28 = FUN_100fa6c3("Table",0,0);
  local_24 = &LAB_10167d75;
  puStack_1c = &LAB_10167de5;
  puStack_18 = &LAB_10167e86;
  puStack_14 = &LAB_101680d4;
  local_10 = CONCAT44(local_10._4_4_,&LAB_10168125);
  FUN_1010126d(&local_2c);
  if (DAT_10388d00 == (local_8 ^ (uint)&local_2c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

