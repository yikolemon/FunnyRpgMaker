/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00491a83 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_00491a83(FILE *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  BOOL BVar4;
  byte *pbVar5;
  int iVar6;
  bool bVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint local_1020;
  undefined8 local_101c;
  int local_1014;
  int *local_1010;
  undefined4 local_100c;
  byte local_1008 [4096];
  uint local_8;
  
  local_8 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  local_1010 = param_4;
  uVar2 = __fileno(param_1);
  if (param_1->_base != (char *)0x0) {
    uVar3 = (int)param_1->_ptr - param_1->_cnt;
    uVar8 = __alldiv(uVar3,(int)uVar3 >> 0x1f,2,0);
    local_100c = (uint)uVar8;
    local_101c = CONCAT44((int)((ulonglong)uVar8 >> 0x20),(uint)local_101c);
    iVar6 = (uVar2 & 0x3f) * 0x38;
    uVar8 = FUN_0049cdf2(uVar2,*(undefined4 *)(iVar6 + 0x20 + (&DAT_00521cc8)[(int)uVar2 >> 6]),
                         *(undefined4 *)(iVar6 + 0x24 + (&DAT_00521cc8)[(int)uVar2 >> 6]),
                         (PLARGE_INTEGER)0x0,local_1010);
    local_1014 = (int)uVar8;
    iVar1 = (&DAT_00521cc8)[(int)uVar2 >> 6];
    if ((((local_1014 == *(int *)(iVar6 + 0x20 + iVar1)) &&
         ((int)((ulonglong)uVar8 >> 0x20) == *(int *)(iVar6 + 0x24 + iVar1))) &&
        (BVar4 = ReadFile(*(HANDLE *)(iVar6 + 0x18 + iVar1),local_1008,0x1000,&local_1020,
                          (LPOVERLAPPED)0x0), BVar4 != 0)) &&
       (lVar9 = FUN_0049cdf2(uVar2,param_2,param_3,(PLARGE_INTEGER)0x0,local_1010), -1 < lVar9)) {
      iVar1 = local_101c._4_4_;
      if ((local_101c._4_4_ < 1) && ((local_101c < 0 || (local_100c <= local_1020)))) {
        local_101c = 0;
        pbVar5 = local_1008;
        if ((local_100c != 0) || (iVar1 != 0)) {
          local_101c._4_4_ = 0;
          local_101c._0_4_ = 0;
          iVar6 = local_101c._4_4_;
          uVar2 = (uint)local_101c;
          do {
            if (local_1008 + local_1020 <= pbVar5) break;
            if (*pbVar5 == 0xd) {
              if ((pbVar5 < local_1008 + (local_1020 - 1)) && (pbVar5[1] == 10)) {
                pbVar5 = pbVar5 + 1;
              }
            }
            else {
              pbVar5 = pbVar5 + (char)(&DAT_0051b650)[*pbVar5];
            }
            bVar7 = 0xfffffffe < uVar2;
            uVar2 = uVar2 + 1;
            iVar6 = iVar6 + (uint)bVar7;
            pbVar5 = pbVar5 + 1;
          } while ((uVar2 != local_100c) || (iVar6 != iVar1));
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
}

