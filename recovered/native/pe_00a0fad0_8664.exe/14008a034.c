/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008a034 */

void FUN_14008a034(longlong param_1)

{
  char cVar1;
  undefined1 local_d0 [56];
  undefined8 local_98;
  char *local_90;
  char *local_88;
  undefined1 local_80 [32];
  ulonglong local_60 [4];
  undefined1 local_40 [24];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_60[0] = local_60[0] & 0xffffffff00000000;
  FUN_14008a1ac(param_1 + 0x10,local_60);
  local_60[0] = 0xffffffffffffffff;
  FUN_140089bf6(param_1,local_40,local_60);
  cVar1 = FUN_14007e26d(local_40,param_1 + 0xc);
  if (cVar1 != '\0') {
    DAT_1401cc8c6 = 1;
    FUN_140089cca(param_1 + 0x10,local_40);
    DAT_1401c9930 = 0;
    FUN_140016e5c(local_40);
    return;
  }
  local_98 = 0x1b0000027b;
  local_90 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG\\FileCoder.hpp"
  ;
  local_88 = "void __cdecl FileCoder::decryptV3_5(void)";
  FUN_140087f79(local_80);
  FUN_14000ed8c(local_60,local_80,"Failed to decrypt ProV3 data.");
  FUN_1400886d4(local_d0,local_60);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_d0,&DAT_1401a5720);
}

