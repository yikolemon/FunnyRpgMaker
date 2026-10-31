/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140067f60 */

undefined8 * FUN_140067f60(longlong param_1,undefined8 *param_2)

{
  byte *pbVar1;
  size_t sVar2;
  byte *pbVar3;
  char local_48 [16];
  undefined8 *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  pbVar1 = *(byte **)(param_1 + 0x40);
  local_38 = param_2;
  for (pbVar3 = *(byte **)(param_1 + 0x38); pbVar3 != pbVar1; pbVar3 = pbVar3 + 1) {
    if (*pbVar3 < 0x20) {
      local_48[8] = 0;
      local_48[0] = '\0';
      local_48[1] = '\0';
      local_48[2] = '\0';
      local_48[3] = '\0';
      local_48[4] = '\0';
      local_48[5] = '\0';
      local_48[6] = '\0';
      local_48[7] = '\0';
      FUN_14006ee7f(local_48,9,"<U+%.4X>");
      sVar2 = strlen(local_48);
      FUN_14000b1f8(local_38,local_48,sVar2);
    }
    else {
      FUN_14000cf50(local_38,*pbVar3);
    }
  }
  return local_38;
}

