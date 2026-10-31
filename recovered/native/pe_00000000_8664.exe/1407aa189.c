/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407aa189 */

int FUN_1407aa189(ulonglong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  ulonglong unaff_RBX;
  int iVar4;
  
  iVar4 = (int)unaff_RBX;
  uVar1 = FUN_1407aa1db(param_1,unaff_RBX & 0xffffffff);
  puVar3 = (undefined4 *)(ulonglong)uVar1;
  iVar2 = 0;
  if (uVar1 != 0) {
    *puVar3 = param_2;
    puVar3[1] = iVar4;
    puVar3[2] = (int)(unaff_RBX >> 0x20);
    if (iVar4 == 0) {
      puVar3[3] = 0xffffffff;
    }
    else {
      iVar2 = *(int *)((param_1 & 0xffffffff) + 0xa1c);
      puVar3[3] = iVar2;
      *(int *)((param_1 & 0xffffffff) + 0xa1c) = iVar4 + iVar2;
      iVar2 = puVar3[3] + (int)param_1 + 0x630;
    }
  }
  return iVar2;
}

