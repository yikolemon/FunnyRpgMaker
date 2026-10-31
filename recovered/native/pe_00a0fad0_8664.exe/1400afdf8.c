/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400afdf8 */

void FUN_1400afdf8(char *param_1,byte *param_2)

{
  byte *pbVar1;
  size_t sVar2;
  ulonglong uVar3;
  
  if (param_1 == (char *)0x0) {
    param_2[0] = 0xaa;
    param_2[1] = 0xaa;
    param_2[2] = 0xaa;
    param_2[3] = 0xaa;
    param_2[4] = 0xaa;
    param_2[5] = 0xaa;
    param_2[6] = 0xaa;
    param_2[7] = 0xaa;
    param_2[8] = 0xaa;
    param_2[9] = 0xaa;
    param_2[10] = 0xaa;
    param_2[0xb] = 0xaa;
  }
  else {
    sVar2 = strlen(param_1);
    if (sVar2 < 0xd) {
      uVar3 = 0;
      do {
        FUN_140135ff0(param_2 + uVar3,param_1,sVar2);
        uVar3 = uVar3 + sVar2;
      } while (sVar2 + uVar3 < 0xd);
      if (uVar3 < 0xc) {
        FUN_140135ff0(param_2 + uVar3,param_1,0xc - uVar3);
      }
    }
    else {
      *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 8);
      *(undefined8 *)param_2 = *(undefined8 *)param_1;
    }
  }
  *param_2 = ~*param_2;
  pbVar1 = param_2 + 1;
  *pbVar1 = *pbVar1 << 4 | *pbVar1 >> 4;
  param_2[2] = param_2[2] ^ 0x8a;
  param_2[3] = ~(param_2[3] << 4 | param_2[3] >> 4);
  param_2[4] = ~param_2[4];
  param_2[5] = param_2[5] ^ 0xac;
  param_2[6] = ~param_2[6];
  param_2[7] = ~(param_2[7] << 5 | param_2[7] >> 3);
  pbVar1 = param_2 + 8;
  *pbVar1 = *pbVar1 << 3 | *pbVar1 >> 5;
  param_2[9] = param_2[9] ^ 0x7f;
  param_2[10] = (param_2[10] << 4 | param_2[10] >> 4) ^ 0xd6;
  param_2[0xb] = param_2[0xb] ^ 0xcc;
  return;
}

