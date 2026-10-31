/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400bba75 */

uint FUN_1400bba75(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  
  if (DAT_1401d4560 == '\0') {
    uVar4 = 0;
    do {
      iVar5 = 8;
      uVar6 = uVar4 & 0xffffffff;
      do {
        uVar1 = uVar6 >> 1;
        uVar2 = uVar6 & 1;
        uVar6 = (ulonglong)((uint)uVar1 ^ 0xedb88320);
        if (uVar2 == 0) {
          uVar6 = uVar1;
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      (&DAT_1401d4160)[uVar4] = (int)uVar6;
      uVar4 = uVar4 + 1;
    } while (uVar4 != 0x100);
    DAT_1401d4560 = '\x01';
  }
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
    uVar4 = 0;
    do {
      uVar3 = uVar3 >> 8 ^ (&DAT_1401d4160)[(byte)(*(byte *)(param_1 + uVar4) ^ (byte)uVar3)];
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xffffffff) < param_2);
    uVar3 = ~uVar3;
  }
  return uVar3;
}

