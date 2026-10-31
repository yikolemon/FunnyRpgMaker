/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400194a0 */

byte * FUN_1400194a0(longlong param_1,ulonglong param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  ulonglong uVar3;
  
  if (param_2 < 10) {
    *(byte *)(param_1 + -1) = (byte)param_2 | 0x30;
    pbVar1 = (byte *)(param_1 + -1);
  }
  else {
    pbVar1 = (byte *)(param_1 + -1);
    do {
      uVar3 = param_2;
      pbVar2 = pbVar1;
      param_2 = uVar3 / 100;
      *(undefined2 *)(pbVar2 + -1) =
           *(undefined2 *)(&DAT_14013ae08 + (ulonglong)(uint)((int)uVar3 + (int)param_2 * -100) * 2)
      ;
      pbVar1 = pbVar2 + -2;
    } while (999 < uVar3);
    if (uVar3 < 100) {
      pbVar1 = pbVar2 + -1;
    }
    else {
      *pbVar1 = (byte)param_2 | 0x30;
    }
  }
  return pbVar1;
}

