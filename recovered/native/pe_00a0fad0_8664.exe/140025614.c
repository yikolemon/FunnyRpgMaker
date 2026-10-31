/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140025614 */

void FUN_140025614(undefined8 param_1,undefined1 *param_2,char *param_3,uint param_4)

{
  byte *pbVar1;
  byte bVar2;
  char *pcVar3;
  char cVar4;
  
  *param_2 = 0x25;
  if ((param_4 & 0x20) == 0) {
    pcVar3 = param_2 + 1;
  }
  else {
    pcVar3 = param_2 + 2;
    param_2[1] = 0x2b;
  }
  if ((param_4 & 8) != 0) {
    *pcVar3 = '#';
    pcVar3 = pcVar3 + 1;
  }
  cVar4 = *param_3;
  if (cVar4 == 'L') {
    pcVar3[1] = '6';
    pcVar3[2] = '4';
    pbVar1 = (byte *)(pcVar3 + 3);
    cVar4 = 'I';
  }
  else {
    pbVar1 = (byte *)(pcVar3 + 1);
  }
  *pcVar3 = cVar4;
  if ((param_4 & 0xe00) == 0x400) {
    bVar2 = 0x6f;
  }
  else if ((param_4 & 0xe00) == 0x800) {
    bVar2 = ((param_4 & 4) == 0) << 5 | 0x58;
  }
  else {
    bVar2 = param_3[1];
  }
  *pbVar1 = bVar2;
  pbVar1[1] = 0;
  return;
}

