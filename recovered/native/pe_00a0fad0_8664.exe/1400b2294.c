/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400b2294 */

void FUN_1400b2294(char *param_1,byte *param_2)

{
  byte *pbVar1;
  size_t sVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
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
    if ((int)sVar2 < 0xd) {
      lVar4 = (longlong)(int)sVar2;
      lVar3 = 0;
      lVar5 = 0;
      do {
        FUN_140135ff0(param_2 + (lVar3 >> 0x20),param_1,lVar4);
        lVar5 = lVar5 + lVar4;
        lVar3 = lVar3 + (sVar2 << 0x20);
      } while (lVar4 + lVar5 < 0xd);
      if (lVar5 < 0xc) {
        FUN_140135ff0(param_2 + (lVar3 >> 0x20),param_1,0xc - (int)lVar5);
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

