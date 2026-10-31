/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007d668 */

void FUN_1007d668(undefined4 param_1,undefined1 *param_2,char *param_3,uint param_4)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  char *pcVar4;
  
  *param_2 = 0x25;
  if ((param_4 & 0x20) == 0) {
    pcVar4 = param_2 + 1;
  }
  else {
    pcVar4 = param_2 + 2;
    param_2[1] = 0x2b;
  }
  if ((param_4 & 8) != 0) {
    *pcVar4 = '#';
    pcVar4 = pcVar4 + 1;
  }
  cVar2 = *param_3;
  if (cVar2 == 'L') {
    pcVar4[1] = '6';
    pcVar4[2] = '4';
    pbVar3 = (byte *)(pcVar4 + 3);
    cVar2 = 'I';
  }
  else {
    pbVar3 = (byte *)(pcVar4 + 1);
  }
  *pcVar4 = cVar2;
  if ((param_4 & 0xe00) == 0x400) {
    bVar1 = 0x6f;
  }
  else if ((param_4 & 0xe00) == 0x800) {
    bVar1 = ((param_4 & 4) == 0) << 5 | 0x58;
  }
  else {
    bVar1 = param_3[1];
  }
  *pbVar3 = bVar1;
  pbVar3[1] = 0;
  return;
}

