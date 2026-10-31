/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100088d0 */

void FUN_100088d0(uint param_1,char *param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 == 0) {
    FUN_1000895c(param_2,0x30,9);
  }
  else {
    iVar4 = 0;
    bVar1 = true;
    do {
      bVar2 = bVar1;
      uVar3 = param_1 / 10000;
      *(undefined2 *)(param_2 + (7 - iVar4)) = (&DAT_1028b698)[(param_1 % 10000) % 100];
      *(undefined2 *)(param_2 + (5 - iVar4)) = (&DAT_1028b698)[(param_1 % 10000) / 100];
      iVar4 = 4;
      param_1 = uVar3;
      bVar1 = false;
    } while (bVar2);
    *param_2 = (char)uVar3 + '0';
  }
  return;
}

