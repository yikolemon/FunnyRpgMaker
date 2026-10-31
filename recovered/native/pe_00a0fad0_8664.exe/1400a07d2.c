/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400a07d2 */

void FUN_1400a07d2(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 local_e8 [56];
  undefined8 local_b0;
  char *local_a8;
  char *local_a0;
  char *local_98;
  undefined8 local_90;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  longlong local_48;
  longlong lStack_40;
  undefined8 local_38;
  int local_30;
  undefined4 local_2c;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  uVar1 = *(undefined4 *)(param_1 + 0x60);
  local_2c = uVar1;
  iVar3 = FUN_1400cfc64(uVar1);
  local_68[0] = 0;
  local_48 = 0;
  lStack_40 = 0;
  local_38 = 0;
  FUN_14008c1de(&local_48,(longlong)iVar3);
  local_30 = FUN_1400d15f1(*(undefined8 *)(param_1 + 0x180),local_48,uVar1,iVar3);
  if (local_30 < 1) {
    local_b0 = 0x52000000c6;
    local_a8 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG\\FileCoder.hpp"
    ;
    local_a0 = "void __cdecl FileCoder::Pack(void)";
    FUN_140087f79(local_88);
    local_98 = "{}LZ4 compression failed. Data size: {}";
    local_90 = 0x27;
    FUN_1400a0fc8(local_68,&local_98,local_88,&local_2c);
    FUN_1400886d4(local_e8,local_68);
                    /* WARNING: Subroutine does not return */
    FUN_140106270(local_e8,&DAT_1401a5720);
  }
  FUN_14008a668(&local_48,local_30,local_68);
  param_1 = param_1 + 0x58;
  FUN_1400a1048(param_1);
  FUN_14009e652(param_1,&local_2c);
  FUN_14009e652(param_1,&local_30);
  lVar2 = lStack_40;
  for (lVar4 = local_48; lVar4 != lVar2; lVar4 = lVar4 + 1) {
    FUN_14008cb80(param_1,lVar4);
  }
  FUN_140016e5c(&local_48);
  return;
}

