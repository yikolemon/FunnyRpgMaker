/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400bbc63 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400bbc63(void)

{
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined1 local_44 [4];
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined1 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_18 = local_44;
  local_58 = _DAT_140165b18;
  uStack_50 = _UNK_140165b20;
  local_48 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  local_40 = &local_58;
  FUN_14005872a(&local_38,0x14);
  local_18 = (undefined1 *)CONCAT44(local_18._4_4_,0x10);
  FUN_14007c15e(&DAT_1401d4850,&local_38);
  FUN_140016e5c(&local_38);
  FUN_1400d3740(FUN_1400bbd11);
  return;
}

