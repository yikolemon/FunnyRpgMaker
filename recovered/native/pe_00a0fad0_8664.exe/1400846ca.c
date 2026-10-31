/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400846ca */

undefined8 *
FUN_1400846ca(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  byte *pbVar4;
  undefined1 local_2c [4];
  undefined8 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  local_28 = param_2;
  cVar2 = FUN_140082ca4(0,param_3,param_2,local_2c);
  if (cVar2 != '\0') {
    FUN_140117538(*param_4);
    pbVar1 = (byte *)local_28[1];
    for (pbVar4 = (byte *)*local_28; pbVar4 != pbVar1; pbVar4 = pbVar4 + 1) {
      bVar3 = FUN_140117550();
      *pbVar4 = *pbVar4 ^ bVar3;
    }
  }
  return local_28;
}

