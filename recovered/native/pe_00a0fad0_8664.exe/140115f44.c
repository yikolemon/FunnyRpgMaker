/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140115f44 */

undefined4 FUN_140115f44(FILE *param_1)

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
    puVar4 = (undefined4 *)FUN_140113dd4();
    *puVar4 = 0x16;
    FUN_140120ee8();
    return 0xffffffff;
  }
  FUN_14010b32c();
  bVar1 = true;
  if ((*(uint *)((longlong)&param_1->_base + 4) >> 0xc & 1) == 0) {
    uVar2 = _fileno(param_1);
    if (uVar2 < 0xfffffffe) {
      puVar6 = (undefined *)
               ((&DAT_1403551e0)[(longlong)(int)uVar2 >> 6] + (ulonglong)(uVar2 & 0x3f) * 0x48);
    }
    else {
      puVar6 = &DAT_1401ca970;
    }
    puVar5 = &DAT_1401ca970;
    if (puVar6[0x39] == '\0') {
      if (uVar2 < 0xfffffffe) {
        puVar5 = (undefined *)
                 ((&DAT_1403551e0)[(longlong)(int)uVar2 >> 6] + (ulonglong)(uVar2 & 0x3f) * 0x48);
      }
      if ((puVar5[0x3d] & 1) == 0) goto LAB_140116010;
    }
    bVar1 = false;
  }
LAB_140116010:
  if (bVar1) {
    uVar3 = _fgetc_nolock(param_1);
    FUN_14010b338(param_1);
  }
  else {
    puVar4 = (undefined4 *)FUN_140113dd4();
    *puVar4 = 0x16;
    FUN_140120ee8();
    FUN_14012dcb0(local_18,0x140116036);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

