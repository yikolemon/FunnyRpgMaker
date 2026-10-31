/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800775ac */

void FUN_1800775ac(undefined8 param_1,undefined8 *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  
  FUN_180289908(DAT_180401868);
  pbVar1 = (byte *)param_2[1];
  for (pbVar3 = (byte *)*param_2; pbVar3 != pbVar1; pbVar3 = pbVar3 + 1) {
    bVar2 = FUN_180289920();
    *pbVar3 = *pbVar3 ^ bVar2;
  }
  return;
}

