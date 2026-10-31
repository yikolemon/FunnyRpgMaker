/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d25ff */

undefined8
FUN_1800d25ff(HANDLE param_1,longlong param_2,int param_3,undefined8 param_4,undefined4 param_5)

{
  bool bVar1;
  int iVar2;
  BOOL BVar3;
  longlong lVar4;
  undefined8 uVar5;
  DWORD dwErrCode;
  undefined1 auStackY_808 [32];
  DWORD local_7dc;
  undefined4 local_7d8;
  undefined4 uStack_7d4;
  undefined4 uStack_7d0;
  undefined4 uStack_7cc;
  uint local_7c8;
  undefined1 local_7b8 [32];
  LPVOID local_798;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  uint local_138;
  undefined1 local_130 [4];
  short local_12c;
  short local_118;
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStackY_808;
  if (param_2 == 0) {
LAB_1800d26cf:
    dwErrCode = 0x10dd;
LAB_1800d26d4:
    SetLastError(dwErrCode);
  }
  else {
    lVar4 = FUN_1800d27fe(param_1,param_2,local_130);
    if (lVar4 == 0) goto LAB_1800d26cf;
    iVar2 = FUN_1800d292e(param_1,param_2,local_7b8);
    if (iVar2 != 0) {
      bVar1 = local_12c != 0 && local_118 == 0x10b;
      if ((param_3 != 0) || (local_12c == 0 || local_118 != 0x10b)) {
LAB_1800d26c4:
        if (!bVar1 && param_3 == 0) {
          iVar2 = FUN_1800d2d8b(param_1,param_2,param_4,param_5);
          if (iVar2 != 0) {
            if (local_798 == (LPVOID)0x0) {
LAB_1800d27ce:
              uVar5 = FUN_1800d34af(param_1,&DAT_1802bb8e4,local_7b8,0x688);
              goto LAB_1800d26db;
            }
            local_7d8 = local_148;
            uStack_7d4 = uStack_144;
            uStack_7d0 = uStack_140;
            uStack_7cc = uStack_13c;
            local_7c8 = local_138 & 0xfffffffe;
            iVar2 = FUN_1800fcb3c(param_1,local_798,0x14,4);
            if (iVar2 != 0) {
              BVar3 = WriteProcessMemory(param_1,local_798,&local_7d8,0x14,(SIZE_T *)0x0);
              if (BVar3 != 0) {
                BVar3 = VirtualProtectEx(param_1,local_798,0x14,local_7dc,&local_7dc);
                if (BVar3 != 0) {
                  if ((local_138 & 2) != 0) goto LAB_1800d26c8;
                  goto LAB_1800d27ce;
                }
              }
            }
          }
          goto LAB_1800d26d9;
        }
      }
      else if ((local_798 != (LPVOID)0x0) && ((local_138 & 3) == 1)) {
        iVar2 = FUN_1800d2a95(param_1,param_2,local_7b8);
        uVar5 = 0;
        bVar1 = false;
        if (iVar2 == 0) goto LAB_1800d26db;
        goto LAB_1800d26c4;
      }
LAB_1800d26c8:
      dwErrCode = 6;
      goto LAB_1800d26d4;
    }
  }
LAB_1800d26d9:
  uVar5 = 0;
LAB_1800d26db:
  if (DAT_180402640 == (local_38 ^ (ulonglong)auStackY_808)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_38 ^ (ulonglong)auStackY_808);
}

