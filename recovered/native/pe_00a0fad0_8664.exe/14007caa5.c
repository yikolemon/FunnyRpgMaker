/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007caa5 */

void FUN_14007caa5(undefined8 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  
  FUN_140117538(0);
  pbVar1 = (byte *)param_1[1];
  for (pbVar3 = (byte *)*param_1; pbVar3 != pbVar1; pbVar3 = pbVar3 + 1) {
    bVar2 = FUN_140117550();
    *pbVar3 = *pbVar3 ^ bVar2;
  }
  return;
}

