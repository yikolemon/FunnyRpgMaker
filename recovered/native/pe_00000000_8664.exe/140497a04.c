/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140497a04 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140497a04(FILE *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte *pbVar6;
  longlong lVar7;
  undefined1 auStack_1088 [32];
  undefined8 local_1068;
  uint local_1058 [3];
  byte abStack_1049 [4097];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x140497a1e;
  local_48 = ram0x000140613b10 ^ (ulonglong)auStack_1088;
  uVar1 = _fileno(param_1);
  lVar7 = 0;
  if (*(int *)&param_1->_base != 0) {
    uVar5 = (ulonglong)(uVar1 & 0x3f);
    lVar3 = ((longlong)param_1->_ptr - *(longlong *)&param_1->_cnt) / 2;
    lVar4 = thunk_FUN_1404a8be0(uVar1,*(undefined8 *)
                                       ((&DAT_1406328d0)[(longlong)(int)uVar1 >> 6] + 0x30 +
                                       uVar5 * 0x48),0,param_3);
    if (lVar4 == *(longlong *)((&DAT_1406328d0)[(longlong)(int)uVar1 >> 6] + 0x30 + uVar5 * 0x48)) {
      local_1058[0] = 0;
      local_1068 = 0;
      iVar2 = (*_DAT_14059e140)(*(undefined8 *)
                                 ((&DAT_1406328d0)[(longlong)(int)uVar1 >> 6] + 0x28 + uVar5 * 0x48)
                                ,abStack_1049 + 1,0x1000,local_1058);
      if (((iVar2 != 0) && (lVar4 = thunk_FUN_1404a8be0(uVar1,param_2,0,param_3), -1 < lVar4)) &&
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
              pbVar6 = pbVar6 + (char)(&DAT_140627c40)[*pbVar6];
            }
            lVar7 = lVar7 + 1;
          } while (lVar7 != lVar3);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_48 ^ (ulonglong)auStack_1088);
}

