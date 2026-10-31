/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404aca74 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404aca74(longlong param_1,uint *param_2,longlong param_3)

{
  longlong *plVar1;
  short *psVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = ram0x000140613b10 ^ (ulonglong)auStack_78;
  lVar7 = FUN_1404a25a8();
  local_58 = 0;
  local_50 = 0;
  lVar8 = FUN_1404a25a8();
  plVar1 = (longlong *)(lVar7 + 0xa0);
  *(undefined8 **)(lVar8 + 0x3a0) = &local_58;
  psVar2 = (short *)(param_1 + 0x80);
  *(longlong *)(lVar7 + 0x98) = param_1;
  *plVar1 = (longlong)psVar2;
  if ((psVar2 != (short *)0x0) && (*psVar2 != 0)) {
    FUN_1404accf4(&DAT_1405651a0,(int)DAT_140565310 + -1,plVar1);
  }
  uVar3 = local_58 >> 0x20;
  local_58 = local_58 & 0xffffffff00000000;
  if ((*(short **)(lVar7 + 0x98) == (short *)0x0) || (**(short **)(lVar7 + 0x98) == 0)) {
    if (((short *)*plVar1 == (short *)0x0) || (*(short *)*plVar1 == 0)) {
      local_58 = CONCAT44((int)uVar3,0x104);
      local_50 = (*(code *)s_GetSystemInfo_14059e018._0_8_)();
      local_58 = CONCAT44(local_50,(int)local_58);
    }
    else {
      lVar8 = FUN_1404a25a8();
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while (*(short *)(*(longlong *)(lVar8 + 0xa0) + lVar9 * 2) != 0);
      *(uint *)(lVar8 + 0xb4) = (uint)(lVar9 == 3);
      (*ram0x00014059ddf8)(&DAT_1404ad230,1);
      if ((local_58 & 4) == 0) {
        local_58 = local_58 & 0xffffffff00000000;
      }
    }
LAB_1404acbf2:
    if ((int)local_58 == 0) goto LAB_1404accd9;
  }
  else {
    if (((short *)*plVar1 == (short *)0x0) || (*(short *)*plVar1 == 0)) {
      GetLcidFromLanguage(&local_58);
    }
    else {
      GetLcidFromLangCountry(&local_58);
    }
    if ((int)local_58 == 0) {
      cVar4 = FUN_1404accf4(&DAT_140564d80,(int)DAT_140565190 + -1,lVar7 + 0x98);
      if (cVar4 != '\0') {
        if (((short *)*plVar1 == (short *)0x0) || (*(short *)*plVar1 == 0)) {
          GetLcidFromLanguage(&local_58);
        }
        else {
          GetLcidFromLangCountry(&local_58);
        }
      }
      goto LAB_1404acbf2;
    }
  }
  uVar5 = FUN_1404ad318(-(ulonglong)(param_1 != 0) & param_1 + 0x100U,&local_58);
  if ((uVar5 != 0) && (iVar6 = (*_DAT_14059e098)(uVar5 & 0xffff), iVar6 != 0)) {
    iVar6 = (*(code *)s_GetTimeZoneInformation_14059e09a._6_8_)(local_58._4_4_,1);
    if (iVar6 != 0) {
      if (param_2 != (uint *)0x0) {
        *param_2 = uVar5;
      }
      FUN_1404a3310(local_58._4_4_,lVar7 + 0x2f0,0x55);
      if (param_3 != 0) {
        FUN_1404a3310(local_58._4_4_,param_3 + 0x120,0x55,0);
        iVar6 = (*(code *)s_GetModuleHandleExW_14059df76._2_8_)(local_58._4_4_,0x1001,param_3,0x40);
        if ((iVar6 != 0) &&
           (iVar6 = (*(code *)s_GetModuleHandleExW_14059df76._2_8_)
                              (local_50,0x1002,param_3 + 0x80,0x40), iVar6 != 0)) {
          FUN_1404b7ee0(uVar5,param_3 + 0x100,0x10,10);
        }
      }
    }
  }
LAB_1404accd9:
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_48 ^ (ulonglong)auStack_78);
}

