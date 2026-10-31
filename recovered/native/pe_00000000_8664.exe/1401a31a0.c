/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401a31a0 */

ulonglong FUN_1401a31a0(FILE *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined *puVar5;
  ushort *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ushort local_res8 [4];
  byte local_res10;
  undefined1 local_res11;
  ushort local_38;
  ushort local_36 [7];
  
  puVar8 = &DAT_140f29970;
  uVar7 = 1;
  if ((*(uint *)((longlong)&param_1->_base + 4) >> 0xc & 1) == 0) {
    iVar1 = _fileno(param_1);
    if ((iVar1 == -1) || (iVar1 = _fileno(param_1), iVar1 == -2)) {
      puVar5 = &DAT_140f29970;
    }
    else {
      iVar1 = _fileno(param_1);
      uVar2 = _fileno(param_1);
      puVar5 = (undefined *)
               ((ulonglong)(uVar2 & 0x3f) * 0x48 + (&DAT_140f32db0)[(longlong)iVar1 >> 6]);
    }
    if (puVar5[0x39] != '\0') {
      local_38 = 0;
      puVar6 = &local_38;
      do {
        iVar1 = _fgetc_nolock(param_1);
        if (iVar1 == -1) {
          return 0xffff;
        }
        *(char *)puVar6 = (char)iVar1;
        puVar6 = (ushort *)((longlong)puVar6 + 1);
      } while (puVar6 != local_36);
      return (ulonglong)local_38;
    }
  }
  if ((*(uint *)((longlong)&param_1->_base + 4) >> 0xc & 1) == 0) {
    iVar1 = _fileno(param_1);
    if ((iVar1 != -1) && (iVar1 = _fileno(param_1), iVar1 != -2)) {
      iVar1 = _fileno(param_1);
      uVar2 = _fileno(param_1);
      puVar8 = (undefined *)
               ((ulonglong)(uVar2 & 0x3f) * 0x48 + (&DAT_140f32db0)[(longlong)iVar1 >> 6]);
    }
    if ((char)puVar8[0x38] < '\0') {
      local_res8[0] = 0;
      iVar1 = _fgetc_nolock(param_1);
      if (iVar1 != -1) {
        local_res10 = (byte)iVar1;
        puVar6 = __pctype_func();
        if ((short)puVar6[local_res10] < 0) {
          iVar1 = _fgetc_nolock(param_1);
          if (iVar1 == -1) {
            ungetc((int)(char)local_res10,param_1);
            return 0xffff;
          }
          local_res11 = (undefined1)iVar1;
          uVar7 = 2;
        }
        iVar1 = FUN_1401b3b38(local_res8,&local_res10,uVar7);
        if (iVar1 != -1) {
          return (ulonglong)local_res8[0];
        }
        puVar3 = (undefined4 *)FUN_14019e8cc();
        *puVar3 = 0x2a;
      }
      return 0xffff;
    }
  }
  if (*(int *)&param_1->_base < 2) {
    uVar4 = thunk_FUN_1401bbfcc(param_1);
  }
  else {
    *(int *)&param_1->_base = *(int *)&param_1->_base + -2;
    uVar4 = (ulonglong)*(ushort *)param_1->_ptr;
    param_1->_ptr = (char *)((longlong)param_1->_ptr + 2);
  }
  return uVar4;
}

