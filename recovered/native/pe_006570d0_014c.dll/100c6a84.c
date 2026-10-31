/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c6a84 */

LPARAM FUN_100c6a84(LPARAM param_1)

{
  HDC hdc;
  int *unaff_FS_OFFSET;
  tagLOGFONTW local_80;
  HDC local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_80;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c7e10;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  hdc = GetDC((HWND)0x0);
  if (hdc == (HDC)0x0) {
    FUN_100c6b5a();
    *unaff_FS_OFFSET = local_1c;
  }
  else {
    local_80.lfWeight = 0;
    local_80.lfOutPrecision = '\0';
    local_80.lfClipPrecision = '\0';
    local_80.lfQuality = '\0';
    local_80.lfPitchAndFamily = '\0';
    local_80.lfFaceName[0] = L'\0';
    local_80.lfFaceName[1] = L'\0';
    local_80.lfFaceName[0x1a] = L'\0';
    local_80.lfFaceName[0x1b] = L'\0';
    local_80.lfFaceName[0x1c] = L'\0';
    local_80.lfFaceName[0x1d] = L'\0';
    local_80.lfFaceName[0x1e] = L'\0';
    local_80.lfFaceName[0x1f] = L'\0';
    local_80.lfFaceName[0x12] = L'\0';
    local_80.lfFaceName[0x13] = L'\0';
    local_80.lfFaceName[0x14] = L'\0';
    local_80.lfFaceName[0x15] = L'\0';
    local_80.lfFaceName[0x16] = L'\0';
    local_80.lfFaceName[0x17] = L'\0';
    local_80.lfFaceName[0x18] = L'\0';
    local_80.lfFaceName[0x19] = L'\0';
    local_80.lfFaceName[10] = L'\0';
    local_80.lfFaceName[0xb] = L'\0';
    local_80.lfFaceName[0xc] = L'\0';
    local_80.lfFaceName[0xd] = L'\0';
    local_80.lfFaceName[0xe] = L'\0';
    local_80.lfFaceName[0xf] = L'\0';
    local_80.lfFaceName[0x10] = L'\0';
    local_80.lfFaceName[0x11] = L'\0';
    local_80.lfFaceName[2] = L'\0';
    local_80.lfFaceName[3] = L'\0';
    local_80.lfFaceName[4] = L'\0';
    local_80.lfFaceName[5] = L'\0';
    local_80.lfFaceName[6] = L'\0';
    local_80.lfFaceName[7] = L'\0';
    local_80.lfFaceName[8] = L'\0';
    local_80.lfFaceName[9] = L'\0';
    local_80.lfHeight = 0;
    local_80.lfWidth = 0;
    local_80.lfEscapement = 0;
    local_80.lfOrientation = 0;
    local_80.lfItalic = '\0';
    local_80.lfUnderline = '\0';
    local_80.lfStrikeOut = '\0';
    local_80.lfCharSet = '\x01';
    FUN_100c6b5a();
    local_14 = 0;
    local_24 = hdc;
    EnumFontFamiliesExW(hdc,&local_80,(FONTENUMPROCW)&LAB_100c6bdf,param_1,0);
    ReleaseDC((HWND)0x0,local_24);
    *unaff_FS_OFFSET = local_1c;
  }
  return param_1;
}

