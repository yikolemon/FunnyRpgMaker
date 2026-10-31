/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a5358 */

undefined4
FUN_1400a5358(int *param_1,undefined1 (*param_2) [32],ulonglong param_3,WCHAR param_4,
             longlong *param_5)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  ulonglong local_res10;
  WCHAR local_res20 [4];
  
  if ((param_2 == (undefined1 (*) [32])0x0) && (param_3 != 0)) {
    if (param_1 == (int *)0x0) {
      return 0;
    }
    *param_1 = 0;
    return 0;
  }
  if (param_1 != (int *)0x0) {
    *param_1 = -1;
  }
  local_res20[0] = param_4;
  if (param_3 < 0x80000000) {
    if ((char)param_5[5] == '\0') {
      FUN_14008f0b0(param_5);
    }
    uVar1 = *(uint *)(param_5[3] + 0xc);
    if (uVar1 == 0xfde9) {
      local_res10 = 0;
      uVar4 = FUN_1400b1870((byte *)param_2,(uint)(ushort)local_res20[0],&local_res10,
                            (longlong)param_5);
      if (param_1 != (int *)0x0) {
        *param_1 = (int)uVar4;
      }
      if ((int)uVar4 < 5) {
        return 0;
      }
      if ((char)param_5[6] != '\0') {
        return *(undefined4 *)((longlong)param_5 + 0x2c);
      }
      return 0;
    }
    if (*(longlong *)(param_5[3] + 0x138) == 0) {
      if (0xff < (ushort)local_res20[0]) {
        if ((param_2 != (undefined1 (*) [32])0x0) && (param_3 != 0)) {
          FUN_1400b3c00(param_2,0,param_3);
        }
        goto LAB_1400a543a;
      }
      if (param_2 == (undefined1 (*) [32])0x0) {
LAB_1400a5466:
        if (param_1 != (int *)0x0) {
          *param_1 = 1;
        }
        return 0;
      }
      if (param_3 != 0) {
        (*param_2)[0] = (char)local_res20[0];
        goto LAB_1400a5466;
      }
    }
    else {
      local_res10 = local_res10 & 0xffffffff00000000;
      iVar2 = FUN_1400a13e0(uVar1,0,local_res20,1,(LPSTR)param_2,(int)param_3,(LPBOOL)0x0,
                            (LPBOOL)&local_res10);
      if (iVar2 != 0) {
        if ((int)local_res10 == 0) {
          if (param_1 == (int *)0x0) {
            return 0;
          }
          *param_1 = iVar2;
          return 0;
        }
LAB_1400a543a:
        *(undefined4 *)((longlong)param_5 + 0x2c) = 0x2a;
        *(undefined1 *)(param_5 + 6) = 1;
        return 0x2a;
      }
      DVar3 = GetLastError();
      if (DVar3 != 0x7a) goto LAB_1400a543a;
      if ((param_2 != (undefined1 (*) [32])0x0) && (param_3 != 0)) {
        FUN_1400b3c00(param_2,0,param_3);
      }
    }
    uVar5 = 0x22;
  }
  else {
    uVar5 = 0x16;
  }
  *(undefined4 *)((longlong)param_5 + 0x2c) = uVar5;
  *(undefined1 *)(param_5 + 6) = 1;
  FUN_1400a1080((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_5);
  return uVar5;
}

