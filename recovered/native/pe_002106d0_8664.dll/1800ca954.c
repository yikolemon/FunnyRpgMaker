/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ca954 */

LPARAM FUN_1800ca954(LPARAM param_1)

{
  HDC hdc;
  tagLOGFONTW local_88;
  LPARAM local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  hdc = GetDC((HWND)0x0);
  local_28 = param_1;
  if (hdc == (HDC)0x0) {
    FUN_1800caa1e(param_1);
  }
  else {
    local_88.lfOutPrecision = '\0';
    local_88.lfClipPrecision = '\0';
    local_88.lfQuality = '\0';
    local_88.lfPitchAndFamily = '\0';
    local_88.lfFaceName[0] = L'\0';
    local_88.lfFaceName[1] = L'\0';
    local_88.lfFaceName[0x1a] = L'\0';
    local_88.lfFaceName[0x1b] = L'\0';
    local_88.lfFaceName[0x1c] = L'\0';
    local_88.lfFaceName[0x1d] = L'\0';
    local_88.lfFaceName[0x1e] = L'\0';
    local_88.lfFaceName[0x1f] = L'\0';
    local_88.lfFaceName[0x12] = L'\0';
    local_88.lfFaceName[0x13] = L'\0';
    local_88.lfFaceName[0x14] = L'\0';
    local_88.lfFaceName[0x15] = L'\0';
    local_88.lfFaceName[0x16] = L'\0';
    local_88.lfFaceName[0x17] = L'\0';
    local_88.lfFaceName[0x18] = L'\0';
    local_88.lfFaceName[0x19] = L'\0';
    local_88.lfFaceName[10] = L'\0';
    local_88.lfFaceName[0xb] = L'\0';
    local_88.lfFaceName[0xc] = L'\0';
    local_88.lfFaceName[0xd] = L'\0';
    local_88.lfFaceName[0xe] = L'\0';
    local_88.lfFaceName[0xf] = L'\0';
    local_88.lfFaceName[0x10] = L'\0';
    local_88.lfFaceName[0x11] = L'\0';
    local_88.lfFaceName[2] = L'\0';
    local_88.lfFaceName[3] = L'\0';
    local_88.lfFaceName[4] = L'\0';
    local_88.lfFaceName[5] = L'\0';
    local_88.lfFaceName[6] = L'\0';
    local_88.lfFaceName[7] = L'\0';
    local_88.lfFaceName[8] = L'\0';
    local_88.lfFaceName[9] = L'\0';
    local_88.lfHeight = 0;
    local_88.lfWidth = 0;
    local_88.lfEscapement = 0;
    local_88.lfOrientation = 0;
    local_88.lfWeight = 0;
    local_88.lfItalic = '\0';
    local_88.lfUnderline = '\0';
    local_88.lfStrikeOut = '\0';
    local_88.lfCharSet = '\x01';
    FUN_1800caa1e(param_1);
    EnumFontFamiliesExW(hdc,&local_88,FUN_1800caa89,local_28,0);
    ReleaseDC((HWND)0x0,hdc);
  }
  return local_28;
}

