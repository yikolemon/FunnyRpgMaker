/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180284d5c */

undefined4 FUN_180284d5c(FILE *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_38 [32];
  undefined1 *local_18;
  
  local_18 = auStack_38;
  if (param_1 == (FILE *)0x0) {
    local_18 = auStack_38;
    puVar4 = (undefined4 *)FUN_18027e66c();
    *puVar4 = 0x16;
    FUN_180290a50();
    return 0xffffffff;
  }
  FUN_180272400();
  bVar1 = true;
  if ((*(uint *)((longlong)&param_1->_base + 4) >> 0xc & 1) == 0) {
    uVar2 = _fileno(param_1);
    if (uVar2 < 0xfffffffe) {
      puVar6 = (undefined *)
               ((&DAT_180421400)[(longlong)(int)uVar2 >> 6] + (ulonglong)(uVar2 & 0x3f) * 0x48);
    }
    else {
      puVar6 = &DAT_1804161d0;
    }
    puVar5 = &DAT_1804161d0;
    if (puVar6[0x39] == '\0') {
      if (uVar2 < 0xfffffffe) {
        puVar5 = (undefined *)
                 ((&DAT_180421400)[(longlong)(int)uVar2 >> 6] + (ulonglong)(uVar2 & 0x3f) * 0x48);
      }
      if ((puVar5[0x3d] & 1) == 0) goto LAB_180284e28;
    }
    bVar1 = false;
  }
LAB_180284e28:
  if (bVar1) {
    uVar3 = _fgetc_nolock(param_1);
    FUN_18027240c(param_1);
  }
  else {
    puVar4 = (undefined4 *)FUN_18027e66c();
    *puVar4 = 0x16;
    FUN_180290a50();
    FUN_18029ed70(local_18,0x180284e4e);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

