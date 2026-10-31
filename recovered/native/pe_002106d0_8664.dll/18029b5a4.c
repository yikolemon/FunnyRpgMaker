/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18029b5a4 */

void FUN_18029b5a4(longlong param_1,uint *param_2,LPWSTR param_3)

{
  longlong *plVar1;
  short *psVar2;
  ulonglong uVar3;
  char cVar4;
  uint _Val;
  BOOL BVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  LCID local_50;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_78;
  lVar7 = FUN_1802910d8();
  local_58 = 0;
  local_50 = 0;
  lVar8 = FUN_1802910d8();
  plVar1 = (longlong *)(lVar7 + 0xa0);
  *(undefined8 **)(lVar8 + 0x3a0) = &local_58;
  psVar2 = (short *)(param_1 + 0x80);
  *(longlong *)(lVar7 + 0x98) = param_1;
  *plVar1 = (longlong)psVar2;
  if ((psVar2 != (short *)0x0) && (*psVar2 != 0)) {
    FUN_18029b824(&PTR_u_america_180353cd0,(int)DAT_180353e40 + -1,plVar1);
  }
  uVar3 = local_58 >> 0x20;
  local_58 = local_58 & 0xffffffff00000000;
  if ((*(short **)(lVar7 + 0x98) == (short *)0x0) || (**(short **)(lVar7 + 0x98) == 0)) {
    if (((short *)*plVar1 == (short *)0x0) || (*(short *)*plVar1 == 0)) {
      local_58 = CONCAT44((int)uVar3,0x104);
      local_50 = GetUserDefaultLCID();
      local_58 = CONCAT44(local_50,(int)local_58);
    }
    else {
      lVar8 = FUN_1802910d8();
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while (*(short *)(*(longlong *)(lVar8 + 0xa0) + lVar9 * 2) != 0);
      *(uint *)(lVar8 + 0xb4) = (uint)(lVar9 == 3);
      EnumSystemLocalesW(FUN_18029bd60,1);
      if ((local_58 & 4) == 0) {
        local_58 = local_58 & 0xffffffff00000000;
      }
    }
LAB_18029b722:
    if ((int)local_58 == 0) goto LAB_18029b809;
  }
  else {
    if (((short *)*plVar1 == (short *)0x0) || (*(short *)*plVar1 == 0)) {
      GetLcidFromLanguage(&local_58);
    }
    else {
      GetLcidFromLangCountry(&local_58);
    }
    if ((int)local_58 == 0) {
      cVar4 = FUN_18029b824(&PTR_u_american_1803896b0_0x10_1803538b0,(int)DAT_180353cc0 + -1,
                            lVar7 + 0x98);
      if (cVar4 != '\0') {
        if (((short *)*plVar1 == (short *)0x0) || (*(short *)*plVar1 == 0)) {
          GetLcidFromLanguage(&local_58);
        }
        else {
          GetLcidFromLangCountry(&local_58);
        }
      }
      goto LAB_18029b722;
    }
  }
  _Val = FUN_18029be48(-(ulonglong)(param_1 != 0) & param_1 + 0x100U,&local_58);
  if ((_Val != 0) && (BVar5 = IsValidCodePage(_Val & 0xffff), BVar5 != 0)) {
    BVar5 = IsValidLocale(local_58._4_4_,1);
    if (BVar5 != 0) {
      if (param_2 != (uint *)0x0) {
        *param_2 = _Val;
      }
      FUN_180291e40(local_58._4_4_,lVar7 + 0x2f0,0x55);
      if (param_3 != (LPWSTR)0x0) {
        FUN_180291e40(local_58._4_4_,param_3 + 0x90,0x55,0);
        iVar6 = GetLocaleInfoW(local_58._4_4_,0x1001,param_3,0x40);
        if ((iVar6 != 0) &&
           (iVar6 = GetLocaleInfoW(local_50,0x1002,param_3 + 0x40,0x40), iVar6 != 0)) {
          FID_conflict__ltow_s(_Val,param_3 + 0x80,0x10,10);
        }
      }
    }
  }
LAB_18029b809:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_78);
}

