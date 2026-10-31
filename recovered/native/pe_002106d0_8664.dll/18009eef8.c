/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18009eef8 */

void FUN_18009eef8(longlong param_1)

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
  iVar3 = FUN_1800f979c(uVar1);
  local_68[0] = 0;
  local_48 = 0;
  lStack_40 = 0;
  local_38 = 0;
  FUN_18007e5fa(&local_48,(longlong)iVar3);
  local_30 = FUN_1800fb129(*(undefined8 *)(param_1 + 0x180),local_48,uVar1,iVar3);
  if (local_30 < 1) {
    local_b0 = 0x52000000c9;
    local_a8 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\FileCoder.hpp"
    ;
    local_a0 = "void __cdecl FileCoder::Pack(void)";
    FUN_180072a20(local_88);
    local_98 = "{}LZ4 compression failed. Data size: {}";
    local_90 = 0x27;
    FUN_18008bbb3(local_68,&local_98,local_88,&local_2c);
    FUN_18006f972(local_e8,local_68);
                    /* WARNING: Subroutine does not return */
    FUN_18026d5b0(local_e8,&DAT_1803a63b0);
  }
  FUN_1800780ba(&local_48,local_30,local_68);
  param_1 = param_1 + 0x58;
  FUN_18009f27c(param_1);
  FUN_18008ca8a(param_1,&local_2c);
  FUN_18008ca8a(param_1,&local_30);
  lVar2 = lStack_40;
  for (lVar4 = local_48; lVar4 != lVar2; lVar4 = lVar4 + 1) {
    FUN_18007f392(param_1,lVar4);
  }
  FUN_180004cea(&local_48);
  return;
}

