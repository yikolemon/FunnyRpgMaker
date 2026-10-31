/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00481c80 */

DWORD FUN_00481c80(DWORD param_1,int *param_2)

{
  int iVar1;
  DWORD DVar2;
  int iVar3;
  DWORD local_8;
  
  DVar2 = 0;
  local_8 = 0;
  iVar3 = 0;
  do {
    if (DVar2 != 0) goto LAB_00481cef;
    if (iVar3 == 0) {
      local_8 = 0x409;
LAB_00481ccd:
      DVar2 = FormatMessageA(0x1300,(LPCVOID)0x0,param_1,local_8,(LPSTR)param_2,0,(va_list *)0x0);
    }
    else {
      if (iVar3 != 1) {
        local_8 = 0;
        goto LAB_00481ccd;
      }
      iVar1 = GetLocaleInfoEx(L"!x-sys-default-locale",0x20000001,(LPWSTR)&local_8,2);
      if (iVar1 != 0) goto LAB_00481ccd;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  if (DVar2 != 0) {
LAB_00481cef:
    do {
      if ((&DAT_004ad4a8)[*(byte *)(*param_2 + -1 + DVar2)] == '\0') {
        return DVar2;
      }
      DVar2 = DVar2 - 1;
    } while (DVar2 != 0);
  }
  return 0;
}

