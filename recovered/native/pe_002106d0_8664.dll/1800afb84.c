/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800afb84 */

void FUN_1800afb84(longlong param_1)

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
  local_70 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG/WolfRPG.hpp"
  ;
  local_68 = "void __cdecl WolfRPG::checkValid(void) const";
  FUN_18008148e(local_30);
  local_60 = L"{}Invalid WolfRPG object";
  local_58 = 0x18;
  FUN_18007e9c9(local_50,&local_60,local_30);
  FUN_18008150c(local_b0,local_50);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_b0,&DAT_1803a63b0);
}

