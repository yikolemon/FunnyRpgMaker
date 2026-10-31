/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00497350 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_00497350(int *param_1,DWORD param_2,LPCSTR param_3,int param_4,LPWORD param_5,uint param_6,
                 int param_7)

{
  uint uVar1;
  undefined4 *puVar2;
  int cchSrc;
  LPCWSTR lpSrcStr;
  int local_20;
  int local_1c;
  char local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  FUN_0048847b(&local_20,param_1);
  if (param_6 == 0) {
    param_6 = *(uint *)(local_1c + 8);
  }
  uVar1 = 1;
  if (param_7 != 0) {
    uVar1 = 9;
  }
  local_10 = FUN_00495fa1(param_6,uVar1,param_3,param_4,(LPWSTR)0x0,0);
  if (local_10 == 0) goto LAB_0049742a;
  local_c = local_10 * 2;
  uVar1 = -(uint)(local_c < local_c + 8) & local_c + 8;
  if (uVar1 == 0) {
    lpSrcStr = (LPCWSTR)0x0;
  }
  else if (uVar1 < 0x401) {
    puVar2 = (undefined4 *)&stack0xffffffd4;
    lpSrcStr = (LPCWSTR)&stack0xffffffd4;
    if (&stack0x00000000 != (undefined1 *)0x2c) {
LAB_004973e5:
      lpSrcStr = (LPCWSTR)(puVar2 + 2);
      if (lpSrcStr != (LPCWSTR)0x0) {
        _memset(lpSrcStr,0,local_c);
        cchSrc = FUN_00495fa1(param_6,1,param_3,param_4,lpSrcStr,local_10);
        if (cchSrc != 0) {
          GetStringTypeW(param_2,lpSrcStr,cchSrc,param_5);
        }
      }
    }
  }
  else {
    puVar2 = FUN_00495f50(uVar1);
    lpSrcStr = (LPCWSTR)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0xdddd;
      goto LAB_004973e5;
    }
  }
  FUN_00484420((int)lpSrcStr);
LAB_0049742a:
  if (local_14 != '\0') {
    *(uint *)(local_20 + 0x350) = *(uint *)(local_20 + 0x350) & 0xfffffffd;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
}

