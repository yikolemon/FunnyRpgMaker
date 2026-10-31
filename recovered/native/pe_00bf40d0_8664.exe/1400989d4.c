/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400989d4 */

void FUN_1400989d4(WCHAR param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  ulonglong uVar6;
  undefined *puVar7;
  byte *pbVar8;
  undefined1 auStackY_78 [32];
  int local_48;
  byte local_44 [12];
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStackY_78;
  if ((*(uint *)((longlong)param_2 + 0x14) >> 0xc & 1) == 0) {
    iVar2 = FUN_1400a5bb4((longlong)param_2);
    puVar7 = &DAT_14013bf10;
    if ((iVar2 == -1) || (iVar2 = FUN_1400a5bb4((longlong)param_2), iVar2 == -2)) {
      puVar5 = &DAT_14013bf10;
    }
    else {
      iVar2 = FUN_1400a5bb4((longlong)param_2);
      uVar3 = FUN_1400a5bb4((longlong)param_2);
      puVar5 = (undefined *)
               ((&DAT_1401433a0)[(longlong)iVar2 >> 6] + (ulonglong)(uVar3 & 0x3f) * 0x48);
    }
    if (1 < (byte)(puVar5[0x39] - 1)) {
      iVar2 = FUN_1400a5bb4((longlong)param_2);
      if ((iVar2 != -1) && (iVar2 = FUN_1400a5bb4((longlong)param_2), iVar2 != -2)) {
        iVar2 = FUN_1400a5bb4((longlong)param_2);
        uVar3 = FUN_1400a5bb4((longlong)param_2);
        puVar7 = (undefined *)
                 ((ulonglong)(uVar3 & 0x3f) * 0x48 + (&DAT_1401433a0)[(longlong)iVar2 >> 6]);
      }
      iVar2 = 0;
      if ((char)puVar7[0x38] < '\0') {
        local_48 = 0;
        iVar4 = FUN_1400a5358(&local_48,(undefined1 (*) [32])local_44,5,param_1,param_3);
        if ((iVar4 == 0) && (0 < local_48)) {
          pbVar8 = local_44;
          do {
            uVar6 = FUN_1400987bc(*pbVar8,param_2,(longlong)param_3);
            if ((int)uVar6 == -1) break;
            iVar2 = iVar2 + 1;
            pbVar8 = pbVar8 + 1;
          } while (iVar2 < local_48);
        }
        goto LAB_140098b46;
      }
    }
    plVar1 = param_2 + 2;
    *(int *)plVar1 = (int)*plVar1 + -2;
    if (-1 < (int)*plVar1) {
      *(WCHAR *)*param_2 = param_1;
      *param_2 = *param_2 + 2;
      goto LAB_140098b46;
    }
  }
  else {
    plVar1 = param_2 + 2;
    *(int *)plVar1 = (int)*plVar1 + -2;
    if (-1 < (int)*plVar1) {
      *(WCHAR *)*param_2 = param_1;
      *param_2 = *param_2 + 2;
      goto LAB_140098b46;
    }
  }
  FUN_1400ac068(param_1,param_2,param_3);
LAB_140098b46:
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_38 ^ (ulonglong)auStackY_78);
}

