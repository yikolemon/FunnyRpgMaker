/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10229350 */

void FUN_10229350(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 local_40;
  HANDLE local_3c;
  undefined1 local_38;
  undefined1 local_30 [32];
  uint local_10;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  bVar1 = false;
  iVar2 = FUN_102288f0(&local_3c,param_1,0x10180,0x2200000);
  if (iVar2 == 0) {
    bVar1 = true;
LAB_10229384:
    local_40 = 0x13;
    BVar3 = SetFileInformationByHandle(local_3c,0x15,&local_40,4);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      if (((DVar4 == 1) || (DVar4 == 0x32)) || (DVar4 == 0x57)) {
        iVar2 = FUN_102296f0(local_3c);
        if (iVar2 == 0) goto LAB_102293a1;
        if ((iVar2 != 5) || (!bVar1)) goto LAB_10229434;
        BVar3 = GetFileInformationByHandleEx(local_3c,FileBasicInfo,local_30,0x28);
        if (BVar3 == 0) {
LAB_10229469:
          GetLastError();
          local_38 = 0;
        }
        else {
          if ((local_10 & 1) != 0) {
            local_10 = local_10 ^ 1;
            BVar3 = SetFileInformationByHandle(local_3c,FileBasicInfo,local_30,0x28);
            if (BVar3 != 0) {
              iVar2 = FUN_102296f0(local_3c);
              if (iVar2 == 0) {
                local_38 = 1;
                goto LAB_10229483;
              }
              if (iVar2 == 5) {
                local_10 = local_10 | 1;
                BVar3 = SetFileInformationByHandle(local_3c,FileBasicInfo,local_30,0x28);
                if (BVar3 != 0) goto LAB_10229503;
              }
            }
            goto LAB_10229469;
          }
LAB_10229503:
          local_38 = 0;
        }
LAB_10229483:
        FUN_10229580();
        goto LAB_1022948d;
      }
LAB_10229434:
      local_38 = 0;
    }
    else {
LAB_102293a1:
      local_38 = 1;
    }
    if (local_3c == (HANDLE)0xffffffff) goto LAB_1022948d;
    iVar2 = CloseHandle(local_3c);
  }
  else if (iVar2 == 5) {
    iVar2 = FUN_102288f0(&local_3c,param_1,0x10000,0x2200000);
    if (iVar2 == 0) goto LAB_10229384;
    local_38 = 0;
    if (local_3c == (HANDLE)0xffffffff) goto LAB_1022948d;
    iVar2 = CloseHandle(local_3c);
  }
  else {
    local_38 = 0;
    if (local_3c == (HANDLE)0xffffffff) goto LAB_1022948d;
    iVar2 = CloseHandle(local_3c);
  }
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    _abort();
  }
LAB_1022948d:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

