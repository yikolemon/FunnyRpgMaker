/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401615db */

ulonglong FUN_1401615db(char *param_1)

{
  char cVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte *pbVar5;
  
  cVar1 = *param_1;
  bVar2 = param_1[cVar1 == '-'];
  if (((byte)(&DAT_140ea0a00)[bVar2 >> 3] >> (bVar2 & 7) & 1) == 0) {
    uVar4 = 0;
  }
  else {
    pbVar5 = (byte *)(param_1 + (cVar1 == '-'));
    uVar4 = 0;
    do {
      pbVar5 = pbVar5 + 1;
      if (0xcca < (short)uVar4) {
        uVar4 = CONCAT62((int6)(uVar4 >> 0x10),0x7fff);
        break;
      }
      uVar4 = (ulonglong)((uint)(byte)(&DAT_140ea0a20)[(char)bVar2] + (int)uVar4 * 10);
      bVar2 = *pbVar5;
    } while (((byte)(&DAT_140ea0a00)[bVar2 >> 3] >> (bVar2 & 7) & 1) != 0);
  }
  uVar3 = (ulonglong)(uint)-(int)uVar4;
  if (cVar1 != '-') {
    uVar3 = uVar4;
  }
  return uVar3;
}

