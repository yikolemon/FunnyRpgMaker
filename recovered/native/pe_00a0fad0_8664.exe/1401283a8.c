/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401283a8 */

void FUN_1401283a8(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStackY_138 [32];
  undefined1 local_108 [240];
  ulonglong local_18;
  
  local_18 = DAT_1401c9640 ^ (ulonglong)auStackY_138;
  lVar2 = FUN_140121578();
  iVar1 = FUN_140121f70(param_1,(-(uint)(*(int *)(lVar2 + 0xb0) != 0) & 0xfffff002) + 0x1001,
                        local_108);
  if (iVar1 == 0) {
    *(undefined4 *)(lVar2 + 0xa8) = 0;
  }
  else {
    iVar1 = FUN_1401156b0(*(undefined8 *)(lVar2 + 0x98),local_108);
    if (iVar1 == 0) {
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (*(short *)(param_1 + lVar3 * 2) != 0);
      iVar1 = FUN_1401275e0();
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      *(uint *)(lVar2 + 0xa8) = *(uint *)(lVar2 + 0xa8) | 4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_18 ^ (ulonglong)auStackY_138);
}

