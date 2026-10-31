/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400ae6fc */

undefined4
FUN_1400ae6fc(undefined8 *param_1,LPWSTR param_2,byte *param_3,byte *param_4,byte *param_5,
             longlong *param_6)

{
  byte *pbVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_2 == (LPWSTR)0x0) {
    if (param_3 == (byte *)0x0) {
LAB_1400ae76a:
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = 0;
      }
      pbVar1 = param_5;
      if (param_3 < param_5) {
        pbVar1 = param_3;
      }
      if (pbVar1 < (byte *)0x80000000) {
        pbVar1 = FUN_1400ae504(param_2,param_4,pbVar1,param_6);
        if (pbVar1 == (byte *)0xffffffffffffffff) {
          if (param_2 != (LPWSTR)0x0) {
            *param_2 = L'\0';
          }
          if ((char)param_6[6] == '\0') {
            return 0;
          }
          return *(undefined4 *)((longlong)param_6 + 0x2c);
        }
        pbVar1 = pbVar1 + 1;
        if (param_2 == (LPWSTR)0x0) goto LAB_1400ae7f7;
        uVar2 = 0;
        if (param_3 < pbVar1) {
          if (param_5 != (byte *)0xffffffffffffffff) {
            *param_2 = L'\0';
            uVar2 = 0x22;
            goto LAB_1400ae7d8;
          }
          uVar2 = 0x50;
          pbVar1 = param_3;
        }
        param_2[(longlong)(pbVar1 + -1)] = L'\0';
LAB_1400ae7f7:
        if (param_1 == (undefined8 *)0x0) {
          return uVar2;
        }
        *param_1 = pbVar1;
        return uVar2;
      }
      uVar2 = 0x16;
LAB_1400ae7d8:
      *(undefined4 *)((longlong)param_6 + 0x2c) = uVar2;
      *(undefined1 *)(param_6 + 6) = 1;
      goto LAB_1400ae74c;
    }
  }
  else if (param_3 != (byte *)0x0) {
    *param_2 = L'\0';
    goto LAB_1400ae76a;
  }
  uVar2 = 0x16;
  *(undefined1 *)(param_6 + 6) = 1;
  *(undefined4 *)((longlong)param_6 + 0x2c) = 0x16;
LAB_1400ae74c:
  FUN_1400a1080((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_6);
  return uVar2;
}

