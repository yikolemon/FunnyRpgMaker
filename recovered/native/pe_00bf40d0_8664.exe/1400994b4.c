/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400994b4 */

LARGE_INTEGER
FUN_1400994b4(longlong *param_1,LARGE_INTEGER param_2,longlong param_3,longlong *param_4)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  uVar2 = FUN_1400a5bb4((longlong)param_1);
  uVar4 = (ulonglong)(uVar2 & 0x3f);
  cVar1 = *(char *)((&DAT_1401433a0)[(longlong)(int)uVar2 >> 6] + 0x39 + uVar4 * 0x48);
  lVar6 = (ulonglong)(cVar1 == '\x01') + 1;
  if ((int)param_1[2] != 0) {
    lVar5 = ((longlong)(int)param_1[2] - param_1[1]) + *param_1;
    if (*(char *)((&DAT_1401433a0)[(longlong)(int)uVar2 >> 6] + 0x38 + uVar4 * 0x48) < '\0') {
      lVar3 = thunk_FUN_1400a91e0(uVar2,(LARGE_INTEGER)0x0,2,param_4);
      if (lVar3 == param_2.QuadPart) {
        lVar3 = FUN_1400992d4((short *)param_1[1],(short *)(param_1[1] + lVar5),cVar1);
        bVar7 = (*(uint *)((longlong)param_1 + 0x14) >> 5 & 1) == 0;
        lVar5 = lVar3 + lVar5;
      }
      else {
        lVar3 = thunk_FUN_1400a91e0(uVar2,param_2,0,param_4);
        if (lVar3 == -1) {
          return (LARGE_INTEGER)-1;
        }
        lVar3 = 0x200;
        if (((0x200 < lVar5) || ((*(uint *)((longlong)param_1 + 0x14) >> 6 & 1) == 0)) ||
           ((*(uint *)((longlong)param_1 + 0x14) >> 8 & 1) != 0)) {
          lVar3 = (longlong)(int)param_1[4];
        }
        bVar7 = (*(byte *)((&DAT_1401433a0)[(longlong)(int)uVar2 >> 6] + 0x38 + uVar4 * 0x48) & 4)
                == 0;
        lVar5 = lVar3;
      }
      if (!bVar7) {
        lVar5 = lVar5 + (ulonglong)((byte)(cVar1 - 1U) < 2) + 1;
      }
    }
    param_2.QuadPart = (param_3 / lVar6 - lVar5 / lVar6) + param_2.QuadPart;
  }
  return (LARGE_INTEGER)param_2.QuadPart;
}

