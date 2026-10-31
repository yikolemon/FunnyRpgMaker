/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007da12 */

void FUN_1007da12(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    FUN_1026ff3c(*(undefined1 *)(param_2 + iVar3));
    if (param_1[1] != *param_1) {
      uVar2 = 0;
      do {
        uVar1 = FUN_1026ff4e();
        *(byte *)(*param_1 + uVar2) = *(byte *)(*param_1 + uVar2) ^ (byte)(uVar1 >> 0xc);
        uVar2 = uVar2 + (&DAT_1029589c)[iVar3];
      } while (uVar2 < (uint)(param_1[1] - *param_1));
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 3);
  return;
}

