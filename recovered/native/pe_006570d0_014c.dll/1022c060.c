/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022c060 */

int __thiscall
FUN_1022c060(int param_1,LPSTR param_2,WCHAR param_3,undefined4 param_4,UINT *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  BOOL local_8;
  
  if (param_5[2] == 0) {
    local_8 = 0;
    iVar1 = WideCharToMultiByte(*param_5,0,&param_3,1,param_2,param_5[1],(LPCSTR)0x0,&local_8);
    if ((iVar1 != 0) && (local_8 == 0)) {
      return iVar1;
    }
  }
  else {
    local_8 = param_1;
    if ((ushort)param_3 < 0x100) {
      *param_2 = (CHAR)param_3;
      return 1;
    }
  }
  puVar2 = (undefined4 *)FUN_10268ffd();
  *puVar2 = 0x2a;
  return -1;
}

