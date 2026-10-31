/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026e9a3 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1026e9a3(FILE *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  BOOL BVar3;
  byte *pbVar4;
  int extraout_EDX;
  int iVar5;
  bool bVar6;
  undefined8 uVar7;
  uint local_1020;
  undefined8 local_101c;
  int local_1014;
  undefined4 local_1010;
  undefined4 local_100c;
  byte local_1008 [4096];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  local_1010 = param_4;
  uVar1 = __fileno(param_1);
  if (param_1->_base != (char *)0x0) {
    iVar2 = (int)param_1->_ptr - param_1->_cnt;
    uVar7 = __alldiv(iVar2,iVar2 >> 0x1f,2,0);
    local_100c = (uint)uVar7;
    local_101c = CONCAT44((int)((ulonglong)uVar7 >> 0x20),(uint)local_101c);
    iVar5 = (uVar1 & 0x3f) * 0x38;
    uVar7 = FUN_102793e8(uVar1,*(undefined4 *)(iVar5 + 0x20 + (&DAT_103a5230)[(int)uVar1 >> 6]),
                         *(undefined4 *)(iVar5 + 0x24 + (&DAT_103a5230)[(int)uVar1 >> 6]),0,
                         local_1010);
    local_1014 = (int)uVar7;
    iVar2 = (&DAT_103a5230)[(int)uVar1 >> 6];
    if ((((local_1014 == *(int *)(iVar5 + 0x20 + iVar2)) &&
         ((int)((ulonglong)uVar7 >> 0x20) == *(int *)(iVar5 + 0x24 + iVar2))) &&
        (BVar3 = ReadFile(*(HANDLE *)(iVar5 + 0x18 + iVar2),local_1008,0x1000,&local_1020,
                          (LPOVERLAPPED)0x0), BVar3 != 0)) &&
       (FUN_102793e8(uVar1,param_2,param_3,0,local_1010), -1 < extraout_EDX)) {
      iVar2 = local_101c._4_4_;
      if ((local_101c._4_4_ < 1) && ((local_101c < 0 || (local_100c <= local_1020)))) {
        local_101c = 0;
        pbVar4 = local_1008;
        if ((local_100c != 0) || (iVar2 != 0)) {
          local_101c._4_4_ = 0;
          local_101c._0_4_ = 0;
          iVar5 = local_101c._4_4_;
          uVar1 = (uint)local_101c;
          do {
            if (local_1008 + local_1020 <= pbVar4) break;
            if (*pbVar4 == 0xd) {
              if ((pbVar4 < local_1008 + (local_1020 - 1)) && (pbVar4[1] == 10)) {
                pbVar4 = pbVar4 + 1;
              }
            }
            else {
              pbVar4 = pbVar4 + (char)(&DAT_1039bbe0)[*pbVar4];
            }
            bVar6 = 0xfffffffe < uVar1;
            uVar1 = uVar1 + 1;
            iVar5 = iVar5 + (uint)bVar6;
            pbVar4 = pbVar4 + 1;
          } while ((uVar1 != local_100c) || (iVar5 != iVar2));
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

