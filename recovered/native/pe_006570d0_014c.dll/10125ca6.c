/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10125ca6 */

void __thiscall FUN_10125ca6(int *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if (iVar3 == 0) {
    if (param_1[1] == 0) {
      iVar3 = FUN_100fa1fa(0x60);
      if (param_1[2] != 0) {
        FUN_1025b2d0(iVar3,param_1[2],*param_1 * 0xc);
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
    puVar1 = (undefined8 *)(iVar3 + iVar2 * 0xc);
  }
  else {
    if (iVar3 == param_1[1]) {
      iVar2 = 1;
      if (1 < iVar3 / 2) {
        iVar2 = iVar3 / 2;
      }
      puVar1 = (undefined8 *)FUN_100fa1fa((iVar2 + iVar3) * 0xc);
      if (param_1[2] != 0) {
        FUN_1025b2d0(puVar1,param_1[2],*param_1 * 0xc);
        FUN_100fa2cb(param_1[2]);
      }
      param_1[2] = (int)puVar1;
      param_1[1] = iVar2 + iVar3;
      iVar3 = *param_1;
    }
    else {
      puVar1 = (undefined8 *)param_1[2];
    }
    if (0 < iVar3) {
      FUN_1025b2d0((int)puVar1 + 0xc,puVar1,iVar3 * 0xc);
      puVar1 = (undefined8 *)param_1[2];
    }
  }
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
  *puVar1 = *param_2;
  *param_1 = *param_1 + 1;
  return;
}

