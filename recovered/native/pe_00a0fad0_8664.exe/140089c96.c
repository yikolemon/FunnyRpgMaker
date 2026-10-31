/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140089c96 */

void FUN_140089c96(undefined8 param_1,undefined8 *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  
  FUN_140117538(DAT_1401c9930);
  pbVar1 = (byte *)param_2[1];
  for (pbVar3 = (byte *)*param_2; pbVar3 != pbVar1; pbVar3 = pbVar3 + 1) {
    bVar2 = FUN_140117550();
    *pbVar3 = *pbVar3 ^ bVar2;
  }
  return;
}

