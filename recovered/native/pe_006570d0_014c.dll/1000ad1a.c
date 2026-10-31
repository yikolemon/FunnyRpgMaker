/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000ad1a */

void FUN_1000ad1a(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined2 *puVar3;
  
  if (param_1 == 1) {
    uVar1 = 0;
  }
  else {
    puVar3 = (undefined2 *)(param_1 + param_3);
    uVar1 = 0;
    uVar2 = param_2;
    do {
      puVar3 = puVar3 + -1;
      param_2 = uVar2 / 100;
      *puVar3 = (&DAT_1028b698)[uVar2 % 100];
      uVar1 = uVar1 + 2;
      uVar2 = param_2;
    } while (uVar1 < param_1 - 1);
  }
  if (uVar1 < param_1) {
    *(byte *)(~uVar1 + param_3 + param_1) = (char)param_2 + ((byte)(param_2 / 5) & 0xfe) * -5 | 0x30
    ;
  }
  return;
}

