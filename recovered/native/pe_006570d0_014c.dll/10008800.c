/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10008800 */

void FUN_10008800(int param_1,uint param_2,byte *param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (9999 < param_2) {
    iVar4 = 0;
    uVar3 = param_2;
    do {
      param_2 = uVar3 / 10000;
      *(undefined2 *)(param_3 + iVar4 + param_1 + -2) = (&DAT_1028b698)[(uVar3 % 10000) % 100];
      *(undefined2 *)(param_3 + iVar4 + param_1 + -4) = (&DAT_1028b698)[(uVar3 % 10000) / 100];
      iVar4 = iVar4 + -4;
      bVar1 = 99999999 < uVar3;
      uVar3 = param_2;
    } while (bVar1);
    uVar3 = -iVar4;
  }
  uVar2 = param_2;
  if (99 < param_2) {
    uVar2 = (param_2 & 0xffff) / 100;
    *(undefined2 *)(param_3 + (param_1 - uVar3) + -2) =
         (&DAT_1028b698)[param_2 + uVar2 * -100 & 0xffff];
    uVar3 = uVar3 | 2;
  }
  if (uVar2 < 10) {
    *param_3 = (byte)uVar2 | 0x30;
  }
  else {
    *(undefined2 *)(param_3 + (param_1 - uVar3) + -2) = (&DAT_1028b698)[uVar2];
  }
  return;
}

