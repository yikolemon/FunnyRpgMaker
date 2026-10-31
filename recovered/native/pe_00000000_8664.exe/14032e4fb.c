/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14032e4fb */

void FUN_14032e4fb(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  lVar1 = DAT_14062a630;
  uVar3 = DAT_1404bda40;
  uVar2 = FUN_14031276b(0x39,DAT_1404bda40);
  FUN_1403a41f0(param_1,param_2,param_2 + 8,uVar2,param_3,0);
  uVar2 = *(undefined4 *)(lVar1 + 0xe88);
  uVar3 = FUN_14031276b(0x38,uVar3);
  FUN_1403a40da(param_1,param_2,param_2 + 8,uVar3,param_3,uVar2,0);
  return;
}

