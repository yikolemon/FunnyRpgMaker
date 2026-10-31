/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005affb */

LPSTR FUN_18005affb(LPSTR param_1,LPCSTR param_2)

{
  int iVar1;
  LPSTR lpMultiByteStr;
  LPWSTR **pppWVar2;
  LPWSTR *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong uStack_40;
  LPSTR local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (param_2 == (LPCSTR)0x0) {
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    param_1[0x18] = '\x0f';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
  }
  else if (DAT_180417a10 < 0x30000) {
    iVar1 = MultiByteToWideChar(DAT_180418b00,0,param_2,-1,(LPWSTR)0x0,0);
    if (iVar1 < 1) {
      param_1[0] = '\0';
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      param_1[0x10] = '\0';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      param_1[0x18] = '\x0f';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
    }
    else {
      local_48 = 0;
      uStack_40 = 0;
      local_58 = (LPWSTR *)0x0;
      uStack_50 = 0;
      FUN_180005764(&local_58,0,iVar1);
      pppWVar2 = &local_58;
      if (7 < uStack_40) {
        pppWVar2 = (LPWSTR **)local_58;
      }
      MultiByteToWideChar(DAT_180418b00,0,param_2,-1,(LPWSTR)pppWVar2,iVar1);
      pppWVar2 = (LPWSTR **)local_58;
      if (uStack_40 < 8) {
        pppWVar2 = &local_58;
      }
      iVar1 = WideCharToMultiByte(0xfde9,0,(LPCWSTR)pppWVar2,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0
                                 );
      local_38 = param_1;
      if (iVar1 < 1) {
        param_1[0] = '\0';
        param_1[1] = '\0';
        param_1[2] = '\0';
        param_1[3] = '\0';
        param_1[4] = '\0';
        param_1[5] = '\0';
        param_1[6] = '\0';
        param_1[7] = '\0';
        param_1[8] = '\0';
        param_1[9] = '\0';
        param_1[10] = '\0';
        param_1[0xb] = '\0';
        param_1[0xc] = '\0';
        param_1[0xd] = '\0';
        param_1[0xe] = '\0';
        param_1[0xf] = '\0';
        param_1[0x10] = '\0';
        param_1[0x11] = '\0';
        param_1[0x12] = '\0';
        param_1[0x13] = '\0';
        param_1[0x14] = '\0';
        param_1[0x15] = '\0';
        param_1[0x16] = '\0';
        param_1[0x17] = '\0';
        param_1[0x18] = '\x0f';
        param_1[0x19] = '\0';
        param_1[0x1a] = '\0';
        param_1[0x1b] = '\0';
        param_1[0x1c] = '\0';
        param_1[0x1d] = '\0';
        param_1[0x1e] = '\0';
        param_1[0x1f] = '\0';
      }
      else {
        param_1[0x10] = '\0';
        param_1[0x11] = '\0';
        param_1[0x12] = '\0';
        param_1[0x13] = '\0';
        param_1[0x14] = '\0';
        param_1[0x15] = '\0';
        param_1[0x16] = '\0';
        param_1[0x17] = '\0';
        param_1[0x18] = '\0';
        param_1[0x19] = '\0';
        param_1[0x1a] = '\0';
        param_1[0x1b] = '\0';
        param_1[0x1c] = '\0';
        param_1[0x1d] = '\0';
        param_1[0x1e] = '\0';
        param_1[0x1f] = '\0';
        param_1[0] = '\0';
        param_1[1] = '\0';
        param_1[2] = '\0';
        param_1[3] = '\0';
        param_1[4] = '\0';
        param_1[5] = '\0';
        param_1[6] = '\0';
        param_1[7] = '\0';
        param_1[8] = '\0';
        param_1[9] = '\0';
        param_1[10] = '\0';
        param_1[0xb] = '\0';
        param_1[0xc] = '\0';
        param_1[0xd] = '\0';
        param_1[0xe] = '\0';
        param_1[0xf] = '\0';
        FUN_180061c48(param_1,0,iVar1 + -1);
        lpMultiByteStr = local_38;
        if (0xf < *(ulonglong *)(local_38 + 0x18)) {
          lpMultiByteStr = *(LPSTR *)local_38;
        }
        pppWVar2 = (LPWSTR **)local_58;
        if (uStack_40 < 8) {
          pppWVar2 = &local_58;
        }
        WideCharToMultiByte(0xfde9,0,(LPCWSTR)pppWVar2,-1,lpMultiByteStr,iVar1,(LPCSTR)0x0,
                            (LPBOOL)0x0);
      }
      param_1 = local_38;
      FUN_1800010ec(&local_58);
    }
  }
  else {
    FUN_180001e92(param_1,param_2);
  }
  return param_1;
}

