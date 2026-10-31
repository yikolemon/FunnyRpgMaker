/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011d02b */

void FUN_18011d02b(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  lVar1 = DAT_180419160;
  uVar3 = DAT_1802ac570;
  uVar2 = FUN_18010129b(0x39,DAT_1802ac570);
  FUN_180192d20(param_1,param_2,param_2 + 8,uVar2,param_3,0);
  uVar2 = *(undefined4 *)(lVar1 + 0xe88);
  uVar3 = FUN_18010129b(0x38,uVar3);
  FUN_180192c0a(param_1,param_2,param_2 + 8,uVar3,param_3,uVar2,0);
  return;
}

