/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140114f97 */

void FUN_140114f97(void)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  char *local_58;
  undefined8 local_50;
  code *pcStack_48;
  undefined8 local_40;
  code *pcStack_38;
  code *local_30;
  undefined1 *puStack_28;
  code *local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  local_20 = (code *)0x0;
  uStack_18 = 0;
  local_30 = (code *)0x0;
  puStack_28 = (undefined1 *)0x0;
  local_40 = 0;
  pcStack_38 = (code *)0x0;
  local_50 = 0;
  pcStack_48 = (code *)0x0;
  local_58 = "Table";
  uVar1 = FUN_140077ff5("Table",0,0);
  local_50 = CONCAT44(local_50._4_4_,uVar1);
  pcStack_48 = FUN_140115041;
  pcStack_38 = FUN_1401150c5;
  local_30 = FUN_140115172;
  puStack_28 = &LAB_14011540a;
  local_20 = FUN_140115468;
  FUN_14007efae(&local_58);
  if (DAT_140f17b40 == (local_10 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_10 ^ (ulonglong)auStack_78);
}

