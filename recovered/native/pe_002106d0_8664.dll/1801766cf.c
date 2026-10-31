/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801766cf */

longlong FUN_1801766cf(longlong *param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_1801767ac();
  if (iVar1 == 0) {
    lVar2 = 0;
  }
  else {
    iVar1 = 8;
    if ((8 < (int)param_1[4]) && (iVar1 = 0x10, (int)param_1[4] != 0x10)) {
      FUN_1801765d0("bad bits_per_channel");
      return 0;
    }
    *param_4 = iVar1;
    puVar3 = (undefined4 *)*param_1;
    lVar2 = param_1[3];
    param_1[3] = 0;
    if (puVar3[3] != 4) {
      if (*param_4 == 8) {
        lVar2 = FUN_18017710b();
      }
      else {
        lVar2 = FUN_1801772c7(lVar2,puVar3[3],*puVar3,puVar3[1]);
      }
      *(undefined4 *)(*param_1 + 0xc) = 4;
      if (lVar2 == 0) {
        return 0;
      }
      puVar3 = (undefined4 *)*param_1;
    }
    *param_2 = *puVar3;
    *param_3 = *(undefined4 *)(*param_1 + 4);
  }
  thunk_FUN_180290e40(param_1[3]);
  param_1[3] = 0;
  thunk_FUN_180290e40(param_1[2]);
  param_1[2] = 0;
  thunk_FUN_180290e40(param_1[1]);
  param_1[1] = 0;
  return lVar2;
}

