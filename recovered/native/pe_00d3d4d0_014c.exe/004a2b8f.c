/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004a2b8f */

int __cdecl
FUN_004a2b8f(undefined4 *param_1,LPWSTR param_2,byte *param_3,byte *param_4,byte *param_5,
            int *param_6)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 == (LPWSTR)0x0) {
    if (param_3 != (byte *)0x0) {
LAB_004a2bac:
      *(undefined1 *)(param_6 + 7) = 1;
      param_6[6] = 0x16;
      FUN_00495e14((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_6);
      return 0x16;
    }
  }
  else {
    if (param_3 == (byte *)0x0) goto LAB_004a2bac;
    *param_2 = L'\0';
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  pbVar1 = param_5;
  if (param_3 < param_5) {
    pbVar1 = param_3;
  }
  if ((byte *)0x7fffffff < pbVar1) {
    iVar2 = 0x16;
LAB_004a2c36:
    param_6[6] = iVar2;
    *(undefined1 *)(param_6 + 7) = 1;
    FUN_00495e14((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_6);
    return iVar2;
  }
  pbVar1 = FUN_004a29c6(param_2,param_4,pbVar1,param_6);
  if (pbVar1 == (byte *)0xffffffff) {
    if (param_2 != (LPWSTR)0x0) {
      *param_2 = L'\0';
    }
    if ((char)param_6[7] == '\0') {
      return 0;
    }
    return param_6[6];
  }
  pbVar1 = pbVar1 + 1;
  if (param_2 != (LPWSTR)0x0) {
    if (param_3 < pbVar1) {
      if (param_5 != (byte *)0xffffffff) {
        *param_2 = L'\0';
        iVar2 = 0x22;
        goto LAB_004a2c36;
      }
      iVar2 = 0x50;
      pbVar1 = param_3;
    }
    param_2[(int)(pbVar1 + -1)] = L'\0';
  }
  if (param_1 == (undefined4 *)0x0) {
    return iVar2;
  }
  *param_1 = pbVar1;
  return iVar2;
}

