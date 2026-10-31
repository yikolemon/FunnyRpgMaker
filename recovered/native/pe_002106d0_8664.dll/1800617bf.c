/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800617bf */

longlong FUN_1800617bf(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_180061862();
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_2 + 0x58) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  return param_1;
}

