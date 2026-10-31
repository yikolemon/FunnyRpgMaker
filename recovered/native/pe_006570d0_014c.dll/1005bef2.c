/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005bef2 */

LPSTR FUN_1005bef2(LPSTR param_1,LPCSTR param_2)

{
  int iVar1;
  LPCWSTR **pppWVar2;
  LPSTR lpMultiByteStr;
  LPCWSTR *local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_3c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c19a0;
  local_1c = ExceptionList;
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
    param_1[0x14] = '\x0f';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
  }
  else {
    ExceptionList = &local_1c;
    if (DAT_1039ca4c < 0x30000) {
      iVar1 = MultiByteToWideChar(DAT_1039d3b8,0,param_2,-1,(LPWSTR)0x0,0);
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
        param_1[0x14] = '\x0f';
        param_1[0x15] = '\0';
        param_1[0x16] = '\0';
        param_1[0x17] = '\0';
        ExceptionList = local_1c;
      }
      else {
        local_2c = 0;
        local_3c = (LPCWSTR *)0x0;
        uStack_38 = 0;
        uStack_34 = 0;
        uStack_30 = 0;
        FUN_10005b1e(0,iVar1);
        local_14 = 0;
        pppWVar2 = &local_3c;
        if (7 < local_2c._4_4_) {
          pppWVar2 = (LPCWSTR **)local_3c;
        }
        MultiByteToWideChar(DAT_1039d3b8,0,param_2,-1,(LPWSTR)pppWVar2,iVar1);
        pppWVar2 = (LPCWSTR **)local_3c;
        if (local_2c._4_4_ < 8) {
          pppWVar2 = &local_3c;
        }
        iVar1 = WideCharToMultiByte(0xfde9,0,(LPCWSTR)pppWVar2,DAT_102944a0,(LPSTR)0x0,0,(LPCSTR)0x0
                                    ,(LPBOOL)0x0);
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
          param_1[0x14] = '\x0f';
          param_1[0x15] = '\0';
          param_1[0x16] = '\0';
          param_1[0x17] = '\0';
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
          local_24 = iVar1;
          FUN_10062152(0,iVar1 + -1);
          local_14 = 1;
          lpMultiByteStr = param_1;
          if (0xf < *(uint *)(param_1 + 0x14)) {
            lpMultiByteStr = *(LPSTR *)param_1;
          }
          pppWVar2 = (LPCWSTR **)local_3c;
          if (local_2c._4_4_ < 8) {
            pppWVar2 = &local_3c;
          }
          WideCharToMultiByte(0xfde9,0,(LPCWSTR)pppWVar2,-1,lpMultiByteStr,local_24,(LPCSTR)0x0,
                              (LPBOOL)0x0);
        }
        local_14 = 0xffffffff;
        FUN_10001134();
        ExceptionList = local_1c;
      }
    }
    else {
      local_20 = (undefined1 *)&local_3c;
      FUN_10001f66(param_2);
      ExceptionList = local_1c;
    }
  }
  return param_1;
}

