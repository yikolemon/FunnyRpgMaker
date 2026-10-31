/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14027d186 */

longlong FUN_14027d186(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  FUN_1402141fc();
  *(undefined8 *)(param_1 + 0x20) = 0xffffffffffffffff;
  iVar1 = FUN_14027d3a4(param_1,param_3,param_1 + 0x20,param_1 + 0x28,param_1 + 0x20,param_1,uVar3);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else if (iVar1 == 0x12) {
    uVar2 = 0;
    iVar1 = 0;
  }
  else {
    uVar2 = 0;
  }
  *(undefined1 *)(param_1 + 0x278) = uVar2;
  *(int *)(param_1 + 0x27c) = iVar1;
  return param_1;
}

