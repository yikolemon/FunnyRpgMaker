/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007b53e */

uint __fastcall FUN_1007b53e(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)**(int **)(param_1 + 0x1c);
  if (pbVar3 == (byte *)0x0) {
    return 0xffffffff;
  }
  if (**(int **)(param_1 + 0x2c) < 1) {
    pbVar1 = (byte *)**(undefined4 **)(param_1 + 0x20);
    if (pbVar1 == (byte *)0x0) {
      return 0xffffffff;
    }
    if ((*(byte *)(param_1 + 0x3c) & 4) != 0) {
      return 0xffffffff;
    }
    pbVar2 = *(byte **)(param_1 + 0x38);
    if (*(byte **)(param_1 + 0x38) < pbVar1) {
      pbVar2 = pbVar1;
    }
    if (pbVar2 <= pbVar3) {
      return 0xffffffff;
    }
    *(byte **)(param_1 + 0x38) = pbVar2;
    **(int **)(param_1 + 0x2c) = (int)pbVar2 - **(int **)(param_1 + 0x1c);
    pbVar3 = (byte *)**(undefined4 **)(param_1 + 0x1c);
  }
  return (uint)*pbVar3;
}

