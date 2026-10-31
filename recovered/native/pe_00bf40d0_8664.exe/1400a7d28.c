/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a7d28 */

void FUN_1400a7d28(ushort *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStackY_138 [32];
  WCHAR local_108 [120];
  ulonglong local_18;
  longlong lVar4;
  
  local_18 = DAT_14012ea80 ^ (ulonglong)auStackY_138;
  lVar2 = FUN_1400a1528();
  iVar1 = FUN_1400a1e0c(param_1,(-(uint)(*(int *)(lVar2 + 0xb0) != 0) & 0xfffff002) + 0x1001,
                        local_108,0x78);
  if (iVar1 == 0) {
    *(undefined4 *)(lVar2 + 0xa8) = 0;
  }
  else {
    iVar1 = FUN_140096a70(*(WCHAR **)(lVar2 + 0x98),local_108);
    if (iVar1 == 0) {
      lVar3 = -1;
      do {
        lVar4 = lVar3;
        lVar3 = lVar4 + 1;
      } while (param_1[lVar3] != 0);
      iVar1 = FUN_1400a6f60((short *)(lVar2 + 0x2f0),0x55,(longlong)param_1,lVar4 + 2);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      *(uint *)(lVar2 + 0xa8) = *(uint *)(lVar2 + 0xa8) | 4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_18 ^ (ulonglong)auStackY_138);
}

