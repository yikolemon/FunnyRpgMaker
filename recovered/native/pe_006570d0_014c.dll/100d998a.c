/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d998a */

bool FUN_100d998a(int param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    uVar1 = *(uint *)(param_1 + 0x20);
    if (*(uint *)(param_1 + 0x24) < 0x10) {
      param_1 = param_1 + 0x10;
    }
    else {
      param_1 = *(int *)(param_1 + 0x10);
    }
    uVar2 = param_2[1];
    uVar5 = uVar2;
    if (uVar1 < uVar2) {
      uVar5 = uVar1;
    }
    iVar4 = FUN_102595e0(*param_2,param_1,uVar5);
    bVar3 = -1 < iVar4;
    if (iVar4 == 0) {
      bVar3 = uVar1 <= uVar2;
    }
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

