/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400962e7 */

void FUN_1400962e7(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  lVar1 = DAT_140f2a910;
  uVar3 = DAT_1401c86c8;
  uVar2 = FUN_14007a557(0x39,DAT_1401c86c8);
  FUN_1400de294(param_1,param_2,param_2 + 8,uVar2,param_3,0);
  uVar2 = *(undefined4 *)(lVar1 + 0xe88);
  uVar3 = FUN_14007a557(0x38,uVar3);
  FUN_1400de17e(param_1,param_2,param_2 + 8,uVar3,param_3,uVar2,0);
  return;
}

