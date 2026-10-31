/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012bd02 */

void __fastcall FUN_1012bd02(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x2c);
    iVar4 = 0;
    do {
      uVar3 = *(undefined4 *)(iVar2 + iVar4);
      FUN_10103c64(uVar3,param_1 + 0x34,1);
      FUN_1010dd28(uVar3,param_1 + 0x3c,1);
      iVar4 = iVar4 + 4;
    } while (iVar1 << 2 != iVar4);
  }
  return;
}

