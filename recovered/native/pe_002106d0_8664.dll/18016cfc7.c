/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016cfc7 */

void FUN_18016cfc7(void)

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
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_78;
  local_20 = (code *)0x0;
  uStack_18 = 0;
  local_30 = (code *)0x0;
  puStack_28 = (undefined1 *)0x0;
  local_40 = 0;
  pcStack_38 = (code *)0x0;
  local_50 = 0;
  pcStack_48 = (code *)0x0;
  local_58 = "Table";
  uVar1 = FUN_1800fed39("Table",0,0);
  local_50 = CONCAT44(local_50._4_4_,uVar1);
  pcStack_48 = FUN_18016d071;
  pcStack_38 = FUN_18016d0f5;
  local_30 = FUN_18016d1a2;
  puStack_28 = &LAB_18016d43a;
  local_20 = FUN_18016d498;
  FUN_180105c96(&local_58);
  if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_78);
}

