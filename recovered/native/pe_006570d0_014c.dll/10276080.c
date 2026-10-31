/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10276080 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_10276080(undefined4 param_1,DWORD param_2,undefined4 param_3,undefined4 param_4,
                 LPWORD param_5,int param_6,int param_7)

{
  uint _Size;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  LPCWSTR lpSrcStr;
  int local_20;
  int local_1c;
  char local_14;
  
  FUN_1025be8b(param_1);
  if (param_6 == 0) {
    param_6 = *(int *)(local_1c + 8);
  }
  uVar1 = 1;
  if (param_7 != 0) {
    uVar1 = 9;
  }
  iVar2 = FUN_102741c1(param_6,uVar1,param_3,param_4,0,0);
  if (iVar2 == 0) goto LAB_1027615a;
  _Size = iVar2 * 2;
  uVar3 = -(uint)(_Size < _Size + 8) & _Size + 8;
  if (uVar3 == 0) {
    lpSrcStr = (LPCWSTR)0x0;
  }
  else if (uVar3 < 0x401) {
    puVar4 = (undefined4 *)&stack0xffffffd4;
    lpSrcStr = (LPCWSTR)&stack0xffffffd4;
    if (&stack0x00000000 != (undefined1 *)0x2c) {
LAB_10276115:
      lpSrcStr = (LPCWSTR)(puVar4 + 2);
      if (lpSrcStr != (LPCWSTR)0x0) {
        _memset(lpSrcStr,0,_Size);
        iVar2 = FUN_102741c1(param_6,1,param_3,param_4,lpSrcStr,iVar2);
        if (iVar2 != 0) {
          GetStringTypeW(param_2,lpSrcStr,iVar2,param_5);
        }
      }
    }
  }
  else {
    puVar4 = (undefined4 *)FUN_10274170(uVar3);
    lpSrcStr = (LPCWSTR)0x0;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0xdddd;
      goto LAB_10276115;
    }
  }
  FUN_10234d10(lpSrcStr);
LAB_1027615a:
  if (local_14 != '\0') {
    *(uint *)(local_20 + 0x350) = *(uint *)(local_20 + 0x350) & 0xfffffffd;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

