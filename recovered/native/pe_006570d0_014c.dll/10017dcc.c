/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10017dcc */

byte * FUN_10017dcc(int param_1,uint param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  
  if (param_2 < 10) {
    *(byte *)(param_1 + -1) = (byte)param_2 | 0x30;
    pbVar1 = (byte *)(param_1 + -1);
  }
  else {
    pbVar1 = (byte *)(param_1 + -1);
    do {
      uVar3 = param_2;
      pbVar2 = pbVar1;
      *(undefined2 *)(pbVar2 + -1) = *(undefined2 *)(&DAT_1028b5ac + (uVar3 % 100) * 2);
      pbVar1 = pbVar2 + -2;
      param_2 = uVar3 / 100;
    } while (999 < uVar3);
    if (uVar3 < 100) {
      pbVar1 = pbVar2 + -1;
    }
    else {
      *pbVar1 = (byte)(uVar3 / 100) | 0x30;
    }
  }
  return pbVar1;
}

