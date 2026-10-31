/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004a2caa */

void FUN_004a2caa(uint *param_1,LPCWSTR param_2,uint param_3,int *param_4)

{
  char cVar1;
  WCHAR WVar2;
  LPCWSTR pWVar3;
  int iVar4;
  DWORD DVar5;
  WCHAR *pWVar6;
  uint uVar7;
  undefined8 local_2c;
  int local_24;
  uint *local_20;
  uint local_1c;
  LPCWSTR local_18;
  BOOL local_14;
  CHAR local_10 [8];
  uint local_8;
  
  local_8 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  uVar7 = 0;
  local_20 = param_1;
  local_18 = param_2;
  local_14 = 0;
  if ((param_1 != (uint *)0x0) && (param_3 == 0)) goto LAB_004a2f3c;
  if (param_2 == (LPCWSTR)0x0) {
    *(undefined1 *)(param_4 + 7) = 1;
    param_4[6] = 0x16;
    FUN_00495e14((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_4);
    goto LAB_004a2f3c;
  }
  if ((char)param_4[5] == '\0') {
    FUN_00488f30(param_4);
  }
  iVar4 = param_4[3];
  if (*(int *)(iVar4 + 8) == 0xfde9) {
    local_2c = 0;
    FUN_004a65d3(local_20,&local_18,param_3,(int *)&local_2c,(int)param_4);
    goto LAB_004a2f3c;
  }
  if (local_20 == (uint *)0x0) {
    if (*(int *)(iVar4 + 0xa8) == 0) {
      WVar2 = *local_18;
      pWVar6 = local_18;
      while (WVar2 != L'\0') {
        if (0xff < (ushort)WVar2) goto LAB_004a2f2e;
        pWVar6 = pWVar6 + 1;
        WVar2 = *pWVar6;
      }
      goto LAB_004a2f3c;
    }
    iVar4 = FUN_00496063(*(uint *)(iVar4 + 8),0,local_18,-1,(LPSTR)0x0,0,(LPCSTR)0x0,&local_14);
joined_r0x004a2f23:
    if ((iVar4 != 0) && (local_14 == 0)) goto LAB_004a2f3c;
  }
  else {
    if (*(int *)(iVar4 + 0xa8) == 0) {
      if (param_3 != 0) {
        do {
          if (0xff < (ushort)*local_18) goto LAB_004a2f2e;
          *(char *)((int)local_20 + uVar7) = (char)*local_18;
          WVar2 = *local_18;
          local_18 = local_18 + 1;
        } while ((WVar2 != L'\0') && (uVar7 = uVar7 + 1, uVar7 < param_3));
      }
      goto LAB_004a2f3c;
    }
    if (*(int *)(iVar4 + 4) == 1) {
      if (param_3 != 0) {
        local_1c = param_3;
        pWVar3 = local_18;
        do {
          if (*pWVar3 == L'\0') {
            param_3 = ((int)pWVar3 - (int)local_18 >> 1) + 1;
            break;
          }
          pWVar3 = pWVar3 + 1;
          local_1c = local_1c - 1;
        } while (local_1c != 0);
        iVar4 = param_4[3];
      }
      iVar4 = FUN_00496063(*(uint *)(iVar4 + 8),0,local_18,param_3,(LPSTR)local_20,param_3,
                           (LPCSTR)0x0,&local_14);
      goto joined_r0x004a2f23;
    }
    local_1c = FUN_00496063(*(uint *)(param_4[3] + 8),0,local_18,-1,(LPSTR)local_20,param_3,
                            (LPCSTR)0x0,&local_14);
    if (local_14 == 0) {
      if (local_1c != 0) goto LAB_004a2f3c;
      DVar5 = GetLastError();
      if (DVar5 == 0x7a) {
        if (param_3 != 0) {
          do {
            iVar4 = *(int *)(param_4[3] + 4);
            if (5 < iVar4) {
              iVar4 = 5;
            }
            uVar7 = FUN_00496063(*(uint *)(param_4[3] + 8),0,local_18,1,local_10,iVar4,(LPCSTR)0x0,
                                 &local_14);
            local_2c = CONCAT44(uVar7,(int)local_2c);
            if ((((uVar7 == 0) || (local_14 != 0)) || ((int)uVar7 < 0)) || (5 < uVar7))
            goto LAB_004a2f2e;
            if (param_3 < uVar7 + local_1c) break;
            local_24 = 0;
            if (0 < (int)uVar7) {
              do {
                cVar1 = local_10[local_24];
                *(char *)((int)local_20 + local_1c) = cVar1;
                if (cVar1 == '\0') goto LAB_004a2f3c;
                local_24 = local_24 + 1;
                local_1c = local_1c + 1;
              } while (local_24 < (int)uVar7);
            }
            local_18 = local_18 + 1;
          } while (local_1c < param_3);
        }
        goto LAB_004a2f3c;
      }
    }
  }
LAB_004a2f2e:
  param_4[6] = 0x2a;
  *(undefined1 *)(param_4 + 7) = 1;
LAB_004a2f3c:
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
}

