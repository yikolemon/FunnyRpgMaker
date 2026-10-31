/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802041e8 */

void FUN_1802041e8(char *param_1)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if ((byte)(*param_1 + 0xbfU) < 0x1a) {
    if ((byte)(param_1[1] + 0xbfU) < 0x1a) {
      uVar5 = 0;
      uVar1 = 0;
      while ((((uVar4 = uVar1, (byte)(param_1[uVar1 + 2] + 0xbfU) < 0x1a &&
               ((byte)(param_1[uVar1 + 3] + 0xbfU) < 0x1a)) &&
              ((byte)(param_1[uVar1 + 4] + 0xbfU) < 0x1a)) &&
             (((byte)(param_1[uVar1 + 5] + 0xbfU) < 0x1a && (param_1[uVar1 + 6] == '+'))))) {
        uVar4 = uVar1 + 7;
        uVar5 = (ulonglong)uVar4;
        if ((0x19 < (byte)(param_1[uVar5] + 0xbfU)) ||
           (uVar2 = uVar1 + 8, uVar1 = uVar4, 0x19 < (byte)(param_1[uVar2] + 0xbfU))) break;
      }
    }
    else {
      uVar5 = 0;
      uVar4 = 0;
    }
    if (uVar4 != 0) {
      sVar3 = strlen(param_1 + uVar5);
      FUN_1802a82f0(param_1,param_1 + uVar5,sVar3 + 1);
      return;
    }
  }
  return;
}

