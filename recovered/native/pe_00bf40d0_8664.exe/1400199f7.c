/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400199f7 */

bool FUN_1400199f7(HANDLE param_1,LPCVOID param_2,int param_3,longlong param_4,undefined4 param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  BOOL BVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  DWORD dwErrCode;
  undefined1 auStackY_808 [32];
  DWORD local_7dc;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  uint local_7c8;
  undefined8 local_7b8 [4];
  LPCVOID local_798;
  undefined8 local_148;
  undefined8 uStack_140;
  uint local_138;
  undefined1 local_130 [4];
  short local_12c;
  short local_118;
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStackY_808;
  if (param_2 == (LPCVOID)0x0) {
LAB_140019ac7:
    dwErrCode = 0x10dd;
LAB_140019acc:
    SetLastError(dwErrCode);
  }
  else {
    lVar5 = FUN_140019bf6(param_1,param_2,(undefined1 (*) [32])local_130);
    if (lVar5 == 0) goto LAB_140019ac7;
    uVar6 = FUN_140019d26(param_1,param_2,local_7b8);
    if ((int)uVar6 != 0) {
      bVar1 = local_12c != 0 && local_118 == 0x10b;
      if ((param_3 != 0) || (local_12c == 0 || local_118 != 0x10b)) {
LAB_140019abc:
        if (!bVar1 && param_3 == 0) {
          bVar1 = FUN_14001a183(param_1,param_2,param_4,param_5);
          if ((int)CONCAT71(extraout_var_00,bVar1) != 0) {
            if (local_798 == (LPCVOID)0x0) {
LAB_140019bc6:
              bVar3 = FUN_14001a8a7(param_1,(undefined8 *)&DAT_1400dce10,local_7b8,0x688);
              goto LAB_140019ad3;
            }
            local_7d8 = local_148;
            uStack_7d0 = uStack_140;
            local_7c8 = local_138 & 0xfffffffe;
            BVar4 = FUN_14001b6cc(param_1,local_798,0x14,4,&local_7dc);
            if (BVar4 != 0) {
              BVar4 = WriteProcessMemory(param_1,local_798,&local_7d8,0x14,(SIZE_T *)0x0);
              if (BVar4 != 0) {
                BVar4 = VirtualProtectEx(param_1,local_798,0x14,local_7dc,&local_7dc);
                if (BVar4 != 0) {
                  if ((local_138 & 2) != 0) goto LAB_140019ac0;
                  goto LAB_140019bc6;
                }
              }
            }
          }
          goto LAB_140019ad1;
        }
      }
      else if ((local_798 != (LPCVOID)0x0) && ((local_138 & 3) == 1)) {
        bVar2 = FUN_140019e8d(param_1,param_2,local_7b8);
        bVar3 = false;
        bVar1 = false;
        if ((int)CONCAT71(extraout_var,bVar2) == 0) goto LAB_140019ad3;
        goto LAB_140019abc;
      }
LAB_140019ac0:
      dwErrCode = 6;
      goto LAB_140019acc;
    }
  }
LAB_140019ad1:
  bVar3 = false;
LAB_140019ad3:
  if (DAT_14012ea80 == (local_38 ^ (ulonglong)auStackY_808)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_38 ^ (ulonglong)auStackY_808);
}

