/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100408ca */

void FUN_100408ca(int param_1,undefined4 param_2,int *param_3)

{
  char *_Str;
  size_t sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_2c [21];
  undefined1 auStack_17 [3];
  int iStack_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)auStack_2c;
  if (0 < *(int *)(param_1 + 0x28)) {
    _Str = *(char **)(param_1 + 0x24);
    sVar1 = _strlen(_Str);
    FUN_1001909c(_Str,_Str + sVar1);
    iVar2 = param_3[1];
    uVar4 = iVar2 + 1;
    if ((uint)param_3[2] < uVar4) {
      (*(code *)param_3[3])(param_3,uVar4);
      iVar2 = param_3[1];
      uVar4 = iVar2 + 1;
    }
    param_3[1] = uVar4;
    *(undefined1 *)(*param_3 + iVar2) = 0x3a;
    iVar2 = *(int *)(param_1 + 0x28);
    iVar3 = -iVar2;
    if (-iVar2 < 0) {
      iVar3 = iVar2;
    }
    iStack_14 = FUN_1002472e(auStack_2c,iVar3,0x15);
    if (iVar2 < 0) {
      *(undefined1 *)(iStack_14 + -1) = 0x2d;
      iStack_14 = iStack_14 + -1;
    }
    FUN_1001909c(iStack_14,auStack_17);
  }
  if (DAT_10388d00 == (local_10 ^ (uint)auStack_2c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

