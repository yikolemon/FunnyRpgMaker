/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140288a7c */

void FUN_140288a7c(undefined8 param_1,undefined8 *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  
  FUN_14049add8(s___AVEngineUI___140612d30._8_4_);
  pbVar1 = (byte *)param_2[1];
  for (pbVar3 = (byte *)*param_2; pbVar3 != pbVar1; pbVar3 = pbVar3 + 1) {
    bVar2 = FUN_14049adf0();
    *pbVar3 = *pbVar3 ^ bVar2;
  }
  return;
}

