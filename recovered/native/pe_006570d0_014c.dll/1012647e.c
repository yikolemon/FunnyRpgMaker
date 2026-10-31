/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012647e */

void __thiscall FUN_1012647e(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if (iVar3 == 0) {
    if (param_1[1] == 0) {
      iVar3 = FUN_100fa1fa(0x20);
      if (param_1[2] != 0) {
        FUN_1025b2d0(iVar3,param_1[2],*param_1 << 2);
        FUN_100fa2cb(param_1[2]);
      }
      param_1[2] = iVar3;
      param_1[1] = 8;
      iVar2 = *param_1;
    }
    else {
      iVar3 = param_1[2];
      iVar2 = 0;
    }
    *(undefined4 *)(iVar3 + iVar2 * 4) = *param_2;
  }
  else {
    if (iVar3 == param_1[1]) {
      iVar2 = 1;
      if (1 < iVar3 / 2) {
        iVar2 = iVar3 / 2;
      }
      puVar1 = (undefined4 *)FUN_100fa1fa((iVar2 + iVar3) * 4);
      if (param_1[2] != 0) {
        FUN_1025b2d0(puVar1,param_1[2],*param_1 << 2);
        FUN_100fa2cb(param_1[2]);
      }
      param_1[2] = (int)puVar1;
      param_1[1] = iVar2 + iVar3;
      iVar3 = *param_1;
    }
    else {
      puVar1 = (undefined4 *)param_1[2];
    }
    if (0 < iVar3) {
      FUN_1025b2d0(puVar1 + 1,puVar1,iVar3 << 2);
      puVar1 = (undefined4 *)param_1[2];
    }
    *puVar1 = *param_2;
  }
  *param_1 = *param_1 + 1;
  return;
}

