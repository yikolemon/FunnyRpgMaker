/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007794a */

void FUN_18007794a(longlong param_1)

{
  char cVar1;
  undefined1 local_e8 [56];
  undefined8 local_b0;
  char *local_a8;
  char *local_a0;
  char *local_98;
  undefined8 local_90;
  undefined1 local_88 [32];
  ulonglong local_68 [4];
  undefined1 local_48 [28];
  undefined4 local_2c;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_68[0] = local_68[0] & 0xffffffff00000000;
  FUN_180077ad8(param_1 + 0x10,local_68);
  local_68[0] = 0xffffffffffffffff;
  FUN_18007750c(param_1,local_48,local_68);
  cVar1 = FUN_18007a0f2(local_48,(undefined4 *)(param_1 + 0xc));
  if (cVar1 != '\0') {
    DAT_180417cb8 = 1;
    FUN_1800775e0(param_1 + 0x10,local_48);
    DAT_180401868 = 0;
    FUN_180004cea(local_48);
    return;
  }
  local_2c = *(undefined4 *)(param_1 + 0xc);
  local_b0 = 0x5c0000028d;
  local_a8 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\FileCoder.hpp"
  ;
  local_a0 = "void __cdecl FileCoder::decryptV3_5(void)";
  FUN_180072a20(local_88);
  local_98 = "{}Failed to decrypt ProV3.5 data for file type {}";
  local_90 = 0x31;
  FUN_18007a930(local_68,&local_98,local_88,&local_2c);
  FUN_18006f972(local_e8,local_68);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_e8,&DAT_1803a63b0);
}

