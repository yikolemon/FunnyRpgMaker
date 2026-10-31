/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402c1054 */

void FUN_1402c1054(longlong param_1)

{
  undefined1 local_b0 [56];
  undefined8 local_78;
  char *local_70;
  char *local_68;
  wchar_t *local_60;
  undefined8 local_58;
  undefined1 local_50 [32];
  undefined1 local_30 [32];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 0x310) != '\0') {
    return;
  }
  local_78 = 0x440000009a;
  local_70 = "ableFlags_HighlightHoveredColumn";
  local_68 = "#Basket";
  FUN_14029295e(local_30);
  local_60 = 
  L"e import table size is marked as 0. This is an error.If it is not repaired, the launched program will not work properly, Detours has automatically repaired its import table size for you! ! !]\r\n"
  ;
  local_58 = 0x18;
  FUN_14028fe99(local_50,&local_60,local_30);
  FUN_1402929dc(local_b0,local_50);
                    /* WARNING: Subroutine does not return */
  FUN_14047ea80(local_b0,&DAT_1405b7880);
}

