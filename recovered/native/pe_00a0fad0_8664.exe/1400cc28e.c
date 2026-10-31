/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400cc28e */

void FUN_1400cc28e(longlong param_1)

{
  undefined1 local_a0 [56];
  undefined8 local_68;
  char *local_60;
  char *local_58;
  undefined1 local_50 [32];
  undefined1 local_30 [32];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 0x310) != '\0') {
    return;
  }
  local_68 = 0x1b0000009a;
  local_60 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG/WolfRPG.hpp"
  ;
  local_58 = "void __cdecl WolfRPG::checkValid(void) const";
  FUN_140087af8(local_30);
  FUN_140052f9e(local_50,local_30,L"Invalid WolfRPG object");
  FUN_140087b76(local_a0,local_50);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_a0,&DAT_1401a5720);
}

