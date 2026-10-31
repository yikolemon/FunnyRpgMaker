/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009932c */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14009932c(longlong *param_1,LARGE_INTEGER param_2,longlong *param_3)

{
  uint uVar1;
  BOOL BVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte *pbVar6;
  longlong lVar7;
  undefined1 auStackY_1088 [32];
  DWORD local_1058 [3];
  byte abStack_1049 [4097];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x140099346;
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_1088;
  uVar1 = FUN_1400a5bb4((longlong)param_1);
  lVar7 = 0;
  if ((int)param_1[2] != 0) {
    uVar5 = (ulonglong)(uVar1 & 0x3f);
    lVar3 = (*param_1 - param_1[1]) / 2;
    lVar4 = thunk_FUN_1400a91e0(uVar1,*(LARGE_INTEGER *)
                                       ((&DAT_1401433a0)[(longlong)(int)uVar1 >> 6] + 0x30 +
                                       uVar5 * 0x48),0,param_3);
    if (lVar4 == *(longlong *)((&DAT_1401433a0)[(longlong)(int)uVar1 >> 6] + 0x30 + uVar5 * 0x48)) {
      local_1058[0] = 0;
      BVar2 = ReadFile(*(HANDLE *)
                        ((&DAT_1401433a0)[(longlong)(int)uVar1 >> 6] + 0x28 + uVar5 * 0x48),
                       abStack_1049 + 1,0x1000,local_1058,(LPOVERLAPPED)0x0);
      if (((BVar2 != 0) && (lVar4 = thunk_FUN_1400a91e0(uVar1,param_2,0,param_3), -1 < lVar4)) &&
         (uVar5 = (ulonglong)local_1058[0], lVar3 <= (longlong)uVar5)) {
        pbVar6 = abStack_1049;
        if (lVar3 != 0) {
          do {
            pbVar6 = pbVar6 + 1;
            if (abStack_1049 + uVar5 + 1 <= pbVar6) break;
            if (*pbVar6 == 0xd) {
              if ((pbVar6 < abStack_1049 + uVar5) && (pbVar6[1] == 10)) {
                pbVar6 = pbVar6 + 1;
              }
            }
            else {
              pbVar6 = pbVar6 + (char)(&DAT_14013c4b0)[*pbVar6];
            }
            lVar7 = lVar7 + 1;
          } while (lVar7 != lVar3);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStackY_1088);
}

