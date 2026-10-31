/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140099610 */

LARGE_INTEGER FUN_140099610(longlong *param_1,longlong *param_2)

{
  char cVar1;
  uint uVar2;
  LARGE_INTEGER LVar3;
  ulonglong uVar4;
  LONGLONG LVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if (param_1 == (longlong *)0x0) {
    *(undefined1 *)(param_2 + 6) = 1;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 0x16;
    FUN_1400a1080((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
  }
  else {
    uVar2 = FUN_1400a5bb4((longlong)param_1);
    if ((int)param_1[2] < 0) {
      *(undefined4 *)(param_1 + 2) = 0;
    }
    LVar3.QuadPart = thunk_FUN_1400a91e0(uVar2,(LARGE_INTEGER)0x0,1,param_2);
    if (-1 < LVar3.QuadPart) {
      if ((*(uint *)((longlong)param_1 + 0x14) & 0xc0) == 0) {
        return (LARGE_INTEGER)(LVar3.QuadPart - (int)param_1[2]);
      }
      uVar7 = *param_1 - param_1[1];
      uVar4 = (ulonglong)(uVar2 & 0x3f);
      lVar6 = (longlong)(int)uVar2 >> 6;
      cVar1 = *(char *)((&DAT_1401433a0)[lVar6] + 0x39 + uVar4 * 0x48);
      if ((*(uint *)((longlong)param_1 + 0x14) & 3) == 0) {
        if ((*(uint *)((longlong)param_1 + 0x14) >> 2 & 1) == 0) {
          *(undefined1 *)(param_2 + 6) = 1;
          *(undefined4 *)((longlong)param_2 + 0x2c) = 0x16;
          return (LARGE_INTEGER)-1;
        }
      }
      else {
        if ((cVar1 == '\x01') &&
           ((*(byte *)((&DAT_1401433a0)[lVar6] + 0x3d + uVar4 * 0x48) & 2) != 0)) {
          LVar5 = FUN_14009932c(param_1,LVar3,param_2);
          return (LARGE_INTEGER)LVar5;
        }
        if (*(char *)((&DAT_1401433a0)[lVar6] + 0x38 + uVar4 * 0x48) < '\0') {
          lVar6 = FUN_1400992d4((short *)param_1[1],(short *)*param_1,cVar1);
          uVar7 = uVar7 + lVar6;
        }
      }
      if (LVar3.QuadPart == 0) {
        return (LARGE_INTEGER)uVar7;
      }
      if ((*(uint *)((longlong)param_1 + 0x14) & 1) == 0) {
        if (cVar1 == '\x01') {
          uVar7 = uVar7 >> 1;
        }
        return (LARGE_INTEGER)(uVar7 + LVar3.QuadPart);
      }
      LVar3 = FUN_1400994b4(param_1,LVar3,uVar7,param_2);
      return (LARGE_INTEGER)LVar3.QuadPart;
    }
  }
  return (LARGE_INTEGER)((LARGE_INTEGER)0xffffffffffffffff).QuadPart;
}

