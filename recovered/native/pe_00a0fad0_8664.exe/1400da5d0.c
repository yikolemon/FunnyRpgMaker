/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400da5d0 */

int FUN_1400da5d0(LPSTR param_1,WCHAR param_2,undefined8 param_3,UINT *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  WCHAR local_18 [4];
  BOOL local_10 [4];
  
  local_18[0] = param_2;
  if (param_4[2] == 0) {
    local_10[0] = 0;
    iVar1 = WideCharToMultiByte(*param_4,0,local_18,1,param_1,param_4[1],(LPCSTR)0x0,local_10);
    if ((iVar1 != 0) && (local_10[0] == 0)) {
      return iVar1;
    }
  }
  else if ((ushort)param_2 < 0x100) {
    *param_1 = (CHAR)param_2;
    return 1;
  }
  puVar2 = (undefined4 *)FUN_140113dd4();
  *puVar2 = 0x2a;
  return -1;
}

