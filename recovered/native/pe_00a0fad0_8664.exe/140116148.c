/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140116148 */

ulonglong FUN_140116148(FILE *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined *puVar6;
  ushort *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ushort local_res8 [4];
  byte local_res10;
  undefined1 local_res11;
  ushort local_38;
  ushort local_36 [7];
  
  puVar9 = &DAT_1401ca970;
  uVar8 = 1;
  if ((*(uint *)((longlong)&param_1->_base + 4) >> 0xc & 1) == 0) {
    iVar1 = _fileno(param_1);
    if ((iVar1 == -1) || (iVar1 = _fileno(param_1), iVar1 == -2)) {
      puVar6 = &DAT_1401ca970;
    }
    else {
      iVar1 = _fileno(param_1);
      uVar2 = _fileno(param_1);
      puVar6 = (undefined *)
               ((ulonglong)(uVar2 & 0x3f) * 0x48 + (&DAT_1403551e0)[(longlong)iVar1 >> 6]);
    }
    if (puVar6[0x39] != '\0') {
      local_38 = 0;
      puVar7 = &local_38;
      do {
        iVar1 = _fgetc_nolock(param_1);
        if (iVar1 == -1) {
          return 0xffff;
        }
        *(char *)puVar7 = (char)iVar1;
        puVar7 = (ushort *)((longlong)puVar7 + 1);
      } while (puVar7 != local_36);
      return (ulonglong)local_38;
    }
  }
  if ((*(uint *)((longlong)&param_1->_base + 4) >> 0xc & 1) == 0) {
    iVar1 = _fileno(param_1);
    if ((iVar1 != -1) && (iVar1 = _fileno(param_1), iVar1 != -2)) {
      iVar1 = _fileno(param_1);
      uVar2 = _fileno(param_1);
      puVar9 = (undefined *)
               ((ulonglong)(uVar2 & 0x3f) * 0x48 + (&DAT_1403551e0)[(longlong)iVar1 >> 6]);
    }
    if ((char)puVar9[0x38] < '\0') {
      local_res8[0] = 0;
      iVar1 = _fgetc_nolock(param_1);
      if (iVar1 != -1) {
        local_res10 = (byte)iVar1;
        lVar3 = FUN_14010b500();
        if (*(short *)(lVar3 + (ulonglong)local_res10 * 2) < 0) {
          iVar1 = _fgetc_nolock(param_1);
          if (iVar1 == -1) {
            ungetc((int)(char)local_res10,param_1);
            return 0xffff;
          }
          local_res11 = (undefined1)iVar1;
          uVar8 = 2;
        }
        iVar1 = FUN_140125db8(local_res8,&local_res10,uVar8);
        if (iVar1 != -1) {
          return (ulonglong)local_res8[0];
        }
        puVar4 = (undefined4 *)FUN_140113dd4();
        *puVar4 = 0x2a;
      }
      return 0xffff;
    }
  }
  if (*(int *)&param_1->_base < 2) {
    uVar5 = thunk_FUN_14012db0c(param_1);
  }
  else {
    *(int *)&param_1->_base = *(int *)&param_1->_base + -2;
    uVar5 = (ulonglong)*(ushort *)param_1->_ptr;
    param_1->_ptr = (char *)((longlong)param_1->_ptr + 2);
  }
  return uVar5;
}

