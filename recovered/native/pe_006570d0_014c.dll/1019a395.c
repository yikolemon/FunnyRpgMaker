/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019a395 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_1019a395(undefined4 param_1)

{
  int iVar1;
  HDC hdc;
  uint uVar2;
  int *unaff_FS_OFFSET;
  float fVar3;
  uint local_2c [3];
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_2c;
  local_14 = 0xffffffff;
  local_18 = &LAB_1019b320;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_2c[0] = 0x60;
  local_2c[1] = 0x60;
  iVar1 = FUN_1019a2b9();
  if (iVar1 != 0) {
    if (*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x18) < DAT_103a33a4) {
      FUN_1022c0d0(&DAT_103a33a4);
      if (DAT_103a33a4 == -1) {
        local_14 = 0;
        DAT_103a33a0 = LoadLibraryA("shcore.dll");
        local_14 = 0xffffffff;
        FUN_1022c180(&DAT_103a33a4);
      }
    }
    if (DAT_103a33a0 != (HMODULE)0x0 && DAT_103a33a8 == (FARPROC)0x0) {
      DAT_103a33a8 = GetProcAddress(DAT_103a33a0,"GetDpiForMonitor");
    }
    if (DAT_103a33a8 != (FARPROC)0x0) {
      (*DAT_103a33a8)(param_1,0,local_2c,local_2c + 1);
      uVar2 = local_2c[0];
      goto LAB_1019a46e;
    }
  }
  hdc = GetDC((HWND)0x0);
  uVar2 = GetDeviceCaps(hdc,0x58);
  GetDeviceCaps(hdc,0x5a);
  ReleaseDC((HWND)0x0,hdc);
LAB_1019a46e:
  fVar3 = (float)((double)((ulonglong)uVar2 | (ulonglong)DAT_1028f6c0) - DAT_1028f6b0) /
          _DAT_10301c10;
  *unaff_FS_OFFSET = local_1c;
  return (float10)fVar3;
}

