/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a7fe8 */

void FUN_1400a7fe8(longlong param_1,UINT *param_2,LPWSTR param_3,undefined4 param_4)

{
  LPWSTR pWVar1;
  short *psVar2;
  UINT _Val;
  BOOL BVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  LPWSTR pWVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  LCID local_50;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_78;
  pWVar9 = param_3;
  lVar5 = FUN_1400a1528();
  local_58 = 0;
  local_50 = 0;
  lVar6 = FUN_1400a1528();
  pWVar1 = (LPWSTR)(lVar5 + 0xa0);
  *(undefined8 **)(lVar6 + 0x3a0) = &local_58;
  psVar2 = (short *)(param_1 + 0x80);
  *(longlong *)(lVar5 + 0x98) = param_1;
  *(short **)pWVar1 = psVar2;
  if ((psVar2 != (short *)0x0) && (*psVar2 != 0)) {
    pWVar9 = pWVar1;
    FUN_1400a8268(0x140110390,(int)DAT_140110500 + -1,(longlong *)pWVar1);
  }
  uVar7 = local_58 >> 0x20;
  local_58 = local_58 & 0xffffffff00000000;
  if ((*(short **)(lVar5 + 0x98) == (short *)0x0) || (**(short **)(lVar5 + 0x98) == 0)) {
    if ((*(short **)pWVar1 == (short *)0x0) || (**(short **)pWVar1 == 0)) {
      local_58 = CONCAT44((int)uVar7,0x104);
      local_50 = GetUserDefaultLCID();
      local_58 = CONCAT44(local_50,(uint)local_58);
    }
    else {
      lVar6 = FUN_1400a1528();
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while (*(short *)(*(longlong *)(lVar6 + 0xa0) + lVar8 * 2) != 0);
      *(uint *)(lVar6 + 0xb4) = (uint)(lVar8 == 3);
      EnumSystemLocalesW(FUN_1400a87a4,1);
      if ((local_58 & 4) == 0) {
        local_58 = local_58 & 0xffffffff00000000;
      }
    }
LAB_1400a8166:
    if ((uint)local_58 == 0) goto LAB_1400a824d;
  }
  else {
    if ((*(short **)pWVar1 == (short *)0x0) || (**(short **)pWVar1 == 0)) {
      GetLcidFromLanguage((byte *)&local_58);
    }
    else {
      GetLcidFromLangCountry((uint *)&local_58);
    }
    if ((uint)local_58 == 0) {
      pWVar9 = (LPWSTR)(lVar5 + 0x98);
      uVar7 = FUN_1400a8268(0x14010ff70,(int)DAT_140110380 + -1,(longlong *)pWVar9);
      if ((char)uVar7 != '\0') {
        if ((*(short **)pWVar1 == (short *)0x0) || (**(short **)pWVar1 == 0)) {
          GetLcidFromLanguage((byte *)&local_58);
        }
        else {
          GetLcidFromLangCountry((uint *)&local_58);
        }
      }
      goto LAB_1400a8166;
    }
  }
  _Val = FUN_1400a888c((ushort *)(-(ulonglong)(param_1 != 0) & param_1 + 0x100U),(longlong)&local_58
                       ,pWVar9,param_4);
  if ((_Val != 0) && (BVar3 = IsValidCodePage(_Val & 0xffff), BVar3 != 0)) {
    BVar3 = IsValidLocale(local_58._4_4_,1);
    if (BVar3 != 0) {
      if (param_2 != (UINT *)0x0) {
        *param_2 = _Val;
      }
      FUN_1400a2074(local_58._4_4_,(short *)(lVar5 + 0x2f0),0x55,0);
      if (param_3 != (LPWSTR)0x0) {
        FUN_1400a2074(local_58._4_4_,param_3 + 0x90,0x55,0);
        iVar4 = GetLocaleInfoW(local_58._4_4_,0x1001,param_3,0x40);
        if ((iVar4 != 0) &&
           (iVar4 = GetLocaleInfoW(local_50,0x1002,param_3 + 0x40,0x40), iVar4 != 0)) {
          FID_conflict__ltow_s(_Val,param_3 + 0x80,0x10,10);
        }
      }
    }
  }
LAB_1400a824d:
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStack_78);
}

