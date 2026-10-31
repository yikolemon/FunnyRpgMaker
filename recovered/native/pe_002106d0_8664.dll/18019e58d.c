/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019e58d */

undefined4 FUN_18019e58d(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x2c8);
  puVar3 = (undefined8 *)FUN_1800fe7f8(0x18);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *(undefined8 **)(param_2 + 0x90) = puVar3;
  uVar2 = FUN_18019e300(puVar3,*puVar1,param_2,*(undefined4 *)(param_1 + 0x2d0));
  if ((char)uVar2 == '\0') {
    FUN_18019ec05(puVar3);
    *(undefined8 *)(param_2 + 0x90) = 0;
  }
  return uVar2;
}

